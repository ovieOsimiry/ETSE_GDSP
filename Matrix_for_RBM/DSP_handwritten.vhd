----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:43:55 02/25/2015 
-- Design Name: 
-- Module Name:    DSP_handwritten - Behavioral 
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

entity DSP_handwritten is
    Port ( CLK : in  STD_LOGIC;
           A : in  STD_LOGIC_VECTOR (17 downto 0);
           B : in  STD_LOGIC_VECTOR (17 downto 0);
           C : in  STD_LOGIC_VECTOR (47 downto 0);
           P : out  STD_LOGIC_VECTOR (47 downto 0));
end DSP_handwritten;

architecture Behavioral of DSP_handwritten is
si
begin


end Behavioral;

