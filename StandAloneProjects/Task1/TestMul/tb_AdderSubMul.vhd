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
 
ENTITY tb_AdderSubMul IS
END tb_AdderSubMul;
 
ARCHITECTURE behavior OF tb_AdderSubMul IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT AdderSubMul
    PORT(
         clk : IN  std_logic;
         sel : IN  std_logic_vector(2 downto 0);
         a : IN  std_logic_vector(17 downto 0);
         b : IN  std_logic_vector(17 downto 0);
         c : IN  std_logic_vector(47 downto 0);
         p : OUT  std_logic_vector(47 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal sel : std_logic_vector(2 downto 0) := (others => '0');
   signal a : std_logic_vector(17 downto 0) := (others => '0');
   signal b : std_logic_vector(17 downto 0) := (others => '0');
   signal c : std_logic_vector(47 downto 0) := (others => '0');
	signal P_shifted : std_logic_vector(47 downto 0) := (others => '0');
   signal a_r, b_r, c_r: real;
   signal debug_out1, debug_out2 : real;

 	--Outputs
   signal p : std_logic_vector(47 downto 0);
   type real_array is array(1 to 10) of real;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
   
function Convert_Real_2_Std(r: real; Precision: real) return std_logic_vector is
	variable std: std_logic_vector(17 downto 0);
   		begin
   		std := STD_LOGIC_VECTOR(to_SIGNED(INTEGER(r * Precision),18));
   	return std;
end;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: AdderSubMul PORT MAP (
          clk => clk,
          sel => sel,
          a => a,
          b => b,
          c => c,
          p => p
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 
debug_out1 <= real(to_integer(signed(p(34 downto 17))))*2.0**(-17);--/131072.0;

debug_out2 <= real(to_integer(signed(p)))*2.0**(-17);

P_shifted <= X"0000000" & p(36 downto 17);

a_r <= real(to_integer(signed(a)))/131072.0;
b_r <= real(to_integer(signed(b)))/131072.0;
c_r <= real(to_integer(signed(c)))/131072.0;
   
	-- Stimulus process
stim_proc: process
	variable l: line;
	variable line_var : line;
	variable cnt: integer:=0;
file text_var : text;
variable ArrayOfRealNum : real_array;
   begin		
  	write(l,"A*B + P");
		writeline(output,l);
		write(l," ");
		writeline(output,l);
		

--Open the file in read mode.
   file_open(text_var,"C:\FPGA\Internship Jobs\Codes\ETSE_GDSP\TestingFiles\Task1_Test_value.txt",read_mode);
    --run the loop 10 times to read 10 real values from the file.
	for i in 1 to 10 loop 
	--make sure its not the end of file.
		if(NOT ENDFILE(text_var)) then
		 readline(text_var,line_var);   --read the current line.
		  --extract the real value from the read line and store it in the variable.
		 read(line_var,ArrayOfRealNum(i)); 
		end if;
	end loop;
    file_close(text_var); --close the file after reading.
  
   for i in 1 to 5 loop
	   	a <=	Convert_Real_2_Std(ArrayOfRealNum(i+cnt),2.0**17);
	   	cnt:= cnt+1;
	   	b <= 	Convert_Real_2_Std(ArrayOfRealNum(i+cnt),2.0**17);
	   	sel <= std_logic_vector(to_unsigned(5,3));
	   	if i = 5 then
	   	sel <= std_logic_vector(to_unsigned(2,3));
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
