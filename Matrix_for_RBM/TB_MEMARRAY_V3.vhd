--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:22:55 07/03/2015
-- Design Name:   
-- Module Name:   C:/FPGA/Internship Jobs/Codes/ETSE_GDSP/Matrix_for_RBM/TB_MEMARRAY_V3.vhd
-- Project Name:  BRAM_build
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: MEMARRAY_V3
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
 
ENTITY TB_MEMARRAY_V3 IS
generic(
		COLUMN_TOTAL: integer:=5;
      ADDR_WIDTH: integer:=10;
      DATA_WIDTH:integer:=18;
		DATA_WIDE_WIDTH: integer:=48;
		OPCODE_WIDTH: integer:=3
   );

END TB_MEMARRAY_V3;
 
ARCHITECTURE behavior OF TB_MEMARRAY_V3 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
   

   --Inputs
   signal CLK : std_logic := '0';
   signal RST : std_logic := '0';
   signal LOAD : std_logic := '1';
   signal P : std_logic := '0';
   signal G : std_logic := '0';
   signal ADDRB : std_logic_vector(ADDR_WIDTH-1 downto 0) := (others => '0');
   signal OE : std_logic := '0';
   signal SSEN : std_logic := '0';
   signal DIN : std_logic_vector(DATA_WIDTH-1 downto 0) := (others => '0');

 	--Outputs
   signal DOUT : std_logic_vector(DATA_WIDTH-1 downto 0);
   signal G_ROW : std_logic_vector(ADDR_WIDTH-1 downto 0);
   signal G_COLUMN : std_logic_vector(COLUMN_TOTAL-1 downto 0);
   signal OP_DONE : std_logic;
   signal LOADING_DONE : std_logic;

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
	

 
BEGIN
 
 	--LOAD <= '0' when LOADING_DONE = '1' else '1';
	-- Instantiate the Unit Under Test (UUT)
   uut: entity work.MEMARRAY_V3 
	generic map(
		COLUMN_TOTAL => COLUMN_TOTAL,
		OPCODE_WIDTH => 3,
      ADDR_WIDTH => 10,
      DATA_WIDTH => 18,
		DATA_WIDE_WIDTH => 48
   )
	PORT MAP (
          CLK => CLK,
          RST => RST,
          LOAD => LOAD,
          P => P,
          G => G,
          ADDRB => ADDRB,
          OE => OE,
          SSEN => SSEN,
          DIN => DIN,
          DOUT => DOUT,
          G_ROW => G_ROW,
          G_COLUMN => G_COLUMN,
          OP_DONE => OP_DONE,
          LOADING_DONE => LOADING_DONE
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
	variable v_LOAD: std_logic:='1';
   begin		
      -- hold reset state for 100 ns.
		rst <= '1';
      wait for 10 ns;
		rst <= '0';
		
		--DIN<=std_logic_vector(to_signed(88, DATA_WIDTH));
      --wait for CLK_period*10;
		
		OE<='1';

		ADDRB<="11" & x"00";
		LOAD <= '1';
		wait for clk_period*1.5;
		
		for i in 1 to COLUMN_TOTAL loop
			for j in 1 to COLUMN_TOTAL loop
				DIN <= std_logic_vector(to_signed(i*10+j,DATA_WIDTH));
				wait for CLK_period;
			end loop;
		end loop;
		
--		wait until LOADING_DONE = '1'; -- strange behavior
--		LOAD <= '0'; -- never get assigned.
		
		wait for clk_period;
      
		wait for CLK_period*10;
		
		for i in 1 to COLUMN_TOTAL loop
			ADDRB<=std_logic_vector(to_unsigned(i-1,ADDR_WIDTH));
			wait for CLK_period;
		end loop;
		wait for CLK_period*5;
		
		LOAD <= '0'; -- never get assigned.
      -- insert stimulus here 
		
		wait for clk_period;
      
		wait for CLK_period*10;
		
		for i in 1 to COLUMN_TOTAL loop
			ADDRB<=std_logic_vector(to_unsigned(i-1,ADDR_WIDTH));
			wait for CLK_period;
		end loop;
		wait for CLK_period*5;
		
		
      wait;
   end process;

END;
