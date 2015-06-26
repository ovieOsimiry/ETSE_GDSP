--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:44:33 02/19/2015
-- Design Name:   
-- Module Name:   C:/Users/Taras/Documents/FPGA_current_work/BRAM_build/TB_MEMARRAY.vhd
-- Project Name:  BRAM_build
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
 
ENTITY TB_MEMARRAY IS
generic(
		COLUMN_TOTAL: integer:=3;
      ADDR_WIDTH: integer:=10;
      DATA_WIDTH:integer:=18;
		DATA_WIDE_WIDTH: integer:=48
   );
END TB_MEMARRAY;
 
ARCHITECTURE behavior OF TB_MEMARRAY IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT MEMARRAY
    PORT(
         CLK : IN  std_logic;
         ADDRA : IN  std_logic_vector(9 downto 0);
         ADDRB : IN  std_logic_vector(9 downto 0);
         WE : IN  std_logic;
         OE : IN  std_logic;
         SSEN : IN  std_logic;
         ASHFT : IN  std_logic;
         OPCODE : IN  std_logic_vector(2 downto 0);
         DOUT : OUT  std_logic_vector(17 downto 0);
         DIN : IN  std_logic_vector(17 downto 0);
         CSEL : IN  std_logic_vector(2 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal ADDRA : std_logic_vector(9 downto 0) := (others => '0');
   signal ADDRB : std_logic_vector(9 downto 0) := (others => '0');
   signal WE : std_logic := '0';
   signal OE : std_logic := '0';
   signal SSEN : std_logic := '0';
   signal ASHFT : std_logic := '0';
   signal OPCODE : std_logic_vector(2 downto 0) := (others => '0');
   signal DIN : std_logic_vector(17 downto 0) := (others => '0');
   signal CSEL : std_logic_vector(2 downto 0) := (others => '0');

 	--Outputs
   signal DOUT : std_logic_vector(17 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 1 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: MEMARRAY PORT MAP (
          CLK => CLK,
          ADDRA => ADDRA,
          ADDRB => ADDRB,
          WE => WE,
          OE => OE,
          SSEN => SSEN,
          ASHFT => ASHFT,
          OPCODE => OPCODE,
          DOUT => DOUT,
          DIN => DIN,
          CSEL => CSEL
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
		DIN<=std_logic_vector(to_signed(88,DATA_WIDTH));	
      wait for CLK_period*10;
		OE<='1';
		WE<='1';
		ASHFT<='1';
		ADDRB<="11" & x"00";
		OPCODE<="000";
		CSEL<="001";
			for i in 1 to 3 loop
			ADDRA<=std_logic_vector(to_unsigned(i-1,ADDR_WIDTH));
			for j in 1 to 3 loop
				DIN<=std_logic_vector(to_signed(i*10+j,DATA_WIDTH));
				wait for CLK_period;
				if (4 rem integer(j))=1 then
					CSEL <=CSEL(0) & CSEL(CSEL'length-1 downto 1); --ror 1
				else
					CSEL <= CSEL (CSEL'length-2 downto 0) & CSEL(CSEL'length-1); -- rol 1;		
				end if;
			end loop;
		end loop;
		CSEL<="000";
		WE<='0';
		wait for CLK_period*10;
		CSEL<="111";
		wait for CLK_period;
		for i in 1 to 3 loop
			ADDRB<=std_logic_vector(to_unsigned(i-1,ADDR_WIDTH));
			wait for CLK_period;
		end loop;
		wait for CLK_period*5;
		
		
		OPCODE<="001";
		WE<='1';
		for i in 1 to 3 loop
			ADDRB<=std_logic_vector(to_unsigned(i-1,ADDR_WIDTH));
			DIN<=std_logic_vector(to_signed(i,DATA_WIDTH));
			ADDRA<=std_logic_vector(to_unsigned(512+i-1,ADDR_WIDTH));
			wait for CLK_period;
		end loop;
		WE<='0';
		wait for CLK_period*15;
		for i in 1 to 3 loop
			ADDRB<=std_logic_vector(to_unsigned(512+i-1,ADDR_WIDTH));
			wait for CLK_period;
		end loop;
		SSEN<='1';	
		wait for CLK_period*15;

		
		assert false report "Simulation stopped" severity failure;

      wait;
   end process;

END;
