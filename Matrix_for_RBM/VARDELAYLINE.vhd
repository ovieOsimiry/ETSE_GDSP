----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:08:52 02/27/2015 
-- Design Name: 
-- Module Name:    VARDELAYLINE - Behavioral 
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
entity VARDELAYLINE is
generic (
			  ADDR_WIDTH: integer:=10;
			  DELAYLINE_LENGTH: integer:=16;
			  DELAYLINE_BITS: integer:=4);
    Port ( CLK : in  STD_LOGIC;
           DIN : in  STD_LOGIC;
			  ADDRIN: in std_logic_vector(ADDR_WIDTH-1 downto 0);
			  ADDROUT: out std_logic_vector(ADDR_WIDTH-1 downto 0);
           DELAY : in  STD_LOGIC_VECTOR (DELAYLINE_BITS-1 downto 0);
           DOUT : out  STD_LOGIC);
end VARDELAYLINE;

architecture Behavioral of VARDELAYLINE is
signal dmuxed:STD_LOGIC_VECTOR(DELAYLINE_LENGTH-1 downto 0);
signal dline: STD_LOGIC_VECTOR(DELAYLINE_LENGTH-1 downto 1);
type pipelined_ADDR_t is array (0 to DELAY_DEPTH) of std_logic_vector(ADDR_WIDTH-1 downto 0);
signal p_ADDR:pipelined_ADDR_t;

begin
DMUX: process (CLK)
begin
	dmuxed<=(others=>'0');
	dmuxed(to_integer(unsigned(DELAY)))<=DIN;
end process;
process (CLK)
begin
if rising_edge(CLK) then
	dline(DELAYLINE_LENGTH-1)<='0' or dmuxed(DELAYLINE_LENGTH-1);
	for i in 1 to DELAYLINE_LENGTH-2 loop
		dline(i)<=dline(i+1) or dmuxed(i);
	end loop;
	DOUT<=dline(1);
end if;
end process;
end Behavioral;

