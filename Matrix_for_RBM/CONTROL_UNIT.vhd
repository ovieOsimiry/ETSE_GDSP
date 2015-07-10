----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:47:35 03/02/2015 
-- Design Name: 
-- Module Name:    ADDR_GEN_FSM - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity CONTROL_UNIT is
	generic(
		ADDR_WIDTH   : integer := 10;
		DATA_WIDTH	 :integer:=18;
		OPCODE_WIDTH : integer := 3;
		COLUMN_TOTAL : integer := 3);
	Port(CLK          : in  STD_LOGIC;
		 RST          : in  STD_LOGIC;
		 LOAD         : in  STD_LOGIC;		
		 P            : in  STD_LOGIC;
		 G            : in  STD_LOGIC;
		 D_IN		 	:in std_logic_vector(DATA_WIDTH-1 downto 0);
		 WE           : out std_logic;
		 D_OUT			:out std_logic_vector(DATA_WIDTH-1 downto 0);
		 CSEL			  :out std_logic_vector(COLUMN_TOTAL-1 downto 0);
		 ADDR       : out STD_LOGIC_VECTOR(ADDR_WIDTH - 1 downto 0);
		 P_SHFT       : out STD_LOGIC;
		 OPCODE       : out STD_LOGIC_VECTOR(OPCODE_WIDTH - 1 downto 0);
		 G_ROW        : out STD_LOGIC_VECTOR(ADDR_WIDTH - 1 downto 0);
		 G_COLUMN     : out STD_LOGIC_VECTOR(COLUMN_TOTAL - 1 downto 0);
		 Bank_Sel		: out std_logic;	
		 OP_DONE      : out std_logic;
		 LOADING_DONE : out std_logic);
end CONTROL_UNIT;

architecture Behavioral of CONTROL_UNIT is
	
signal i_addr_cnt,i_row_cnt,i_col_cnt: integer range 0 to COLUMN_TOTAL;
signal i_OP_START: STD_LOGIC;
 signal s_CSEL: std_logic_vector(COLUMN_TOTAL-1 downto 0);

type state_type is (START,LOADING,LOAD_DONE,PG,PtG,PGt,PtGt,DONE);
signal current_state,next_state: state_type;
signal s_P_ADDR : STD_LOGIC_VECTOR(ADDR_WIDTH - 1 downto 0);
signal s_LOADING_DONE, s_Bank_Sel : std_logic;

--dubug sigals
signal s_a, s_b: integer:=0;

begin




process (CLK,RST)
begin
if rising_edge(CLK) then
		if(RST='1') then
			current_state<=START;
		else
			current_state <= next_state;   --state change.
		end if;
end if;
end process;
-----------------------------------------------------------
process(CLK)
variable i,j,v_load_count: integer range 0 to COLUMN_TOTAL;
variable v_CSEL : std_logic_vector(COLUMN_TOTAL-1 downto 0);
variable v_OPCODE: std_logic_vector(OPCODE_WIDTH-1 downto 0);
variable v_WE: std_logic;
variable v_LOADING_DONE, v_OP_DONE: std_logic:='0';

