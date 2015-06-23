----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:38:09 06/23/2015 
-- Design Name: 
-- Module Name:    Normalizer - Behavioral 
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
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Normalizer is
	 generic(IntergerPart: integer:=1; FractionalPart: integer:=1);
    Port ( 
           Input : in  STD_LOGIC_VECTOR (47 downto 0);
           Output : out  STD_LOGIC_VECTOR (17 downto 0);
		   Real_Out_47 : out real
			  );
end Normalizer;


architecture Behavioral of Normalizer is
signal s_output: std_logic_vector(47 downto 0);
constant s_p_useful_range: integer:=34 - FractionalPart + 1;

--signal s_p_useful_range: std_logic_vector(34 downto FractionalPart);
begin



--process(input)
--begin
--	s_output(34 - FractionalPart downto 0) <= Input(34 downto FractionalPart);
--	if input(34) = '0' then
--		s_output(47 downto s_p_useful_range) <= (others => '0');	
--	else
--		s_output(47 downto s_p_useful_range) <= (others => '1');
--	end if;
--end process;

s_output <= to_stdlogicvector(to_bitvector(input) sra FractionalPart);

Output <= s_output(17 downto 0);

Real_Out_47 <= real(to_integer(signed(s_output)))/2.0**(FractionalPart);

--DebugOut <= real(to_integer(signed(s_output(47 downto FractionalPart)))) + real(to_integer(signed(s_output(FractionalPart-1 downto 0))))/2.0**(FractionalPart);

end Behavioral;

