--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:14:14 05/23/2014
-- Design Name:   
-- Module Name:   C:/Users/Taras/Documents/FPGA_current_work/RF_in_fpga/TB_sigmoid.vhd
-- Project Name:  RF_in_fpga
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: sigmoid
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
use ieee.math_real.all;
USE ieee.numeric_std.ALL;
 
ENTITY TB_sigmoid IS
END TB_sigmoid;
 
ARCHITECTURE behavior OF TB_sigmoid IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT sigmoid
    PORT(
         X : IN  std_logic_vector(47 downto 0);
         Y : OUT  std_logic_vector(47 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal X : std_logic_vector(47 downto 0) := (others => '0');

 	--Outputs
   signal Y : std_logic_vector(47 downto 0);
  
  	
	signal rand_num : integer := 0;
 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: sigmoid PORT MAP (
          X => X,
          Y => Y
        );


 

   -- Stimulus process
   stim_proc: process
	variable seed1, seed2: positive;               -- seed values for random generator
    variable rand: real;   -- random real-number value in range 0 to 1.0  
    variable range_of_rand : real := 10000.0;    -- the range of random values created will be 0 to +1000
	variable i:integer range 0 to 100;
   begin		
	wait for 10 ns;
		for i in 1 to 1000 loop
			uniform(seed1, seed2, rand);   -- generate random number
			rand_num <= integer(rand*range_of_rand);  -- rescale to 0..1000, convert integer part 
			wait for 1 ns;
			X<=std_logic_vector(to_signed(rand_num,X'length));
		end loop;
      wait;
   end process;

END;
