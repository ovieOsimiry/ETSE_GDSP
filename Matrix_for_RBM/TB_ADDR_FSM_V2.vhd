--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:58:12 03/06/2015
-- Design Name:   
-- Module Name:   C:/Users/Taras/Documents/FPGA_current_work/BRAM_build/TB_ADDR_FSM_V2.vhd
-- Project Name:  BRAM_build
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ADDR_GEN_FSM_v2
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
 
ENTITY TB_ADDR_FSM_V2 IS
END TB_ADDR_FSM_V2;
 
ARCHITECTURE behavior OF TB_ADDR_FSM_V2 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ADDR_GEN_FSM_v2
    PORT(
         CLK : IN  std_logic;
         RST : IN  std_logic;
         P : IN  std_logic;
         G : IN  std_logic;
         WE : OUT  std_logic;
         P_ADDR : OUT  std_logic_vector(9 downto 0);
         P_SHFT : OUT  std_logic;
         G_ROW : OUT  std_logic_vector(9 downto 0);
         G_COLUMN : OUT  std_logic_vector(3 downto 0);
         OP_DONE : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal RST : std_logic := '0';
   signal P : std_logic := '0';
   signal G : std_logic := '0';

 	--Outputs
   signal WE : std_logic;
   signal P_ADDR : std_logic_vector(9 downto 0);
   signal P_SHFT : std_logic;
   signal G_ROW : std_logic_vector(9 downto 0);
   signal G_COLUMN : std_logic_vector(3 downto 0);
   signal OP_DONE : std_logic;

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ADDR_GEN_FSM_v2 PORT MAP (
          CLK => CLK,
          RST => RST,
          P => P,
          G => G,
          WE => WE,
          P_ADDR => P_ADDR,
          P_SHFT => P_SHFT,
          G_ROW => G_ROW,
          G_COLUMN => G_COLUMN,
          OP_DONE => OP_DONE
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
		RST<='1';
      wait for CLK_period*10;
		RST<='0';	
		wait until OP_DONE='1';		-- PG
		wait for CLK_period*2;
		G<='1';
		RST<='1';
      wait for CLK_period*2;
		RST<='0';	
		wait until OP_DONE='1';		-- PGt
		wait for CLK_period*2;
		P<='1';
		G<='0';
		RST<='1';
      wait for CLK_period*2;
		RST<='0';
		wait until OP_DONE='1';		--PtG
		wait for CLK_period*2;
		G<='1';
		RST<='1';
      wait for CLK_period*2;
		RST<='0';	
		wait until OP_DONE='1';		-- PtGt
		wait for CLK_period*10;
      -- insert stimulus here 

      wait;
   end process;

END;
