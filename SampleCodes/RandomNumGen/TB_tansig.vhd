--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:34:03 06/02/2015
-- Design Name:   
-- Module Name:   C:/Users/Taras/Documents/FPGA_current_work/RBM_NG/TB_tansig.vhd
-- Project Name:  RBM_NG
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: tansig
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
 
ENTITY TB_tansig IS
END TB_tansig;
 
ARCHITECTURE behavior OF TB_tansig IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT tansig
    PORT(
         CLK : IN  std_logic;
         DIN : IN  std_logic_vector(7 downto 0);
         DOUT : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal DIN : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal DOUT : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 signal rand_num : integer range -2**18 to 2**18 := 0;
 signal rand_a_test: real:=3.2;
 signal s_rand: std_logic_vector(15 downto 0);
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: tansig PORT MAP (
          CLK => CLK,
          DIN => DIN,
          DOUT => DOUT
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   variable seed1, seed2: positive;               -- seed values for random generator
   variable v, rand: real;   -- random real-number value in range 0 to 1.0  
   variable range_of_rand : real := 256.0;    -- the range of random values created will be 0 to +1000
	variable l : line;
	
	variable i:integer range 0 to 1000;
   begin		
	wait for CLK_period*10;
	seed1:=45;
	seed2:=45;
		for i in 1 to 30 loop
			uniform(seed1, seed2, rand);   -- generate random number
			
			rand_num <= 128- integer(rand*range_of_rand);  -- rescale to 0..1000, convert integer part 
			
			s_rand<=std_logic_vector(128- to_signed(integer(rand*range_of_rand),16));
			
			write(l, real(to_integer(signed(s_rand)))*2.0**(1-DIN'length),field=>5,digits=>6);
			writeline(output,l);			
			wait for CLK_period;
			DIN<=std_logic_vector(to_signed(rand_num,DIN'length));
		end loop;
		
      report "end testbench" severity failure ;
   end process;

END;
