--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:06:36 03/04/2015
-- Design Name:   
-- Module Name:   C:/Users/Taras/Documents/FPGA_current_work/BRAM_build/TB_MATRIXMULT_V2.vhd
-- Project Name:  BRAM_build
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
use STD.textio.all; 
 
ENTITY TB_MATRIXMULT_V2 IS
generic(
		COLUMN_TOTAL: integer:=3;
		ROW_TOTAL: integer:=3;
      ADDR_WIDTH: integer:=10;
		C_OPCODE_WIDTH:integer :=4; -- gives 2**4=16 opcodes
      DATA_WIDTH:integer:=18;
		DATA_WIDE_WIDTH: integer:=48
   );
END TB_MATRIXMULT_V2;
 
ARCHITECTURE behavior OF TB_MATRIXMULT_V2 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT MATRIXMULT_V2
    PORT(
         CLK : IN  std_logic;
         ADDRA : IN  std_logic_vector(9 downto 0);
         ADDRB : IN  std_logic_vector(9 downto 0);
         WE : IN  std_logic;
         OE : IN  std_logic;
         ASHFT : IN  std_logic;
         OPCODE : IN  std_logic_vector(2 downto 0);
         DOUT : OUT  std_logic_vector(17 downto 0);
         DIN : IN  std_logic_vector(17 downto 0);
         CSEL : IN  std_logic_vector(2 downto 0)
        );
    END COMPONENT;
    ----------------------------------------------------------   
	 COMPONENT STANDARD_RAM
    generic(
		COLUMN_TOTAL: integer:=3;
      ADDR_WIDTH: integer:=10;
      DATA_WIDTH:integer:=18
		);
    Port ( CLK : in  STD_LOGIC;
           ROW : in  STD_LOGIC_VECTOR (ADDR_WIDTH-1 downto 0);
           COL : in  STD_LOGIC_VECTOR (COLUMN_TOTAL-1 downto 0);
           DIN : in  STD_LOGIC_VECTOR (DATA_WIDTH-1 downto 0);
           DOUT : out  STD_LOGIC_VECTOR (DATA_WIDTH-1 downto 0);
           WE : in  STD_LOGIC;
           OE : in  STD_LOGIC);
    END COMPONENT;
	 ------------------------------------------------------------
	component ADDR_GEN_FSM
	generic (
			 ADDR_WIDTH: integer :=10;
			 COLUMN_TOTAL: integer :=3);
    Port ( CLK : in  STD_LOGIC;
           RST : in  STD_LOGIC;
           P : in  STD_LOGIC;
           G : in  STD_LOGIC;
			  WE: out std_logic;
           P_ADDR : out  STD_LOGIC_VECTOR (ADDR_WIDTH-1 downto 0);
           P_SHFT : out  STD_LOGIC;
           G_ROW : out  STD_LOGIC_VECTOR (ADDR_WIDTH-1 downto 0);
           G_COLUMN : out  STD_LOGIC_VECTOR (COLUMN_TOTAL-1 downto 0);
			  OP_DONE: out std_logic);
	end component;
	 
	-- Inputs for FSM
	signal fRST: std_logic := '0';
	signal fP: std_logic := '0';
	signal fG: std_logic := '0';
	signal fWE: std_logic := '0';
	signal fP_SHFT: std_logic := '0';
	signal fP_ADDR: std_logic_vector(ADDR_WIDTH-1 downto 0) := (others => '0');
	signal fG_ROW: std_logic_vector(ADDR_WIDTH-1 downto 0) := (others => '0');
	signal fG_COLUMN: std_logic_vector(COLUMN_TOTAL-1 downto 0) := (others => '0');
	signal fOP_DONE: std_logic := '0';

   --Inputs for P ram
   signal CLK : std_logic := '0';
   signal ADDRA : std_logic_vector(9 downto 0) := (others => '0');
   signal ADDRB : std_logic_vector(9 downto 0) := (others => '0');
   signal WE : std_logic := '0';
   signal OE : std_logic := '0';
   signal ASHFT : std_logic := '0';
   signal OPCODE : std_logic_vector(2 downto 0) := (others => '0');
   signal DIN : std_logic_vector(17 downto 0) := (others => '0');
   signal CSEL : std_logic_vector(2 downto 0) := (others => '0');
	
	
	-- Internal signal
	signal iGROW : std_logic_vector(9 downto 0) := (others => '0');
   signal iGCOL : std_logic_vector(2 downto 0) := (others => '0');
	
	signal iASHFT : std_logic := '0';
	signal iADDRA : std_logic_vector(9 downto 0) := (others => '0');
   signal iADDRB : std_logic_vector(9 downto 0) := (others => '0');
   signal iWE : std_logic := '0';

 	--Outputs
   signal DOUT : std_logic_vector(17 downto 0);

   --Inputs for G ram
   signal GROW : std_logic_vector(9 downto 0) := (others => '0');
   signal GCOL : std_logic_vector(2 downto 0) := (others => '0');
   signal iDIN : std_logic_vector(17 downto 0) := (others => '0');
	signal GDIN : std_logic_vector(17 downto 0) := (others => '0');
   signal GWE : std_logic := '0';
   signal GOE : std_logic := '0';

 	--Outputs for G ram
   signal GDOUT : std_logic_vector(17 downto 0);

	-- internal TB signals definintions;
	signal GREAD_START,PREAD_START, GREAD_DONE,PREAD_DONE,GREAD_ROWWISE,MUL_START: std_logic :='0';

   -- Clock period definitions
   constant CLK_period : time := 1 ns;
 
