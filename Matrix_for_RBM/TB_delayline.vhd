--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:24:16 02/27/2015
-- Design Name:   
-- Module Name:   C:/Users/Taras/Documents/FPGA_current_work/BRAM_build/TB_delayline.vhd
-- Project Name:  BRAM_build
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: VARDELAYLINE
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
 
ENTITY TB_delayline IS
END TB_delayline;
 
ARCHITECTURE behavior OF TB_delayline IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT VARDELAYLINE
generic (
			  ADDR_WIDTH: integer:=10;
			  DELAYLINE_LENGTH: integer:=16;
			  DELAYLINE_BITS: integer:=4);
    Port ( CLK : in  STD_LOGIC;
           DIN : in  STD_LOGIC;
			  ADDRIN: in std_logic_vector(ADDR_WIDTH-1 downto 0);
			  ADDROUT: out std_logic_vector(ADDR_WIDTH-1 downto 0);
           DELAY : in  STD_LOGIC_VECTOR (DELAYLINE_BITS-1 downto 0);
           DOUT : out  STD_LOGIC);
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal DIN : std_logic := '0';
   signal DELAY : std_logic_vector(3 downto 0) := (others => '0');
	signal ADDRIN,ADDROUT: std_logic_vector(ADDR_WIDTH-1 downto 0);

 	--Outputs
   signal DOUT : std_logic;

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: VARDELAYLINE PORT MAP (
          CLK => CLK,
          DIN => DIN,
			 ADDRIN=>ADDRIN,
          DELAY => DELAY,
			 ADDROUT=>ADDROUT,
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
   begin		
      -- hold reset state for 100 ns.
      wait for 110 ns;	
	DIN<='1';
	wait for CLK_period;
	DIN<='0';
   wait for CLK_period*10;
	DIN<='1';
	DELAY<=x"1";
	wait for CLK_period;
	DIN<='0';
	 wait for CLK_period*4;
	DIN<='1';
	DELAY<=x"8";
	wait for CLK_period;
	DIN<='0';
      -- insert stimulus here 

      wait;
   end process;

END;
