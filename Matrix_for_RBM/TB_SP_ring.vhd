--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:57:43 02/20/2015
-- Design Name:   
-- Module Name:   C:/Users/Taras/Documents/FPGA_current_work/BRAM_build/TB_SP_ring.vhd
-- Project Name:  BRAM_build
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: SCRATCHPAD_REG
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
--USE ieee.numeric_std.ALL;
 
ENTITY TB_SP_ring IS
END TB_SP_ring;
 
ARCHITECTURE behavior OF TB_SP_ring IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT SCRATCHPAD_REG
    PORT(
         CLK : IN  std_logic;
         DSRC : IN  std_logic;
         DIN : IN  std_logic_vector(17 downto 0);
         CIN : IN  std_logic_vector(17 downto 0);
         DOUT : OUT  std_logic_vector(17 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal DSRC : std_logic := '0';
   signal DIN1,DIN2,DIN3 : std_logic_vector(17 downto 0) := (others => '0');
   signal CIN1,CIN2,CIN3 : std_logic_vector(17 downto 0) := (others => '0');

 	--Outputs
   signal DOUT1,DOUT2,DOUT3 : std_logic_vector(17 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut1: SCRATCHPAD_REG PORT MAP (
          CLK => CLK,
          DSRC => DSRC,
          DIN => DIN1,
          CIN => DOUT3,
          DOUT => DOUT1
        );
-- Instantiate the Unit Under Test (UUT)
   uut2: SCRATCHPAD_REG PORT MAP (
          CLK => CLK,
          DSRC => DSRC,
          DIN => DIN2,
          CIN => DOUT1,
          DOUT => DOUT2
        );
-- Instantiate the Unit Under Test (UUT)
   uut3: SCRATCHPAD_REG PORT MAP (
          CLK => CLK,
          DSRC => DSRC,
          DIN => DIN3,
          CIN => DOUT2,
          DOUT => DOUT3
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
   begin		
      DSRC<='0';
		DIN1<="00" & x"AAAA";
		DIN2<="00" & x"BBBB";
		DIN3<="00" & x"CCCC";
      wait for 100 ns;	
		DSRC<='1';
      wait for CLK_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
