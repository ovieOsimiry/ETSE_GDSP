--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:58:08 03/03/2015
-- Design Name:   
-- Module Name:   C:/Users/Taras/Documents/FPGA_current_work/BRAM_build/TB_FSM.vhd
-- Project Name:  BRAM_build
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
ENTITY TB_FSM IS
  generic (
			 ADDR_WIDTH: integer :=10;
			 COLUMNS_TOTAL: integer :=3);
END TB_FSM;
 
ARCHITECTURE behavior OF TB_FSM IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ADDR_GEN_FSM
  generic (
			 ADDR_WIDTH: integer :=10;
			 COLUMNS_TOTAL: integer :=3);
    Port ( CLK : in  STD_LOGIC;
           RST : in  STD_LOGIC;
           P : in  STD_LOGIC;
           G : in  STD_LOGIC;
			  WE: out std_logic;
           P_ADDR : out  STD_LOGIC_VECTOR (ADDR_WIDTH-1 downto 0);
           P_SHFT : out  STD_LOGIC;
           G_ROW : out  STD_LOGIC_VECTOR (ADDR_WIDTH-1 downto 0);
           G_COLUMN : out  STD_LOGIC_VECTOR (COLUMNS_TOTAL-1 downto 0);
			  OP_DONE: out std_logic);
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal RST : std_logic := '0';
   signal P : std_logic := '0';
   signal G : std_logic := '0';
	signal WE : std_logic := '0';

 	--Outputs
   signal P_ADDR : std_logic_vector(ADDR_WIDTH-1 downto 0);
   signal P_SHFT : std_logic;
   signal G_ROW : std_logic_vector(ADDR_WIDTH-1 downto 0);
   signal G_COLUMN : std_logic_vector(COLUMNS_TOTAL-1 downto 0);
   signal OP_DONE : std_logic;

   -- Clock period definitions
   constant CLK_period : time := 2 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ADDR_GEN_FSM PORT MAP (
          CLK => CLK,
          RST => RST,
          P => P,
          G => G,
			 WE=>WE,
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