BEGIN
	fsm: ADDR_GEN_FSM
    Port map( CLK => CLK,
           RST => fRST,
           P => fP,
           G => fG,
			  WE=> fWE,
           P_ADDR => fP_ADDR,
           P_SHFT => fP_SHFT,
           G_ROW => fG_ROW,
           G_COLUMN => fG_COLUMN,
			  OP_DONE => fOP_DONE);
 
 
	-- Instantiate the Unit Under Test (UUT)
   uut: MATRIXMULT_V2 PORT MAP (
          CLK => CLK,
          ADDRA => ADDRA,
          ADDRB => ADDRB,
          WE => WE,
          OE => OE,
          ASHFT => ASHFT,
          OPCODE => OPCODE,
          DOUT => DOUT,
          DIN => iDIN,
          CSEL => CSEL
        );

  
CONTROL_PROCESS: process
begin
	wait for CLK_period*10;
	GREAD_START<='1';
	wait until GREAD_DONE='1';
	GREAD_START<='0';
	PREAD_START<='1';
	wait until PREAD_DONE='1';
	PREAD_START<='0';
	wait for CLK_period*30;
	GREAD_ROWWISE<='1';
	wait for CLK_period*2;
	MUL_START<='1';
	wait;
end process;
-- Instantiate the Unit Under Test (UUT)
   gram: STANDARD_RAM PORT MAP (
          CLK => CLK,
          ROW => GROW,
          COL => GCOL,
          DIN => GDIN,
          DOUT => GDOUT,
          WE => GWE,
          OE => GOE
        );
   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
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
		report "COLS number: " & integer'image(i);
		report "ROWS number:" & integer'image(j);
		GWE<='1';
		--  Assuming that file has enough lines as stated in first two lines COLS and ROWS
      for i in 1 to I_MAX loop
				for j in 1 to J_MAX loop
					readline (file_pointer,line_num);  --Read the whole line from the file
					READ (line_num,x);
					report "The value of G" & integer'image(i) & integer'image(j) &" = " & integer'image(x);
							iGCOL<=std_logic_vector(to_unsigned(i-1,3));
							iGROW<=std_logic_vector(to_signed(j-1,10));
							iGDIN<=std_logic_vector(to_signed(x,18));
							wait for CLK_period;
				end loop;
        end loop;  
      file_close(file_pointer);  --after reading all the lines close the file. 
		GWE<='0';
      GREAD_DONE<='1';
		GOE<='0';
		---------------------------------------------------------------------------here we multiply matrices
		wait until GREAD_ROWWISE='1';
		GOE<='1';
		wait;
