--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   13:13:41 06/30/2015
-- Design Name:   
-- Module Name:   C:/FPGA/Internship Jobs/Codes/ETSE_GDSP/Matrix_for_RBM/TB_MEMARRAY_V2.vhd
-- Project Name:  BRAM_build
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: MEMARRAY
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
 
ENTITY TB_MEMARRAY_V2 IS
generic(
		COLUMN_TOTAL: integer:=5;
      ADDR_WIDTH: integer:=10;
      DATA_WIDTH:integer:=18;
		DATA_WIDE_WIDTH: integer:=48;
		OPCODE_WIDTH: integer:=3
   );
END TB_MEMARRAY_V2;
 
ARCHITECTURE behavior OF TB_MEMARRAY_V2 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT MEMARRAY_V2
	 generic(
		COLUMN_TOTAL: integer:=5;
		OPCODE_WIDTH: integer :=3;
      ADDR_WIDTH: integer:=10;
      DATA_WIDTH:integer:=18;
		DATA_WIDE_WIDTH: integer:=48
   );
    PORT(
         CLK : IN  std_logic;
         ADDRA : IN  std_logic_vector(ADDR_WIDTH-1 downto 0);
         ADDRB : IN  std_logic_vector(ADDR_WIDTH-1 downto 0);
         WE : IN  std_logic;
         OE : IN  std_logic;
         SSEN : IN  std_logic;
         ASHFT : IN  std_logic;
         OPCODE : IN  std_logic_vector(OPCODE_WIDTH-1 downto 0);
         DOUT : OUT  std_logic_vector(DATA_WIDTH-1 downto 0);
         DIN : IN  std_logic_vector(DATA_WIDTH-1 downto 0);
         CSEL : IN  std_logic_vector(COLUMN_TOTAL-1 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal ADDRA : std_logic_vector(ADDR_WIDTH-1 downto 0) := (others => '0');
   signal ADDRB : std_logic_vector(ADDR_WIDTH-1 downto 0) := (others => '0');
   signal WE : std_logic := '0';
   signal OE : std_logic := '0';
   signal SSEN : std_logic := '0';
   signal ASHFT : std_logic := '0';
   signal OPCODE : std_logic_vector(OPCODE_WIDTH-1 downto 0) := (others => '0');
   signal DIN : std_logic_vector(DATA_WIDTH-1 downto 0) := (others => '0');
   signal CSEL : std_logic_vector(COLUMN_TOTAL-1 downto 0) := (others => '0');

 	--Outputs
   signal DOUT : std_logic_vector(DATA_WIDTH-1 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
	constant First_Col_right: boolean:= false;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: MEMARRAY_V2 
	generic map(
		COLUMN_TOTAL => COLUMN_TOTAL,
		OPCODE_WIDTH => 3,
      ADDR_WIDTH => 10,
      DATA_WIDTH => 18,
		DATA_WIDE_WIDTH => 48
   )
	
	PORT MAP (
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
		variable v_CSEL : std_logic_vector(COLUMN_TOTAL-1 downto 0):=(others => '0');
      begin	
		DIN<=std_logic_vector(to_signed(88, DATA_WIDTH));
      wait for CLK_period*10;
		OE<='1';
		WE<='1';
		ASHFT<='0';
		ADDRB<="11" & x"00";
		OPCODE<="000";
		--CSEL<="001";
		if First_Col_right = true then
			CSEL<= (CSEL'LENGTH-1 => '1', others => '0'); --"100";
		else
			CSEL<= (0 => '1', others => '0'); --"001";
		end if;
			for i in 1 to COLUMN_TOTAL loop
			ADDRA<=std_logic_vector(to_unsigned(i-1,ADDR_WIDTH));
			for j in 1 to COLUMN_TOTAL loop
				DIN<=std_logic_vector(to_signed(i*10+j,DATA_WIDTH));
				wait for CLK_period;
				if First_Col_right = true then
					if(COLUMN_TOTAL = j) then
						v_CSEL := (0 =>'1', others => '0'); --set as (000.....1).
							if i < COLUMN_TOTAL-1 then 
								CSEL <= to_stdlogicvector(to_bitvector(v_CSEL) sll (COLUMN_TOTAL-i-1));	-- start writing from 1 column to the right				
							else																								--010000 --2nd write
								CSEL <= v_CSEL;--00001 nth time.														--001000 -- 3rd write
							end if;																							--000001 nth time
					else
						CSEL <=CSEL(0) & CSEL(CSEL'length-1 downto 1); --ror 1	
					end if;
				else
					if(COLUMN_TOTAL = j) then
						v_CSEL := (CSEL'length-1 =>'1', others => '0'); --set as (100.....0).
						if i < COLUMN_TOTAL-1 then 
							CSEL <= to_stdlogicvector(to_bitvector(v_CSEL) srl (COLUMN_TOTAL-i-1));	-- start writing from 1 column to the right				
						else																								--000010 --2nd write
							CSEL <= v_CSEL;--00001 nth time.														--000100 -- 3rd write
						end if;																							--000001 nth time
					else
						--CSEL <= CSEL(0) & CSEL(CSEL'length-1 downto 1); --ror 1
						CSEL <= CSEL(CSEL'length-2 downto 0) & CSEL(CSEL'length-1); --rol 1
					end if;
				end if;					
			end loop;
		end loop;
		
		CSEL<= (others => '0'); --"000";
		WE<='0';
		wait for CLK_period*10;
		CSEL<= (others => '1');--"111";
		wait for CLK_period;
		for i in 1 to COLUMN_TOTAL loop
			ADDRB<=std_logic_vector(to_unsigned(i-1,ADDR_WIDTH));
			wait for CLK_period;
		end loop;
		wait for CLK_period*5;
      
		ADDRB<=std_logic_vector(to_unsigned(1000,ADDR_WIDTH));
		ASHFT<='1';
		CSEL<= (others => '0'); --"000";
		WE<='0';
		--wait for CLK_period*10;
		CSEL<= (others => '1');--"111";
		wait for CLK_period;
		for i in 1 to COLUMN_TOTAL loop
			ADDRB<=std_logic_vector(to_unsigned(i-1,ADDR_WIDTH));
			wait for CLK_period;
		end loop;
		wait for CLK_period*5;
      wait;
   end process;

END;
