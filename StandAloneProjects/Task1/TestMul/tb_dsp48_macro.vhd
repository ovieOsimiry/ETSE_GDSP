--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:31:36 06/16/2015
-- Design Name:   
-- Module Name:   C:/FPGA/Internship Jobs/Codes/Task1/TestIPCoreGenerator/MulAdder/tb_dsp48_macro.vhd
-- Project Name:  dsp48_macro
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: dsp48_macro
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
USE ieee.numeric_std.ALL;
use ieee.math_real.all;
use std.textio.all;
use work.txt_util.all;
 
ENTITY tb_dsp48_macro IS
END tb_dsp48_macro;
 
ARCHITECTURE behavior OF tb_dsp48_macro IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
--    COMPONENT dsp48_macro
--    PORT(
--         clk : IN  std_logic;
--         sel : IN  std_logic_vector(0 downto 0);
--         a : IN  std_logic_vector(17 downto 0);
--         d : IN  std_logic_vector(17 downto 0);
--         p : OUT  std_logic_vector(17 downto 0)
--        );
--    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal sel : std_logic_vector(2 downto 0) := (others => '0');
   signal a : std_logic_vector(17 downto 0) := (others => '0');
 	signal b : std_logic_vector(17 downto 0) := (others => '0');
	signal c : std_logic_vector(17 downto 0) := (others => '0');
   signal d : std_logic_vector(17 downto 0) := (others => '0');

 	--Outputs
   signal p : std_logic_vector(47 downto 0);
   signal p_mirror: std_logic_vector(33 downto 0);
   signal debug_out,a_r,b_r,c_r: real;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
	signal rand_num1, rand_num2: integer;
	signal test: std_logic_vector(33 downto 0):=(33|31=>'1', others =>'0');
	
