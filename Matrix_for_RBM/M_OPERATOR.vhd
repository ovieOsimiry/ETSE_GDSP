----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:47:40 03/09/2015 
-- Design Name: 
-- Module Name:    M_OPERATOR - Behavioral 
-- Project Name: 
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity M_OPERATOR is
generic (
			 ADDR_WIDTH: integer :=10;
			 OPERATION_WIDTH: integer:=5;			-- NOT A DSP OPCODE, HIGHER-LEVEL OPCODE
														--				| DST | SRC | OPERATION TYPE|
														--				4     3     2           0
														--	OPERATION: 000 -NULL OP 001 -LOAD 010 PG 011 PGt 100 PtG 101 PtGt 
	
			 COLUMN_TOTAL: integer :=3;
			 DATA_WIDTH: integer:=18);
    Port ( CLK : in  STD_LOGIC;
           RST : in  STD_LOGIC;
           DATAIN : in  STD_LOGIC_VECTOR (DATA_WIDTH-1 downto 0);
           DOUT : out  STD_LOGIC_VECTOR (DATA_WIDTH-1 downto 0);
           OPERATION : in  STD_LOGIC_VECTOR (OPERATION_WIDTH-1 downto 0);
           GROW : out  STD_LOGIC_VECTOR (ADDR_WIDTH-1 downto 0);
           GCOL : out  STD_LOGIC_VECTOR (COLUMN_TOTAL-1 downto 0);
           DVALID : in  STD_LOGIC;
           OP_DONE : out  STD_LOGIC);
end M_OPERATOR;

architecture Behavioral of M_OPERATOR is
component MEMARRAY_PCIN 
generic(
		COLUMN_TOTAL: integer:=3;
		OPCODE_WIDTH: integer :=3;
      ADDR_WIDTH: integer:=10;
      DATA_WIDTH:integer:=18;
		DELAY_BITS: integer:=4;
		DATA_WIDE_WIDTH: integer:=48
   );
    Port ( CLK : in  STD_LOGIC;
           ADDRA : in  STD_LOGIC_VECTOR (ADDR_WIDTH-1 downto 0);
           ADDRB : in  STD_LOGIC_VECTOR (ADDR_WIDTH-1 downto 0);
           WE : in  STD_LOGIC;
           OE : in  STD_LOGIC;
			  ASHFT: in STD_LOGIC;			-- scratchpad shift enable
           OPCODE : in  STD_LOGIC_VECTOR (OPCODE_WIDTH-1 downto 0);
           DOUT : out  STD_LOGIC_VECTOR (DATA_WIDTH-1 downto 0);
			  DIN  : in  STD_LOGIC_VECTOR (DATA_WIDTH-1 downto 0);
           CSEL : in  STD_LOGIC_VECTOR (COLUMN_TOTAL-1 downto 0));
end component;
-- SIGNALS TO MEMARRAY
  constant OPCODE_WIDTH: integer:=3;
  signal WE,OE: std_logic;
  signal P_ADDRA : STD_LOGIC_VECTOR (ADDR_WIDTH-1 downto 0);
  signal P_ADDRB : STD_LOGIC_VECTOR (ADDR_WIDTH-1 downto 0);
  signal P_SHFT : std_logic;
  signal CSEL	:	STD_LOGIC_VECTOR (COLUMN_TOTAL-1 downto 0);
  signal OPCODE:  STD_LOGIC_VECTOR (OPCODE_WIDTH-1 downto 0);
  signal DIN:  STD_LOGIC_VECTOR (DATA_WIDTH-1 downto 0);
------------------------------------------------------------

signal i_addr_cnt,i_row_cnt,i_col_cnt: integer range 0 to COLUMN_TOTAL;
signal i_OP_START: STD_LOGIC;
type state_type is (START, PG,PtG,PGt,PtGt,DONE, LOAD);
signal current_state,next_state: state_type;

begin
process (CLK,RST)
begin
if rising_edge(CLK) then
DIN<=DATAIN;
		if(RST='1') then
			current_state<=START;
		else
			current_state <= next_state;   --state change.
		end if;
