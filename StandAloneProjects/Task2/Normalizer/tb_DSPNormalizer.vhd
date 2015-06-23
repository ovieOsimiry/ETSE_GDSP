--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   22:08:23 06/19/2015
-- Design Name:   
-- Module Name:   C:/FPGA/Internship Jobs/Codes/Task1/TestIPCoreGenerator/TestMul/tb_AdderSubMul.vhd
-- Project Name:  TestMul
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: AdderSubMul
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
USE ieee.numeric_std.ALL;
use std.textio.all;

ENTITY tb_DSPNormalizer IS
END tb_DSPNormalizer;

ARCHITECTURE behavior OF tb_DSPNormalizer IS

	--Inputs
	signal clk                    : std_logic                     := '0';
	signal sel                    : std_logic_vector(2 downto 0)  := (others => '0');
	signal a                      : std_logic_vector(17 downto 0) := (others => '0');
	signal b                      : std_logic_vector(17 downto 0) := (others => '0');
	signal c                      : std_logic_vector(47 downto 0) := (others => '0');
	signal P_shifted              : std_logic_vector(47 downto 0) := (others => '0');
	signal a_r, b_r, c_r          : real;
	signal Real_Out_18 : real;

	--Outputs
	signal p : std_logic_vector(47 downto 0);
	type real_array is array (1 to 10) of real;

	-- Clock period definitions
	constant clk_period     : time    := 10 ns;
	constant FractionalPart : integer := 15;
	
	signal Output           : STD_LOGIC_VECTOR(17 downto 0);
	signal Real_Out_47         : real;
	signal P_Trunc34        : real;
	signal P_Normal         : real;

	function Convert_Real_2_Std(r : real; Precision : real) return std_logic_vector is
		variable std : std_logic_vector(17 downto 0);
	begin
		std := STD_LOGIC_VECTOR(to_SIGNED(INTEGER(r * Precision), 18));
		return std;
	end;
	

BEGIN
	LogicalShift : entity work.Normalizer
		generic map(IntergerPart => 1, FractionalPart => FractionalPart)
		Port map(
			Input    => p,
			Output   => Output,
			Real_Out_47 => Real_Out_47
		);

	-- Instantiate the Unit Under Test (UUT)
	uut : entity work.AdderSubMul PORT MAP(
			clk => clk,
			sel => sel,
			a   => a,
			b   => b,
			c   => c,
			p   => p
		);

	-- Clock process definitions
	clk_process : process
	begin
		clk <= '0';
		wait for clk_period / 2;
		clk <= '1';
		wait for clk_period / 2;
	end process;
	
	
---------------------Conversion to Real values for easy debuging and viewing------------------------

	P_Trunc34 <= real(to_integer(signed(p(34 downto FractionalPart)))) * 2.0 ** (-FractionalPart);

	P_Normal <= real(to_integer(signed(p))) * 2.0 ** (-FractionalPart);
	
	Real_Out_18 <= real(to_integer(signed(output)))*2.0**(-FractionalPart);

	a_r <= real(to_integer(signed(a))) / 2.0 ** FractionalPart;
	b_r <= real(to_integer(signed(b))) / 2.0 ** FractionalPart;
	c_r <= real(to_integer(signed(c))) / 2.0 ** FractionalPart;
-------------------------------------------------------------------------------------------------

-- Stimulus process

	stim_proc : process
		variable l        : line;
		variable line_var : line;
		variable cnt, i   : integer := 0;
		file text_var : text;
		variable ArrayOfRealNum : real_array;
	begin

		--Open the file in read mode.
		file_open(text_var, "C:\FPGA\Internship Jobs\Codes\ETSE_GDSP\TestingFiles\Task2_Test_value.txt", read_mode);
		--run the loop for as long as there are values to read real values from the file.
		--make sure its not the end of file.
		while (NOT ENDFILE(text_var)) loop
			i := i + 1;
			readline(text_var, line_var); --read the current line.
			--extract the real value from the read line and store it in the variable.
			read(line_var, ArrayOfRealNum(i));

		end loop;
		file_close(text_var);           --close the file after reading.

		for i in 1 to 5 loop
			a   <= Convert_Real_2_Std(ArrayOfRealNum(i + cnt), 2.0 ** FractionalPart);
			cnt := cnt + 1;
			b   <= Convert_Real_2_Std(ArrayOfRealNum(i + cnt), 2.0 ** FractionalPart);
			sel <= std_logic_vector(to_unsigned(5, 3));
			if i = 5 then
				sel <= std_logic_vector(to_unsigned(2, 3));
			end if;
			wait for clk_period;
		end loop;
		wait;

		--			sel <= "101";
		--			
		--			a <= std_logic_vector(to_signed(2,18));
		--			b <= std_logic_vector(to_signed(1,18));
		--			
		--			wait for clk_period;
		--			
		--			a <= std_logic_vector(to_signed(3,18));
		--			b <= std_logic_vector(to_signed(4,18));
		--			
		--			wait for clk_period;
		--			
		--			a <= std_logic_vector(to_signed(3,18));
		--			b <= std_logic_vector(to_signed(1,18));
		--			
		--			wait for clk_period;
		--			
		--			a <= (others => '0');
		--			c <= (others => '0');
		--			
		--			
		--			wait for clk_period*5;			


		--			write(l, real(to_integer(signed(a'last_value)))*2.0**(1-a'length), Justified=> Left, digits=>6);
		--			read(l,temp);
		--			temp2 := "a = " & temp;
		--			write(l,temp2);	
		--			writeline(output,l);
		--			
		--			write(l, real(to_integer(signed(b'last_value)))*2.0**(1-b'length),Justified=> Left,digits=>6);
		--			read(l,temp);
		--			temp2 := "b = " & temp;
		--			write(l,temp2);			
		--			writeline(output,l);			
		--			
		--			
		--			write(l, real(to_integer(signed(p)))*2.0**(1-b'length), Justified=> Left,digits=>6);
		--			read(l,temp);
		--			temp2 := "p = " & temp;
		--			write(l,temp2);			
		--			writeline(output,l);
		--		
		--			temp := "          ";
		--			
		--			writeline(output, l);

		wait;
	end process;

END;