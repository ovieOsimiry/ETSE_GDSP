--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:40:09 03/09/2015
-- Design Name:   
-- Module Name:   C:/Users/Taras/Documents/FPGA_current_work/BRAM_build/TB_M_OPERATOR.vhd
-- Project Name:  BRAM_build
-- Target Device:  
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
 
ENTITY TB_M_OPERATOR IS
generic (
			 ADDR_WIDTH: integer :=10;
			 OPERATION_WIDTH: integer:=3;			-- NOT A DSP OPCODE, HIGHER-LEVEL OPCODE
														--				| DST | SRC | OPERATION TYPE|
														--				4     3     2           0
														--	OPERATION: 000 -NULL OP 001 -LOAD 010 PG 011 PGt 100 PtG 101 PtGt 
	
			 COLUMN_TOTAL: integer :=3;
			 DATA_WIDTH: integer:=18);
END TB_M_OPERATOR;
 
ARCHITECTURE behavior OF TB_M_OPERATOR IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT M_OPERATOR
    PORT(
         CLK : IN  std_logic;
         RST : IN  std_logic;
         DATAIN : IN  std_logic_vector(DATA_WIDTH-1 downto 0);
         DOUT : OUT  std_logic_vector(DATA_WIDTH-1 downto 0);
         OPERATION : IN  std_logic_vector(5-1 downto 0);
         GROW : OUT  std_logic_vector(ADDR_WIDTH-1 downto 0);
         GCOL : OUT  std_logic_vector(COLUMN_TOTAL-1 downto 0);
         DVALID : IN  std_logic;
         OP_DONE : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal RST : std_logic := '0';
   signal DATAIN : std_logic_vector(DATA_WIDTH-1 downto 0) := (others => '0');
   signal OPERATION : std_logic_vector(5-1 downto 0) := (others => '0');
   signal DVALID : std_logic := '0';

 	--Outputs
   signal DOUT : std_logic_vector(DATA_WIDTH-1 downto 0);
   signal GROW : std_logic_vector(ADDR_WIDTH-1 downto 0);
   signal GCOL : std_logic_vector(COLUMN_TOTAL-1 downto 0);
   signal OP_DONE : std_logic;

   -- Clock period definitions
   constant CLK_period : time := 1 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: M_OPERATOR PORT MAP (
          CLK => CLK,
          RST => RST,
          DATAIN => DATAIN,
          DOUT => DOUT,
          OPERATION => OPERATION,
          GROW => GROW,
          GCOL => GCOL,
          DVALID => DVALID,
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
      wait for 10 ns;	
		RST<='0';
      wait for CLK_period*10;
		OPERATION<="00001";
		for i in 1 to 10 loop
			DATAIN<=std_logic_vector(to_signed(i+9,18));
			wait for CLK_period;
		end loop;
		wait until OP_DONE='0';
		wait for CLK_period*10;
		RST<='1';
      wait for CLK_period*1;
		RST<='0';
		OPERATION<="00010";
		wait until OP_DONE='0';
		wait for CLK_period*10;
      -- insert stimulus here 

      wait for CLK_period*20;
		assert false report "Simulation completed" severity failure;
		wait;
   end process;

END;
