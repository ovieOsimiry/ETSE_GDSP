----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:11:18 02/18/2015 
-- Design Name: 
--  					Simple shift register cell with load to rotate data vector
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity SCRATCHPAD_REG is
generic ( DATA_WIDTH: integer:=18;
			 COLUMN_TOTAL: integer:=3);
    Port ( CLK : in  STD_LOGIC;
           DSRC : in  STD_LOGIC;
           DIN : in  STD_LOGIC_VECTOR (DATA_WIDTH-1 downto 0);
           CIN : in  STD_LOGIC_VECTOR (DATA_WIDTH-1 downto 0);
           DOUT : out  STD_LOGIC_VECTOR (DATA_WIDTH-1 downto 0));
end SCRATCHPAD_REG;
architecture Behavioral of SCRATCHPAD_REG is
begin
	process(CLK)
	begin
	if rising_edge(CLK) then
		if DSRC='0' then
			DOUT<=DIN;
		else
			DOUT<=CIN;
		end if;
	end if;
	end process;
end Behavioral;