begin
if (rising_edge(CLK)) then
	case current_state is
	
		when START =>
			i_row_cnt<=0;
			i_col_cnt<=0;
			i_addr_cnt <= 0;
			OP_DONE<='0';--reset the done signal
			v_OP_DONE := '0';--reset the done signal
			next_state<=current_state;
			i:=0;
			j:=0;
			P_SHFT <='0';
			WE <= '0';
			s_Bank_Sel <= '0';
			OPCODE <= (others => '0');
			s_P_ADDR <= (others => '1');

			s_CSEL <= (others => '0'); --"001";

			s_LOADING_DONE <= '0';
			
				IF LOAD = '1' then
					next_state<=LOADING;					
				ELSE
					next_state<=LOAD_DONE;
				END IF;
					-----------------------------------
		when LOADING =>
				OPCODE <="000";	-- Set DSP output to A input, the Data passes through DSP so we do not want to perform any operation on the data since we are just saving it on block RAM. (P = A)			
				if v_LOADING_DONE = '0' then					
					v_LOADING_DONE := '0';
					v_WE := '1';					
					if i = COLUMN_TOTAL then -- check if we have finished a mini-round of data loading (for a 3by3 matrix this will be when i=3)
						
						if i = COLUMN_TOTAL and j = COLUMN_TOTAL-1 then -- if loading is complete set LOADING_DONE signal.
							v_LOADING_DONE := '1';
							v_WE := '0';
							v_CSEL := (others => '0');
						else							
							v_LOADING_DONE := '0';							
							j:= j+1;
							i:= 1;
							v_CSEL :=(CSEL'length-1 =>'1', others => '0');
							if j < COLUMN_TOTAL - 1 then -- check if we are still a column less than the total number of columns							
								v_CSEL := to_stdlogicvector(to_bitvector(v_CSEL) srl (COLUMN_TOTAL - j - 1));	-- This line of code will maintain the offset of the circulant matrix whenever we start a new mini-round.										
							else       
								v_CSEL := (v_CSEL'length-1 => '1', others => '0');-- This is the defualt starting value for the last mini-round.										
							end if; 
						end if;					
					else
						i:= i + 1;						
						if i = 1 and j = 0 then -- Preset v_CEL to "0000.......1" This value is only used once when we enter this state.
							v_CSEL := (0 => '1', others => '0');
						else
							v_CSEL := v_CSEL(v_CSEL'length - 2 downto 0) & v_CSEL(v_CSEL'length - 1); --rol 1 (shift one place left with roll over).
						end if;
					end if;
				else
					--v_LOADING_DONE := '0';
					if v_LOADING_DONE = '1' then
						next_state <= LOAD_DONE;
						--v_LOADING_DONE := '1';
					else
						next_state <= LOADING;
					end if;
				end if;				
				
				s_P_ADDR <= std_logic_vector(to_unsigned(j, ADDR_WIDTH));				
				--D_OUT <= D_IN;
				s_CSEL <= v_CSEL;
				WE <= v_WE;
				s_a <= i;
				s_b <= j;
				s_LOADING_DONE <= v_LOADING_DONE;
				
		when LOAD_DONE =>
				--s_Bank_Sel <= '1';
				i:=0;
				j:=0;
				WE <= '0';
				s_CSEL <= (others => '1');--Enble BRAM for Saving multiplication result.		
				IF LOAD = '1' then					
					next_state <= LOAD_DONE;	
				else
				if (P='0') then
						if G='0' then
							next_state<=PG;
							i_addr_cnt<=COLUMN_TOTAL-1;
							i_row_cnt<=1;
							i_col_cnt<=0;
							P_SHFT <='1';
							OPCODE<="001";
						else
							next_state<=PGt;
							P_SHFT <='1';
							i_addr_cnt<=COLUMN_TOTAL-1;
							i_row_cnt<=0;
							i_col_cnt<=1;
							OPCODE<="001";
						end if;
					else
						if G='0' then
							next_state<=PtG;
							P_SHFT <='0';
							i_addr_cnt<=1;
							i_row_cnt<=1;
							i_col_cnt<=0;
							OPCODE<="001";
						else
							next_state<=PtGt;
							P_SHFT <='0';
							i_addr_cnt<=1;
							i_row_cnt<=0;
							i_col_cnt<=1;
							OPCODE<="001";
						end if;
					end if;
				end if;
		when PG =>
					s_Bank_Sel <= '1';
					v_OPCODE :="011";
					WE <='0';
					if v_OP_DONE = '0' then
						if (i_row_cnt=COLUMN_TOTAL-1) then				---G row
							i_row_cnt<=0;
						else
							i_row_cnt<=i_row_cnt+1;
						end if;
						if i_addr_cnt=0 then									--- P addr
							i_addr_cnt<=COLUMN_TOTAL-1;
						else
							i_addr_cnt<=i_addr_cnt-1;
						end if;
						if i= COLUMN_TOTAL-1 then 		-- full round
							j:=j+1;
							i_col_cnt<=i_col_cnt+1;			-- next G column
									if ((i_row_cnt+1)=COLUMN_TOTAL-1) then		-- G row
										i_row_cnt<=0;
									else
										--i_row_cnt<=j+1;
										if j = COLUMN_TOTAL then
											i_col_cnt<=j-1;
										end if;
									end if;
							i_addr_cnt<=COLUMN_TOTAL-1-j;
							i:=0;
							v_OPCODE := "001";
							if i = 0 and j = 1 then
								i_row_cnt <= COLUMN_TOTAL-1;-- 2;
							end if;
						else
							i:=i+1;
							if i = COLUMN_TOTAL-1 then
								WE<='1';
							end if;
								v_OPCODE := "011";-- make parameterizable latter.
						end if;
						if j= COLUMN_TOTAL then 
							v_OP_DONE :='1';
							v_OPCODE :="111";							
						else
							v_OP_DONE :='0';						
						end if;
					else
						if v_OP_DONE = '1' then
							next_state<=DONE;
							v_OPCODE := "111";
						else
							next_state<=current_state;
						end if;
					end if;
					OPCODE<= v_OPCODE; --"111";
					OP_DONE <= v_OP_DONE;
					s_a <= i;
					s_b <= j;
			when PGt=>
					s_Bank_Sel <= '1';
					v_OPCODE :="011";
					WE <='0';
					if v_OP_DONE = '0' then
						if (i_col_cnt=COLUMN_TOTAL-1) then				---G col
							i_col_cnt<=0;
						else
							i_col_cnt<=i_col_cnt+1;
						end if;
						if i_addr_cnt=0 then									--- P addr
							i_addr_cnt<=COLUMN_TOTAL-1;
						else
							i_addr_cnt<=i_addr_cnt-1;
						end if;
						if i= COLUMN_TOTAL-1 then 		-- full round 
							j:=j+1;
							i_row_cnt<=i_row_cnt+1;			-- next G row
									if ((i_col_cnt+1)=COLUMN_TOTAL-1) then		-- G col
										i_col_cnt<=0;
									else
										--i_col_cnt<=j+1;
										if j = COLUMN_TOTAL then
											i_row_cnt<=j-1;
										end if;
									end if;
							i_addr_cnt<=COLUMN_TOTAL-1-j;
							i:=0;
							v_OPCODE := "001";
							if i = 0 and j = 1 then
								i_col_cnt <= COLUMN_TOTAL-1;-- 2;
							end if;
						else
							i:=i+1;
							if i = COLUMN_TOTAL-1 then
								WE<='1';
							end if;
							v_OPCODE := "011";-- make parameterizable latter.					
						end if;
						if j= COLUMN_TOTAL then 
							v_OP_DONE :='1';
							v_OPCODE :="111";							
						else
							v_OP_DONE :='0';
						end if;
					else
						if v_OP_DONE = '1' then
							next_state<=DONE;
							v_OPCODE := "111";
						else
							next_state<=current_state;
						end if;
					end if;
					OPCODE<= v_OPCODE; --"111";
					OP_DONE <= v_OP_DONE;
			when PtG=>
					s_Bank_Sel <= '1';
					v_OPCODE :="011";
					WE <='0';
					if v_OP_DONE = '0' then
						if (i_row_cnt=COLUMN_TOTAL-1) then				---G row
							i_row_cnt<=0;
						else
							i_row_cnt<=i_row_cnt+1;
						end if;
						if i_addr_cnt=COLUMN_TOTAL-1 then									--- P addr
							i_addr_cnt<=0;
						else
							i_addr_cnt<=i_addr_cnt+1;
						end if;
						if i= COLUMN_TOTAL-1 then 		-- full round 
							j:=j+1;
							i_col_cnt<=i_col_cnt+1;			-- next G column
									if ((i_row_cnt+1)=COLUMN_TOTAL-1) then		-- G row
										i_row_cnt<=0;
									else
										--i_row_cnt<=j+1;
										if j = COLUMN_TOTAL then
											i_col_cnt<=j-1;
										end if;
									end if;
							if j=COLUMN_TOTAL-1 then									--- P addr
								i_addr_cnt<=0;
							else
								i_addr_cnt<=j+1;
							end if;
							i:=0;
							v_OPCODE := "001";
							if i = 0 and j = 1 then -- G row
								i_row_cnt <= COLUMN_TOTAL-1;-- 2;
							end if;
						else
							i:=i+1;
							if i = COLUMN_TOTAL-1 then
								WE<='1';
							end if;
								v_OPCODE := "011";-- make parameterizable latter.
						end if;
						if j= COLUMN_TOTAL then 
							next_state<=DONE;
							v_OP_DONE :='1';
							v_OPCODE :="111";
						else
							v_OP_DONE :='0';
						end if;
					else
						if v_OP_DONE = '1' then
							next_state<=DONE;
							v_OPCODE := "111";
						else
							next_state<=current_state;
						end if;
					end if;
					OPCODE<= v_OPCODE; --"111";
					OP_DONE <= v_OP_DONE;
					
			when PtGt =>
					s_Bank_Sel <= '1';
					v_OPCODE :="011";
					WE <='0';
					if v_OP_DONE = '0' then
							if (i_col_cnt=COLUMN_TOTAL-1) then				---G col
								i_col_cnt<=0;
							else
								i_col_cnt<=i_col_cnt+1;
							end if;
						if i_addr_cnt=COLUMN_TOTAL-1 then									--- P addr
							i_addr_cnt<=0;
						else
							i_addr_cnt<=i_addr_cnt+1;
						end if;
						if i= COLUMN_TOTAL-1 then 		-- full round 
							j:=j+1;
							i_row_cnt<=i_row_cnt+1;			-- next G row
									if ((i_col_cnt+1)=COLUMN_TOTAL-1) then		-- G col
										i_col_cnt<=0;
									else
										--i_col_cnt<=j+1;
										if j = COLUMN_TOTAL then
											i_row_cnt<=j-1;
										end if;
									end if;
							if j=COLUMN_TOTAL-1 then									--- P addr
								i_addr_cnt<=0;
							else
								i_addr_cnt<=j+1;
							end if;
							i:=0;
							v_OPCODE := "001";
							if i = 0 and j = 1 then -- G row
								i_col_cnt <= COLUMN_TOTAL-1;-- 2;
							end if;
						else
							i:=i+1;
							if i = COLUMN_TOTAL-1 then
								WE<='1';
							end if;
								v_OPCODE := "011";-- make parameterizable latter.					
						end if;
						if j= COLUMN_TOTAL then 
							--next_state<=DONE;
							v_OP_DONE :='1';
							v_OPCODE :="111";
						else
							v_OP_DONE :='0';
						end if;
					else
						if v_OP_DONE = '1' then
							next_state<=DONE;
							v_OPCODE := "111";
						else
							next_state<=current_state;
						end if;
					end if;
					OPCODE<= v_OPCODE; --"111";
					OP_DONE <= v_OP_DONE;
			
			when others =>
							WE<='0';
							--P_SHFT <= '0';
							OP_DONE<='0';	
							i:=0;
							
	end case;
end if;
end process;
						ADDR <= s_P_ADDR when current_state = LOADING else std_logic_vector(to_unsigned(i_addr_cnt,ADDR_WIDTH));
						
						G_ROW<=std_logic_vector(to_unsigned(i_row_cnt,ADDR_WIDTH));
						G_COLUMN<=std_logic_vector(to_unsigned(i_col_cnt,COLUMN_TOTAL));
						CSEL <= s_CSEL;
						LOADING_DONE <= s_LOADING_DONE;
						D_OUT <= D_IN;
						Bank_Sel <= s_Bank_Sel;
							
-----------------------------------------------------------
end Behavioral;