function reverse_any_vector (a: in std_logic_vector)
return std_logic_vector is
  variable result: std_logic_vector(a'RANGE);
  alias aa: std_logic_vector(a'REVERSE_RANGE) is a;
begin
  for i in aa'RANGE loop
    result(i) := aa(i);
  end loop;
  return result;
end; -- function reverse_any_vector
 
BEGIN
 
 

uut3: ENTITY work.AdderSubMul
  PORT map (
    clk => clk,
    sel => sel,
    a => a,
	 b => b,
	 c => c,
    --d => d,
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
 
--debug_out <= real(to_integer(signed(p(17 downto 16)))) + real(to_integer(unsigned(p(15 downto 0))))/65536.0;
--a_r <= real(to_integer(signed(a(17 downto 16)))) +  real(to_integer(signed(a(15 downto 0))))/65536.0;
--b_r <= real(to_integer(signed(b(17 downto 16)))) +  real(to_integer(signed(b(15 downto 0))))/65536.0;
--c_r <= real(to_integer(signed(c(17 downto 16)))) +  real(to_integer(signed(c(15 downto 0))))/65536.0;

debug_out <= real(to_integer(signed(p)))/131072.0;--2147483648.0;--65536.0;
p_mirror <= p(33 downto 0);
a_r <= real(to_integer(signed(a)))/131072.0;
b_r <= real(to_integer(signed(b)))/131072.0;
c_r <= real(to_integer(signed(c)))/131072.0;

	
stim_proc: process
	
	variable seed1, seed2, seed3, seed4, seed5, seed6: positive;-- seed values for random generator
    variable rand1,rand2,rand3: real;   -- random real-number value in range 0 to 1.0  
    constant range_of_rand_input : real := 65536.0;     -- the range of random values created will be 0 to +1000
    variable a_in, b_in: std_logic_vector(a'length-1 downto 0);
	variable l: line;
	variable temp: string(1 to 10);
	variable temp2: string(1 to 14);
	
   begin		
	--wait for 10 ns;
	
	
	
--		write(l,"Adding C and A");
--		writeline(output,l);
--		write(l," ");
--		writeline(output,l);
--		
--		for i in 1 to 10 loop
--			sel <= "00";
--			uniform(seed1,seed2,rand1);   -- generate random number
--			uniform(seed3,seed4,rand2);
--		
--			a_in :=  32768 - integer(rand1 * range_of_rand_input);
--			c_in :=  32768 - integer(rand2 * range_of_rand_input);
--		
--			a <= std_logic_vector(to_signed(a_in,18));
--			c <= std_logic_vector(to_signed(c_in,18));			
--		
--		
--			wait for 60 ns;
--			
--			write(l, real(to_integer(signed(a)))*2.0**(3-a'length), Justified=> Left,digits=>6);
--			read(l,temp);
--			temp2 := "a = " & temp;
--			write(l,temp2);			
--			writeline(output,l);
--									
--			
--			write(l, real(to_integer(signed(c)))*2.0**(3-c'length),Justified=> Left,digits=>6);
--			read(l,temp);
--			temp2 := "c = " & temp;
--			write(l,temp2);			
--			writeline(output,l);			
--			
--			write(l, real(to_integer(signed(p)))*2.0**(3-a'length), Justified=> Left,digits=>6);
--			read(l,temp);
--			temp2 := "p = " & temp;
--			write(l,temp2);			
--			writeline(output,l);
--			
--			temp := "          ";
--			
--			writeline(output, l);
--			
--		end loop;
--		
--		write(l,"Subtracting A from C");
--		writeline(output,l);
--		write(l," ");
--		writeline(output,l);
--		
--		for i in 1 to 10 loop
--			sel <= "01";
--			uniform(seed1,seed2,rand1);   -- generate random number
--			uniform(seed3,seed4,rand2);
--		
--			a_in :=  32768 - integer(rand1 * range_of_rand_input);
--			c_in :=  32768 - integer(rand2 * range_of_rand_input);
--		
--			a <= std_logic_vector(to_signed(a_in,18));
--			c <= std_logic_vector(to_signed(c_in,18));			
--		
--		
--			wait for 60 ns;
--			
--			write(l, real(to_integer(signed(a)))*2.0**(3-a'length), Justified=> Left,digits=>6);
--			read(l,temp);
--			temp2 := "a = " & temp;
--			write(l,temp2);			
--			writeline(output,l);
--									
--			
--			write(l, real(to_integer(signed(c)))*2.0**(3-c'length),Justified=> Left,digits=>6);
--			read(l,temp);
--			temp2 := "c = " & temp;
--			write(l,temp2);			
--			writeline(output,l);			
--			
--			write(l, real(to_integer(signed(p)))*2.0**(3-a'length), Justified=> Left,digits=>6);
--			read(l,temp);
--			temp2 := "p = " & temp;
--			write(l,temp2);			
--			writeline(output,l);
--			
--			temp := "          ";
--			
--			writeline(output, l);
--			
--		end loop;
		
		write(l,"A*B + P>>17");
		writeline(output,l);
		write(l," ");
		writeline(output,l);
		
--for i in 1 to 2 loop

			sel <= "100";
			
			a <=(16 downto 3  => '1', others => '0');
			b <=(16 => '1', others => '0');
			
			wait for clk_period*5;
			
--			a <=(17|16  => '1', others => '0');
--			b <=(16 => '1', others => '0');
--			wait for clk_period;
			
			a <= (others => '0');
			b <= (others => '0');

			write(l, real(to_integer(signed(a'last_value)))*2.0**(1-a'length), Justified=> Left, digits=>6);
			read(l,temp);
			temp2 := "a = " & temp;
			write(l,temp2);	
			writeline(output,l);
			
			write(l, real(to_integer(signed(b'last_value)))*2.0**(1-b'length),Justified=> Left,digits=>6);
			read(l,temp);
			temp2 := "b = " & temp;
			write(l,temp2);			
			writeline(output,l);			
			
			
			write(l, real(to_integer(signed(p)))*2.0**(1-b'length), Justified=> Left,digits=>6);
			read(l,temp);
			temp2 := "p = " & temp;
			write(l,temp2);			
			writeline(output,l);
		
			temp := "          ";
			
			writeline(output, l);			
--		end loop;
		
--		write(l,"P + A*B");
--		writeline(output,l);
--		write(l," ");
--		writeline(output,l);
--		
--		for i in 1 to 3 loop
--			sel <= "11";
--			
--			uniform(seed1,seed2,rand1);   -- generate random number
--			uniform(seed3,seed4,rand2);
--			uniform(seed5,seed6,rand3);
--			
--			a_in :=  32768 - integer(rand1 * range_of_rand_input);
--			c_in :=  32768 - integer(rand2 * range_of_rand_input);
--			b_in :=  32768 - integer(rand3 * range_of_rand_input);
--			a <= std_logic_vector(to_signed(a_in,18));
--			c <= std_logic_vector(to_signed(c_in,18));
--			b <= std_logic_vector(to_signed(b_in,18));			
--		
--		
--			wait for clk_period;
--			
--			write(l, real(to_integer(signed(a)))*2.0**(3-a'length), Justified=> Left,digits=>6);
--			read(l,temp);
--			temp2 := "a = " & temp;
--			write(l,temp2);			
--			writeline(output,l);
--			
--			write(l, real(to_integer(signed(b)))*2.0**(3-b'length),Justified=> Left,digits=>6);
--			read(l,temp);
--			temp2 := "b = " & temp;
--			write(l,temp2);			
--			writeline(output,l);									
--			
--			write(l, real(to_integer(signed(c)))*2.0**(3-c'length),Justified=> Left,digits=>6);
--			read(l,temp);
--			temp2 := "c = " & temp;
--			write(l,temp2);			
--			writeline(output,l);			
--			
--			write(l, real(to_integer(signed(p)))*2.0**(3-a'length), Justified=> Left,digits=>6);
--			read(l,temp);
--			temp2 := "p = " & temp;
--			write(l,temp2);			
--			writeline(output,l);
--			
--			temp := "          ";
--			
--			writeline(output, l);
--			
--		end loop;
		
--		sel <= "10";
--		
--		a <= std_logic_vector(to_signed(4,18));
--		b <= std_logic_vector(to_signed(2,18));
--		c <= std_logic_vector(to_signed(4,18));
--		
--		wait for clk_period;
--
--		a <= std_logic_vector(to_signed(15,18));
--		b <= std_logic_vector(to_signed(15,18));
--		c <= std_logic_vector(to_signed(3,18));
--		
--		wait for clk_period;
--		
--		a <= std_logic_vector(to_signed(0,18));
--		b <= std_logic_vector(to_signed(0,18));
--		c <= std_logic_vector(to_signed(0,18));
--		
--		wait for clk_period*10;
--		
--		--report "end testbench" severity failure ;
		

     wait;
   end process;

END;
