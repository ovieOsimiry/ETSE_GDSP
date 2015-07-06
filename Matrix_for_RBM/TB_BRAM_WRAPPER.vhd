--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:02:00 02/18/2015
-- Design Name:   
-- Module Name:   C:/Users/Taras/Documents/FPGA_current_work/Matrix_multiplier_chainable/TB_BRAM_WRAPPER.vhd
-- Project Name:  BRAM18
-- Target Device:  
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
 
ENTITY TB_BRAM_WRAPPER IS
END TB_BRAM_WRAPPER;
 
ARCHITECTURE behavior OF TB_BRAM_WRAPPER IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT BRAM_WRAPPER
	 generic(
		COLUMN_NUMBER: integer:=0;	-- The number of given column, ordinal
		NUM_COLUMNS: integer:=3;   -- total number of columns
      ADDR_WIDTH: integer:=10;   -- bitwidth of addr input, MUST match addr_width is syntesized bram
      DATA_WIDTH:integer:=18		-- bitwidth of data input, MUST match data_width is syntesized bram
		);
    PORT(
         CLK : IN  std_logic;
         ADDRA : IN  std_logic_vector(9 downto 0);		-- in both addresses highest bit is for
         DINA : IN  std_logic_vector(17 downto 0);
         ADDRB : IN  std_logic_vector(9 downto 0);
         DOUTB : OUT  std_logic_vector(17 downto 0);
         SHFT : IN  std_logic;
         WEA : IN  std_logic;
         OEB : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal ADDRA : std_logic_vector(9 downto 0) := (others => '0');
   signal DINA : std_logic_vector(17 downto 0) := (others => '0');
   signal ADDRB : std_logic_vector(9 downto 0) := (others => '0');
   signal SHFT : std_logic := '0';
   signal WEA : std_logic := '0';
   signal OEB : std_logic := '0';

 	--Outputs
   signal DOUTB : std_logic_vector(17 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 1 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: BRAM_WRAPPER PORT MAP (
          CLK => CLK,
          ADDRA => ADDRA,
          DINA => DINA,
          ADDRB => ADDRB,
          DOUTB => DOUTB,
          SHFT => SHFT,
          WEA => WEA,
          OEB => OEB
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
      OEB<='0';
      wait for 40 ns;	
      OEB<='1';
      wait for CLK_period*10;
		WEA<='1';
		SHFT<='0';
		for I in 1 to 10 loop
			ADDRA<=std_logic_vector(to_signed(I,10));
			DINA<=std_logic_vector(to_signed(10+I,18));
			wait for CLK_period;
		end loop;
		WEA<='0';
				OEB<='0';
		wait for CLK_period*5;
				OEB<='1';
		wait for CLK_period;
		for I in 1 to 10 loop
			ADDRB<=std_logic_vector(to_signed(I,10));
			wait for CLK_period;
		end loop;

				wait for CLK_period*5;

      -- insert stimulus here 
		SHFT<='1';
		wait for CLK_period;
		for I in 1 to 10 loop
			ADDRA<=std_logic_vector(to_signed(I,10));
			DINA<=std_logic_vector(to_signed(10+I,18));
			wait for CLK_period;
		end loop;
		WEA<='0';
				wait for CLK_period*5;
		wait for CLK_period;
		for I in 1 to 10 loop
			ADDRB<=std_logic_vector(to_signed(I,10));
			wait for CLK_period;
		end loop;
		
			wait for CLK_period*10;

      -- insert stimulus here 
		WEA<='1';
		SHFT<='1';
		wait for CLK_period;
		for I in 1 to 10 loop
			ADDRA<=std_logic_vector(to_signed(512+I,10));
			DINA<=std_logic_vector(to_signed(10+I,18));
			wait for CLK_period;
		end loop;
		WEA<='0';
				wait for CLK_period*5;
		wait for CLK_period;
		for I in 1 to 10 loop
			ADDRB<=std_logic_vector(to_signed(512+I,10));
			wait for CLK_period;
		end loop;
      wait;
   end process;

END;
