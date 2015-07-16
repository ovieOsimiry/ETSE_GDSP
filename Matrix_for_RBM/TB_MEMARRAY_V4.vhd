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
use STD.textio.all; 
 
ENTITY TB_MEMARRAY_V4 IS
generic(
		COLUMN_TOTAL: integer:=3;
      ADDR_WIDTH: integer:=10;
      DATA_WIDTH:integer:=18;
		DATA_WIDE_WIDTH: integer:=48;
		OPCODE_WIDTH: integer:=3
   );

END TB_MEMARRAY_V4;
 
ARCHITECTURE behavior OF TB_MEMARRAY_V4 IS    

--############# General Signals ########################--

	--Inputs
   signal CLK : std_logic := '0';
   signal RST : std_logic := '0';
   signal Mul_DIN: std_logic_vector(DATA_WIDTH-1 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
   
   -- Control Signals----
   signal DATA_INPUT: std_logic:='0';
   signal GREAD_START,PREAD_START, GREAD_DONE,PREAD_DONE: std_logic :='0';
	
--@@@@@@@@@@@@@ End of General Signals @@@@@@@@@@@@@@@@@--
	
--############# MEMARRY_V3 Signals ########################--   
	
	--Inputs
   signal Ctrl_BRAM : STD_LOGIC:='0';
   signal P_SHFT_IN : STD_LOGIC:='0';
   signal LOAD : std_logic := '1';
   signal P : std_logic := '0';
   signal G : std_logic := '0';
   signal ADDRB : std_logic_vector(ADDR_WIDTH-1 downto 0) := std_logic_vector(to_unsigned(3,10));--(others => '0');
   signal OE : std_logic := '0';
   signal SSEN : std_logic := '0';
   signal DIN : std_logic_vector(DATA_WIDTH-1 downto 0) := (others => '0');
	
 	--Outputs
   signal DOUT : std_logic_vector(DATA_WIDTH-1 downto 0);
   signal f_gROW : std_logic_vector(ADDR_WIDTH-1 downto 0);
   signal f_gCOL : std_logic_vector(COLUMN_TOTAL-1 downto 0);
   signal OP_DONE : std_logic;
   signal LOADING_DONE : std_logic;	
--@@@@@@@@@@@@ End of MEMARRY_V3 Signals @@@@@@@@@@@@@@@@@@--

--############# GRAM Signals ########################-- 

   signal gROW : STD_LOGIC_VECTOR (ADDR_WIDTH-1 downto 0);
   signal gCOL : STD_LOGIC_VECTOR (COLUMN_TOTAL-1 downto 0);
   signal gDIN : STD_LOGIC_VECTOR (DATA_WIDTH-1 downto 0);
   signal gDOUT : STD_LOGIC_VECTOR (DATA_WIDTH-1 downto 0);
   signal gWE : STD_LOGIC;
   signal f_gOE : STD_LOGIC;
   
	signal MUL_GCOL : std_logic_vector(COLUMN_TOTAL-1 downto 0);
	signal MUL_GROW : std_logic_vector(ADDR_WIDTH-1 downto 0);
	signal MUL_GDIN : std_logic_vector(DATA_WIDTH-1 downto 0);
	signal Bank_sel_in : STD_LOGIC:='0';
	signal GOE : std_logic;
	signal READY : std_logic;
	--signal G_EN : STD_LOGIC;
   
--@@@@@@@@@@@@ End of GRAM Signals @@@@@@@@@@@@@@@@@@--
 
BEGIN
	
	
Mul_DIN	 <= DIN when DATA_INPUT = '0' else gDOUT;


process(GREAD_START, f_gCOL, f_gROW, gCOL, gROW)
begin
	if GREAD_START = '1' then
		MUL_GCOL <= gCOL;
		MUL_GROW <= gROW;
  	else 
  		MUL_GCOL <=	f_gCOL;
  		MUL_GROW <= f_gROW;
  	end if;
end process;

   uut: entity work.MEMARRAY_V3 
generic map(
	COLUMN_TOTAL => COLUMN_TOTAL,
	OPCODE_WIDTH => OPCODE_WIDTH,
    ADDR_WIDTH => ADDR_WIDTH,
    DATA_WIDTH => DATA_WIDTH,
	DATA_WIDE_WIDTH => DATA_WIDE_WIDTH
   )
	PORT MAP (
          CLK => CLK,
          RST => RST,
          LOAD => LOAD,
          P => P,
          G => G,
          ADDRB => ADDRB,
          P_SHFT_IN	=> P_SHFT_IN,
          Ctrl_BRAM => Ctrl_BRAM,
          Bank_sel_in => Bank_sel_in,
          OE => OE,
          SSEN => SSEN,
          DIN => Mul_DIN,
          DOUT => DOUT,
          G_ROW => f_gROW,
          G_COLUMN => f_gCOL,
          G_EN => f_gOE,
          READY		=> READY,
          OP_DONE => OP_DONE,
          LOADING_DONE => LOADING_DONE
        );
		  
GRAM:	entity work.STANDARD_RAM
generic map(
		COLUMN_TOTAL => COLUMN_TOTAL,		-- num columns in ram
      ADDR_WIDTH => ADDR_WIDTH,		-- log2 of rows
      DATA_WIDTH => DATA_WIDTH			--
   )
    Port map ( CLK 	=> CLK ,
           ROW 		=> Mul_gROW,
           COL 		=> Mul_gCOL,
           DIN 		=> gDIN,
           DOUT 	=> gDOUT,
           WE 		=> gWE,
           OE 		=> f_gOE
           );

 
    -- Clock process definitions
CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 
CONTROL_PROCESS: process

begin
GREAD_START <='1';
wait until GREAD_DONE<='1';
GREAD_START <='0';
PREAD_START <='1';
wait until PREAD_DONE='1';
PREAD_START <='0';
wait;	
end process;
  
 GRAM_READ: process
     file file_pointer : text;
     variable line_content : string(1 to 4);
     variable line_num : line;
     variable i,j,x : integer := 0;
	 variable vector: std_logic_vector(DATA_WIDTH-1 downto 0);
	 variable I_MAX,J_MAX :integer:=0;
  begin
		wait until GREAD_START='1';
      file_open(file_pointer,"Gdata.txt",READ_MODE);  
		readline (file_pointer,line_num); 
		read(line_num,I_MAX);
		readline (file_pointer,line_num); 
		read(line_num,J_MAX);	
		report "COLS number: " & integer'image(I_MAX);
		report "ROWS number:" & integer'image(J_MAX);
		GWE<='1';
		--  Assuming that file has enough lines as stated in first two lines COLS and ROWS
      for i in 1 to I_MAX loop
				for j in 1 to J_MAX loop
					readline (file_pointer,line_num);  --Read the whole line from the file
					READ (line_num,x);
					report "The value of G" & integer'image(i) & integer'image(j) &" = " & integer'image(x);
							GCOL<=std_logic_vector(to_unsigned(i-1,COLUMN_TOTAL));
							GROW<=std_logic_vector(to_signed(j-1,ADDR_WIDTH));
							GDIN<=std_logic_vector(to_signed(x,DATA_WIDTH));
							wait for CLK_period;
				end loop;
        end loop;  
       file_close(file_pointer);  --after reading all the lines close the file. 
		GWE<='0';
      	GREAD_DONE<='1';
		GOE<='0';
		---------------------------------------------------------------------------here we multiply matrices
		--wait until PREAD_DONE='1';
		GOE<='1';
		wait;
end process; 

 

-- Stimulus process
stim_proc: process
file file_pointer : text;
 variable line_content : string(1 to 4);
 variable line_num : line;
 variable i,j,x: integer := 0;
 variable vector: std_logic_vector(DATA_WIDTH-1 downto 0);
 variable WE_vec: std_logic_vector(COLUMN_TOTAL-1 downto 0):=(others => '0');

begin		

	rst <= '1';	-- hold FSM in reset state	
	OE<='1';
	
	  wait until PREAD_START='1';
	  rst <= '0'; -- release FSM from Reset state
	  DATA_INPUT <= '0';-- Switch Input data of MEMARRAY_V3 to DIN
     -------------------------------------------------- READING THE P MATRIX from file to device
	  file_open(file_pointer,"Pdata.txt",READ_MODE); 
	
		LOAD <= '1';--PUT the FSM in MEMARRAY_V3 in Loading State.
		--Uncomment if using internal MEMARRAY_V3 3 stage pipeline for DSP input A. Comment otherwise
		--wait for clk_period*1.5;		
		
		--Uncomment if using Standard RAM internal 3 stage pipeline for DSP input A. Comment otherwise.		
		
		--wait for clk_period*4.5;  -- wait for FSM to settle down before you begin sending data to it  
		wait until READY = '1';
		
		Bank_sel_in <= '0'; -- Tell BRAM to save data in upper bank
		
		for i in 1 to COLUMN_TOTAL loop
			for j in 1 to COLUMN_TOTAL loop
				readline (file_pointer,line_num);  --Read the whole line from the file
				READ (line_num,x);
				report "The value of P" & integer'image(i) & integer'image(j) &" = " & integer'image(x);
				DIN <= std_logic_vector(to_signed(x,DATA_WIDTH));				
				wait for CLK_period;
			end loop;
		end loop;
		file_close(file_pointer);  --after reading all the lines close the file. 
		
		DIN <= (others => '0');
	--	wait until LOADING_DONE = '1'; -- uncomment using 2 stage pipeline for DSP input a. 
		Ctrl_BRAM <= '1'; --Take control of BRAM in MEMARRAY_V3
		wait for clk_period*9; -- wait for at least 9 clk cycles so that the Control signals and data from FSM can pass through the pipeline Register to the BRAM 
			
		for i in 1 to COLUMN_TOTAL loop	-- Read out the values stored in BRAM and display on simulator waveform viewer. The values are read out in exactly the way they were saved.
			ADDRB<=std_logic_vector(to_unsigned(i-1,ADDR_WIDTH));
			wait for CLK_period;
		end loop;
		ADDRB<=std_logic_vector(to_unsigned(1020,ADDR_WIDTH));
		
		P_SHFT_IN <= '1'; -- Put BRAM in circulant reading mode.
		wait for CLK_period;
		
		for i in 1 to COLUMN_TOTAL loop	-- Read out the values stored in BRAM and display on simulator waveform viewer. The values are read out in circulant format.
			ADDRB<=std_logic_vector(to_unsigned(i-1,ADDR_WIDTH));
			wait for CLK_period;
		end loop;
		ADDRB<=std_logic_vector(to_unsigned(1020,ADDR_WIDTH));
		
		wait for CLK_period*7;		

		
		-- Perform PG multiplication. with A set to 1.
		P <= '1';
		G <= '1';
		Bank_sel_in <= '1'; -- Tell BRAM to save result of Multiplication in Lower bank of memory.
		LOAD <= '0'; 		-- Tell FSM in MEMARRAY_V3 to go to the multiplication state based on PG values.
      	Ctrl_BRAM <= '0';-- Give Back control of BRAM in MEMARRY_V3 to FSM
      	DATA_INPUT <= '1';-- Switch Input data of MEMARRAY_V3 to GRAM.

		PREAD_DONE<='1';
		wait for clk_period;  
	
		wait until OP_DONE = '1';
		wait for CLK_period*11; -- wait for multiplication data to propagate from DSP and Scratchpad Register to BRAM for proper saving.
		Ctrl_BRAM <= '1'; -- Take control of BRAM from FSM.
		P_SHFT_IN <= '1'; -- Put BRAM in normal reading mode.
		wait for CLK_period;
		
		for i in 1 to COLUMN_TOTAL loop
			ADDRB<= "1" & std_logic_vector(to_unsigned(i-1,ADDR_WIDTH-1));-- read lower bank of RAM.			
			wait for CLK_period;
		end loop;		
		
		ADDRB<= "0" & std_logic_vector(to_unsigned(10,ADDR_WIDTH-1)); -- Read an empty space so that we can seperate the normal and circulant values read from BRAM.
		--wait for clk_period*3.5;
		
		P_SHFT_IN <= '1'; -- Put BRAM in circulant reading mode.
		wait for CLK_period;
		
		
		for i in 1 to COLUMN_TOTAL loop
			ADDRB<= "1" & std_logic_vector(to_unsigned(i-1,ADDR_WIDTH-1));-- read lower bank of RAM.			
			wait for CLK_period;
		end loop;
		
		
		ADDRB<= "0" & std_logic_vector(to_unsigned(10,ADDR_WIDTH-1)); -- Read an empty space so that we can seperate the normal and circulant values read from BRAM.
		
		wait for CLK_period;
		
		for i in 1 to COLUMN_TOTAL loop
			ADDRB<= "0" & std_logic_vector(to_unsigned(i-1,ADDR_WIDTH-1));-- read upper bank of RAM.			
			wait for CLK_period;
		end loop;
		
		rst <= '1'; -- Reset FSM.
		LOAD <= '0';-- Prevent FSM from going to Loading state.
		P <= '1';-- Tell FSM to go to PG State. We will multiply the 
		G <= '1';-- previous result PG in lower bank with G so this gives PG * G.
		Ctrl_BRAM <= '0'; -- Give control of BRAM back to FSM.
		Bank_sel_in <= '0'; -- Tell BRAM to save result of Multiplication in upper bank of memory.
		wait for clk_period;
		rst <= '0';
		
	
		wait until OP_DONE = '1';
		
		wait for CLK_period*11; -- wait for multiplication data to propagate from DSP and Scratchpad Register to BRAM for proper saving.
		Ctrl_BRAM <= '1'; -- Take control of BRAM from FSM.
		P_SHFT_IN <= '0'; -- Put BRAM in normal reading mode.
		ADDRB<= "0" & std_logic_vector(to_unsigned(10,ADDR_WIDTH-1)); -- Read an empty space so we can notice actual value from.
		wait for CLK_period;
		
		for i in 1 to COLUMN_TOTAL loop
			ADDRB<= "0" & std_logic_vector(to_unsigned(i-1,ADDR_WIDTH-1));-- read lower bank of RAM.			
			wait for CLK_period;
		end loop;	
		
	
      wait;
   end process;

END;
