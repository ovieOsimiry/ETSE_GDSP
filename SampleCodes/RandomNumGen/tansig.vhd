----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:10:22 06/17/2015 
-- Design Name: 
-- Module Name:    tansig - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity tansig is
    Port ( clk : in  STD_LOGIC;
           DIN : in  STD_LOGIC_VECTOR (7 downto 0);
           DOUT : out  STD_LOGIC_VECTOR (7 downto 0));
end tansig;

architecture Behavioral of tansig is

begin

DOUT <= DIN;

end Behavioral;

