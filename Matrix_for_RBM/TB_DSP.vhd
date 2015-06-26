--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:58:32 02/18/2015
-- Design Name:   
-- Module Name:   C:/Users/Taras/Documents/FPGA_current_work/BRAM_build/TB_DSP.vhd
-- Project Name:  BRAM_build
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: DSP_INPUT_C
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
 
ENTITY TB_DSP IS
END TB_DSP;
 
ARCHITECTURE behavior OF TB_DSP IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT DSP_INPUT_C
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

 	--Outputs
   signal p : std_logic_vector(47 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: DSP_INPUT_C PORT MAP (
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
 

   -- Stimulus process
   stim_proc: process
   begin		
		wait for clk_period;
		sel<="000";
		wait for clk_period*5;
		A<="00" & x"0002";
		B<="00" & x"000A";
		wait for clk_period*5;
		sel<="001";
		wait for clk_period*2;
		sel<="010";
		wait for clk_period*2;
		sel<="011";
		C<= x"000000000064";
			wait for clk_period;
		sel<="000";
				A<=std_logic_vector(to_signed(0,18));
				B<=std_logic_vector(to_signed(0,18));
				C<=std_logic_vector(to_signed(0,48));
		wait for clk_period*10;
		sel<="011";
		for i in 0 to 20 loop
			A<=std_logic_vector(to_signed(i,18));
			B<=std_logic_vector(to_signed(i*10,18));
			C<=std_logic_vector(to_signed(i*100,48));
			wait for clk_period;
		end loop;
		

      wait;
   end process;

END;