end if;
end process;
-----------------------------------------------------------
process(CLK)
variable i,j: integer range 0 to COLUMN_TOTAL;
begin
if (rising_edge(CLK)) then
	case current_state is
		when START =>
						i_row_cnt<=0;
						i_col_cnt<=0;
						OP_DONE<='0';
						next_state<=current_state;
						i:=0;
						j:=0;
						case OPERATION(2 downto 0) is
					--		when "000" =>
							
							when "001" =>
								next_state<=LOAD;
								P_SHFT<='0';
								i_addr_cnt<=0;
								OPCODE<="000";
								CSEL<="100";
								WE<='0';
								OE<='0';
								i:=0;
								
							when "010" =>
								next_state<=PG;
								CSEL<=(others=>'1');
								i_addr_cnt<=COLUMN_TOTAL-1;
								i_row_cnt<=1;
								i_col_cnt<=0;
								P_SHFT<='1';
								OE<='1';
								OPCODE<="001";
							when "011" =>
								next_state<=PGt;
								P_SHFT<='1';
								CSEL<=(others=>'1');
								i_addr_cnt<=COLUMN_TOTAL-1;
								i_row_cnt<=0;
								i_col_cnt<=1;
								OE<='1';
								OPCODE<="001";
							when "100" =>
								next_state<=PtG;
								P_SHFT<='0';
								CSEL<=(others=>'1');
								i_addr_cnt<=1;
								i_row_cnt<=1;
								i_col_cnt<=0;
								OE<='1';
								OPCODE<="001";
							when "101" =>
								next_state<=PtGt;
								P_SHFT<='0';
								CSEL<=(others=>'1');
								i_addr_cnt<=1;
								i_row_cnt<=0;
								i_col_cnt<=1;
								OE<='1';
								OPCODE<="001";
							when others =>
								WE<='0';
								OP_DONE<='0';	
								OE<='0';
								i:=0;
						end case;
					-----------------------------------
		when LOAD=>
						WE<='1';
						CSEL <= CSEL (CSEL'length-2 downto 0) & CSEL(CSEL'length-1); -- rol 1;	
						if i=COLUMN_TOTAL-1 then
							i_addr_cnt<=i_addr_cnt+1;
							i:=0;
						else
							i:=i+1;
						end if;
						if i_addr_cnt=COLUMN_TOTAL-1 then
							next_state<=DONE;
							OP_DONE<='1';
						else
							next_state<=current_state;
							OP_DONE<='0';						
						end if;
		when PG =>
						OPCODE<="011";
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
						WE<='0';
						if i= COLUMN_TOTAL-1 then 		-- full round 
						OPCODE<="001";
						WE<='1';
							j:=j+1;
							i_col_cnt<=i_col_cnt+1;			-- next G column
									if ((i_row_cnt+1)=COLUMN_TOTAL-1) then		-- G row
										i_row_cnt<=0;
									else
										i_row_cnt<=j+1;
									end if;
							i_addr_cnt<=COLUMN_TOTAL-1-j;
							i:=0;
						else
							i:=i+1;
						end if;
						if j= COLUMN_TOTAL then 
							next_state<=DONE;
							OP_DONE<='1';
						else
							next_state<=current_state;
							OP_DONE<='0';						
						end if;
			when PGt=>
						OPCODE<="011";
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
						WE<='0';
						if i= COLUMN_TOTAL-1 then 		-- full round 
							OPCODE<="001";
							WE<='1';
							j:=j+1;
							i_row_cnt<=i_row_cnt+1;			-- next G row
									if ((i_col_cnt+1)=COLUMN_TOTAL-1) then		-- G col
										i_col_cnt<=0;
									else
										i_col_cnt<=j+1;
									end if;
							i_addr_cnt<=COLUMN_TOTAL-1-j;
							i:=0;
						else
							i:=i+1;
						end if;
						if j= COLUMN_TOTAL then 
							next_state<=DONE;
							OP_DONE<='1';
						else
							next_state<=current_state;
							OP_DONE<='0';						
						end if;
			
			when PtG=>
						OPCODE<="011";
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
						WE<='0';
						if i= COLUMN_TOTAL-1 then 		-- full round 
							OPCODE<="001";
							WE<='1';
							j:=j+1;
							i_col_cnt<=i_col_cnt+1;			-- next G column
									if ((i_row_cnt+1)=COLUMN_TOTAL-1) then		-- G row
										i_row_cnt<=0;
									else
										i_row_cnt<=j+1;
									end if;
							if j=COLUMN_TOTAL-1 then									--- P addr
								i_addr_cnt<=0;
							else
								i_addr_cnt<=j+1;
							end if;
							i:=0;
						else
							i:=i+1;
						end if;
						if j= COLUMN_TOTAL then 
							next_state<=DONE;
							OP_DONE<='1';
						else
							next_state<=current_state;
							OP_DONE<='0';						
						end if;
			when PtGt =>
							OPCODE<="011";
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
						WE<='0';
						if i= COLUMN_TOTAL-1 then 		-- full round 
							OPCODE<="001";
							WE<='1';
							j:=j+1;
							i_row_cnt<=i_row_cnt+1;			-- next G row
									if ((i_col_cnt+1)=COLUMN_TOTAL-1) then		-- G col
										i_col_cnt<=0;
									else
										i_col_cnt<=j+1;
									end if;
							if j=COLUMN_TOTAL-1 then									--- P addr
								i_addr_cnt<=0;
							else
								i_addr_cnt<=j+1;
							end if;
							i:=0;
						else
							i:=i+1;
						end if;
						if j= COLUMN_TOTAL then 
							next_state<=DONE;
							OP_DONE<='1';
						else
							next_state<=current_state;
							OP_DONE<='0';						
						end if;
			
			when others =>
							WE<='0';
							OP_DONE<='0';	
							i:=0;
							
	end case;
end if;
end process;
						P_ADDRA<=OPERATION(4) & std_logic_vector(to_unsigned(i_addr_cnt,ADDR_WIDTH-1));
						P_ADDRB<=OPERATION(3) & std_logic_vector(to_unsigned(i_addr_cnt,ADDR_WIDTH-1));
						GROW<=std_logic_vector(to_unsigned(i_row_cnt,ADDR_WIDTH));
						GCOL<=std_logic_vector(to_unsigned(i_col_cnt,COLUMN_TOTAL));
-----------------------------------------------------------
memory: MEMARRAY_PCIN 
generic map(
		COLUMN_TOTAL=>3,
		OPCODE_WIDTH=>3,
      ADDR_WIDTH=>10,
      DATA_WIDTH=>18,
		DELAY_BITS=>4,
		DATA_WIDE_WIDTH=>48 )
    Port map( CLK=>CLK,
           ADDRA=>P_ADDRA,
           ADDRB=>P_ADDRB,
           WE=>WE,
           OE=>OE,
			  ASHFT=>P_SHFT,
           OPCODE=>OPCODE,
           DOUT=>DOUT,
			  DIN=>DIN,
           CSEL=>CSEL);
end Behavioral;

