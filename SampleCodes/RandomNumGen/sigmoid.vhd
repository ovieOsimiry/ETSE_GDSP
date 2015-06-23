----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:55:34 06/16/2015 
-- Design Name: 
-- Module Name:    sigmoid - Behavioral 
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

entity sigmoid is
    Port ( X : in  STD_LOGIC_VECTOR (47 downto 0);
           Y : out  STD_LOGIC_VECTOR (47 downto 0));
end sigmoid;

architecture Behavioral of sigmoid is

begin

	Y <= X;

end Behavioral;