end process;

stim_proc: process
     file file_pointer : text;
     variable line_content : string(1 to 4);
     variable line_num : line;
     variable i,j,x: integer := 0;
	  variable vector: std_logic_vector(DATA_WIDTH-1 downto 0);
	  variable WE_vec: std_logic_vector(COLUMN_TOTAL-1 downto 0):="000";
begin		
     wait until PREAD_START='1';
     -------------------------------------------------- READING THE P MATRIX from file to device
	  file_open(file_pointer,"Pdata.txt",READ_MODE);  
	  
	  	OE<='1';
		iWE<='1';
		iASHFT<='0';
		iADDRB<="00" & x"00";
		OPCODE<="000";
		CSEL<="001";
		for i in 1 to ROW_TOTAL loop
			iADDRA<=std_logic_vector(to_unsigned(i-1,ADDR_WIDTH));
			for j in 1 to COLUMN_TOTAL loop
					readline (file_pointer,line_num);  --Read the whole line from the file
					READ (line_num,x);
					report "The value of P" & integer'image(i) & integer'image(j) &" = " & integer'image(x);
					iDIN<=std_logic_vector(to_signed(x,DATA_WIDTH));
					wait for CLK_period;
					CSEL <= CSEL (CSEL'length-2 downto 0) & CSEL(CSEL'length-1); -- rol 1;					
			end loop;
		end loop;
		file_close(file_pointer);  --after reading all the lines close the file. 
		CSEL<="000";
		OPCODE<="000";
		PREAD_DONE<='1';
		wait for CLK_period*3;
		----------------------------------- SUM PG
		iADDRB<=std_logic_vector(to_unsigned(312,ADDR_WIDTH));
		wait until MUL_START='1';
		OE<='1';
		WE<='0';
		ASHFT<='1';
		CSEL<="111";
		
		OPCODE<="001";			-- A*B+C
		ADDRB<=std_logic_vector(to_unsigned(2,ADDR_WIDTH));
		wait for CLK_period;
		
		OPCODE<="011";			-- A*B+C
		ADDRB<=std_logic_vector(to_unsigned(1,ADDR_WIDTH));
		wait for CLK_period;
		
		ADDRB<=std_logic_vector(to_unsigned(0,ADDR_WIDTH));
		ADDRA<=std_logic_vector(to_unsigned(512,ADDR_WIDTH));
		WE<='1';
		wait for CLK_period;
		
		WE<='0';
		OPCODE<="001";			-- A*B+C
		ADDRB<=std_logic_vector(to_unsigned(1,ADDR_WIDTH));
		wait for CLK_period;
		OPCODE<="011";			-- A*B+C
		ADDRB<=std_logic_vector(to_unsigned(0,ADDR_WIDTH));
		wait for CLK_period;
		ADDRB<=std_logic_vector(to_unsigned(2,ADDR_WIDTH));
		ADDRA<=std_logic_vector(to_unsigned(513,ADDR_WIDTH));
		WE<='1';
		wait for CLK_period;
		
		WE<='0';
		OPCODE<="001";			-- A*B+C
		ADDRB<=std_logic_vector(to_unsigned(0,ADDR_WIDTH));
		wait for CLK_period;
		OPCODE<="011";			-- A*B+C
		ADDRB<=std_logic_vector(to_unsigned(2,ADDR_WIDTH));
		wait for CLK_period;
		ADDRB<=std_logic_vector(to_unsigned(1,ADDR_WIDTH));
		ADDRA<=std_logic_vector(to_unsigned(514,ADDR_WIDTH));
		WE<='1';
		wait for CLK_period;
		WE<='0';
		OPCODE<="000";
		OE<='0';
		wait for CLK_period*20;
		assert false report "Simulation completed" severity failure;
end process;
iDIN<=DIN when PREAD_START='1' else GDOUT;


END;
