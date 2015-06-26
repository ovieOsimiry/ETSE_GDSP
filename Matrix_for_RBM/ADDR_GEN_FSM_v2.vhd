----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:34:06 03/06/2015 
-- Design Name: 
-- Module Name:    ADDR_GEN_FSM_v2 - Behavioral 
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

entity ADDR_GEN_FSM_v2 is
generic (
			 ADDR_WIDTH: integer :=10;
			 COLUMNS_TOTAL: integer :=4);
    Port ( CLK : in  STD_LOGIC;
           RST : in  STD_LOGIC;
           P : in  STD_LOGIC;
           G : in  STD_LOGIC;
			  WE: out std_logic;
           P_ADDR : out  STD_LOGIC_VECTOR (ADDR_WIDTH-1 downto 0);
           P_SHFT : out  STD_LOGIC;
           G_ROW : out  STD_LOGIC_VECTOR (ADDR_WIDTH-1 downto 0);
           G_COLUMN : out  STD_LOGIC_VECTOR (COLUMNS_TOTAL-1 downto 0);
			  OP_DONE: out std_logic);
end ADDR_GEN_FSM_v2;

architecture Behavioral of ADDR_GEN_FSM_v2 is
signal i_addr_cnt,i_row_cnt,i_col_cnt: integer range 0 to COLUMNS_TOTAL;
signal i_OP_START: STD_LOGIC;
type state_type is (START, PG,PtG,PGt,PtGt,DONE);
signal current_state,next_state: state_type;

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
variable i,j: integer range 0 to COLUMNS_TOTAL;
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
						if (P='0') then
							if G='0' then
								next_state<=PG;								-- PG state setup
								i_addr_cnt<=COLUMNS_TOTAL-1;
								i_row_cnt<=1;
								i_col_cnt<=0;
								P_SHFT<='1';
							else
								next_state<=PGt;								-- PGt state setup
								P_SHFT<='1';
								i_addr_cnt<=COLUMNS_TOTAL-1;
								i_row_cnt<=0;
								i_col_cnt<=1;
							end if;
						else
							if G='0' then										-- PtG state setup
								next_state<=PtG;
								P_SHFT<='0';
								i_addr_cnt<=1;
								i_row_cnt<=1;
								i_col_cnt<=0;
							else
								next_state<=PtGt;
								P_SHFT<='0';
								i_addr_cnt<=1;
								i_row_cnt<=0;
								i_col_cnt<=1;
							end if;
						end if;
					-----------------------------------
		when PG =>
						i_row_cnt<=i_row_cnt+1;											--- G row
						i_addr_cnt<=i_addr_cnt-1;									--- P addr
						WE<='0';
						if i= COLUMNS_TOTAL-1 then 		-- full round 
						WE<='1';
							j:=j+1;
							i_col_cnt<=i_col_cnt+1;			-- next G column
							i_row_cnt<=j+1;				
							i_addr_cnt<=COLUMNS_TOTAL-1-j;
							i:=0;
						else
							i:=i+1;
						end if;
						if j= COLUMNS_TOTAL then 
							next_state<=DONE;
							OP_DONE<='1';
						else
							next_state<=current_state;
							OP_DONE<='0';						
						end if;
			when PGt=>
						if (i_col_cnt=COLUMNS_TOTAL-1) then				---G col
							i_col_cnt<=0;
						else
							i_col_cnt<=i_col_cnt+1;
						end if;
						if i_addr_cnt=0 then									--- P addr
							i_addr_cnt<=COLUMNS_TOTAL-1;
						else
							i_addr_cnt<=i_addr_cnt-1;
						end if;
						WE<='0';
						if i= COLUMNS_TOTAL-1 then 		-- full round 
							WE<='1';
							j:=j+1;
							i_row_cnt<=i_row_cnt+1;			-- next G row
									if ((i_col_cnt+1)=COLUMNS_TOTAL-1) then		-- G col
										i_col_cnt<=0;
									else
										i_col_cnt<=j+1;
									end if;
							i_addr_cnt<=COLUMNS_TOTAL-1-j;
							i:=0;
						else
							i:=i+1;
						end if;
						if j= COLUMNS_TOTAL then 
							next_state<=DONE;
							OP_DONE<='1';
						else
							next_state<=current_state;
							OP_DONE<='0';						
						end if;
			
			when PtG=>
						if (i_col_cnt=COLUMNS_TOTAL-1) then				---G col
							i_col_cnt<=0;
						else
							i_col_cnt<=i_col_cnt+1;
						end if;
						if i_addr_cnt=COLUMNS_TOTAL-1 then									--- P addr
							i_addr_cnt<=0;
						else
							i_addr_cnt<=i_addr_cnt+1;
						end if;
						WE<='0';
						if i= COLUMNS_TOTAL-1 then 		-- full round 
							WE<='1';
							j:=j+1;
							i_col_cnt<=i_col_cnt+1;			-- next G column
									if ((i_row_cnt+1)=COLUMNS_TOTAL-1) then		-- G row
										i_row_cnt<=0;
									else
										i_row_cnt<=j+1;
									end if;
							if j=COLUMNS_TOTAL-1 then									--- P addr
								i_addr_cnt<=0;
							else
								i_addr_cnt<=j+1;
							end if;
							i:=0;
						else
							i:=i+1;
						end if;
						if j= COLUMNS_TOTAL then 
							next_state<=DONE;
							OP_DONE<='1';
						else
							next_state<=current_state;
							OP_DONE<='0';						
						end if;
			when PtGt =>
							if (i_col_cnt=COLUMNS_TOTAL-1) then				---G col
								i_col_cnt<=0;
							else
								i_col_cnt<=i_col_cnt+1;
							end if;
						if i_addr_cnt=COLUMNS_TOTAL-1 then									--- P addr
							i_addr_cnt<=0;
						else
							i_addr_cnt<=i_addr_cnt+1;
						end if;
						WE<='0';
						if i= COLUMNS_TOTAL-1 then 		-- full round 
							WE<='1';
							j:=j+1;
							i_row_cnt<=i_row_cnt+1;			-- next G row
									if ((i_col_cnt+1)=COLUMNS_TOTAL-1) then		-- G col
										i_col_cnt<=0;
									else
										i_col_cnt<=j+1;
									end if;
							if j=COLUMNS_TOTAL-1 then									--- P addr
								i_addr_cnt<=0;
							else
								i_addr_cnt<=j+1;
							end if;
							i:=0;
						else
							i:=i+1;
						end if;
						if j= COLUMNS_TOTAL then 
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
						P_ADDR<=std_logic_vector(to_unsigned(i_addr_cnt,ADDR_WIDTH));
						G_ROW<=std_logic_vector(to_unsigned(i_row_cnt,ADDR_WIDTH));
						G_COLUMN<=std_logic_vector(to_unsigned(i_col_cnt,COLUMNS_TOTAL));
-----------------------------------------------------------
end Behavioral;
