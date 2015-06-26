----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:09:29 02/18/2015 
-- Design Name: 
-- Module Name:    MEMARRAY_PCIN - Behavioral 
-- Project Name: 
-- Target Devices: 
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;


entity MEMARRAY_PCIN is
generic(
		COLUMN_TOTAL: integer:=3;
		OPCODE_WIDTH: integer :=3;
      ADDR_WIDTH: integer:=10;
      DATA_WIDTH:integer:=18;
		DELAY_BITS: integer:=4;
		DATA_WIDE_WIDTH: integer:=48
   );
    Port ( CLK : in  STD_LOGIC;
           ADDRA : in  STD_LOGIC_VECTOR (ADDR_WIDTH-1 downto 0);
           ADDRB : in  STD_LOGIC_VECTOR (ADDR_WIDTH-1 downto 0);
           WE : in  STD_LOGIC;
           OE : in  STD_LOGIC;
			  ASHFT: in STD_LOGIC;			
           OPCODE : in  STD_LOGIC_VECTOR (OPCODE_WIDTH-1 downto 0);
           DOUT : out  STD_LOGIC_VECTOR (DATA_WIDTH-1 downto 0);
			  DIN  : in  STD_LOGIC_VECTOR (DATA_WIDTH-1 downto 0);
           CSEL : in  STD_LOGIC_VECTOR (COLUMN_TOTAL-1 downto 0));
end MEMARRAY_PCIN;

architecture Behavioral of MEMARRAY_PCIN is
----------------------------------------------------------------------------
COMPONENT DSP_INPUT_PCIN
    PORT(
         clk : IN  std_logic;
         sel : IN  std_logic_vector(2 downto 0);
         a : IN  std_logic_vector(17 downto 0);
         b : IN  std_logic_vector(17 downto 0);
         pcin : IN  std_logic_vector(47 downto 0);
         p : OUT  std_logic_vector(47 downto 0)
        );
END COMPONENT;
--------------------------------------------------------------------------
COMPONENT BRAM_WRAPPER
generic(
		COLUMN_NUMBER: integer:=0;
		NUM_COLUMNS: integer:=1;
      ADDR_WIDTH: integer:=10;
      DATA_WIDTH:integer:=18
   );
    PORT(
         CLK : IN  std_logic;
         ADDRA : IN  std_logic_vector(9 downto 0);
         DINA : IN  std_logic_vector(17 downto 0);
         ADDRB : IN  std_logic_vector(9 downto 0);
         DOUTB : OUT  std_logic_vector(17 downto 0);
         SHFT : IN  std_logic;
         WEA : IN  std_logic;
         OEB : IN  std_logic
        );
END COMPONENT;
---------------------------------------------------------------------------
type i_DATA_t is array (0 to COLUMN_TOTAL-1) of std_logic_vector(DATA_WIDTH-1 downto 0);
signal i_MEM2ALU:i_DATA_t;				---- mem-to-alu signal
signal i_ALU2SPD:i_DATA_t;				---- alu to scratchpad signal
signal i_SPDOUT:i_DATA_t;				---- scratchpad to mem and scratchpad to scratchpad(n+1) signal
type i_DATA_wide is array (0 to COLUMN_TOTAL-1) of std_logic_vector(DATA_WIDE_WIDTH-1 downto 0);
signal i_ALU2ALU: i_DATA_wide;		---- alu-to-alu signal

signal WE_SR2MEM: std_logic_vector(0 to COLUMN_TOTAL-1);

constant DIN_DELAY: integer:=2;
constant DELAY_DEPTH: integer:=4+DIN_DELAY;

type pipelined_OPCODE_t is array (0 to DIN_DELAY-1) of  std_logic_vector(OPCODE_WIDTH-1 downto 0);
signal p_OPCODE: pipelined_OPCODE_t;
signal i_OPCODE: std_logic_vector(OPCODE_WIDTH-1 downto 0);


type pipelined_DIN_t is array (0 to DIN_DELAY-1) of  std_logic_vector(DATA_WIDTH-1 downto 0);
signal p_DIN: pipelined_DIN_t;

signal i_DIN: std_logic_vector(DATA_WIDTH-1 downto 0);

constant SR_DELAY:integer:=0;
type pipelined_B_t is array (0 to DELAY_DEPTH+SR_DELAY) of  std_logic_vector(0 to COLUMN_TOTAL-1);
signal p_WEB,p_OEB:pipelined_B_t;

signal i_WEB: std_logic_vector(0 to COLUMN_TOTAL-1); 

type pipelined_ADDR_t is array (0 to DELAY_DEPTH) of std_logic_vector(ADDR_WIDTH-1 downto 0);
signal p_ADDR:pipelined_ADDR_t;

signal i_ADDR:std_logic_vector(ADDR_WIDTH-1 downto 0);

begin

-----------------------------------------------------------
DELAY_GEN: process(CLK)
begin
if rising_edge(CLK) then
	p_ADDR(0)<=ADDRA;
	for i in 0 to COLUMN_TOTAL-1 loop
		p_WEB(0)(i)<=CSEL(i) and WE;
	end loop;
	for i in 1 to DELAY_DEPTH+SR_DELAY loop
				p_WEB(i)<=p_WEB(i-1);
	end loop;
	i_WEB<=p_WEB(DELAY_DEPTH-1);
	
	for i in 1 to DELAY_DEPTH loop
		p_ADDR(i)<=p_ADDR(i-1);
	end loop;
	i_ADDR<=p_ADDR(DELAY_DEPTH);
	
	p_OPCODE(0)<=OPCODE;
	p_DIN(0)<=DIN;
	for i in 1 to DIN_DELAY-1 loop
		p_DIN(i)<=p_DIN(i-1);
		p_OPCODE(i)<=p_OPCODE(i-1);
	end loop;
	i_DIN<=p_DIN(DIN_DELAY-1);
	i_OPCODE<=p_OPCODE(DIN_DELAY-1);	
end if;
end process;
--------------------------------------------------------------
BLOCK_A_MEM_GEN:
for i in 0 to COLUMN_TOTAL-1 generate
i_SPDOUT(i)<=i_ALU2ALU(i)(DATA_WIDTH-1 downto 0);
	 MEMA: BRAM_WRAPPER 
	  generic map(
					COLUMN_NUMBER=>i,
					NUM_COLUMNS=>COLUMN_TOTAL,
					ADDR_WIDTH=>ADDR_WIDTH,
					DATA_WIDTH=>DATA_WIDTH)
	 PORT MAP (
          CLK => CLK,
          ADDRA => i_ADDR,
          DINA => i_SPDOUT(i),
          ADDRB => ADDRB,
          DOUTB => i_MEM2ALU(i),
          SHFT => ASHFT,
          WEA => i_WEB(i),
          OEB => CSEL(i)
        );
end generate;
--------------------------------------------------------------
FIRST_DSP:
 DSP_INPUT_PCIN PORT MAP (
          clk => CLK,
          sel => i_OPCODE,
          a => i_DIN,
          b => i_MEM2ALU(0),
          pcin => i_ALU2ALU(COLUMN_TOTAL-1),
          p => i_ALU2ALU(0)
        );
--------------------------------------------------------------		  
BLOCK_A_DSP_GEN:
for i in 1 to COLUMN_TOTAL-1 generate
DSP: DSP_INPUT_PCIN PORT MAP (
          clk => CLK,
          sel => i_OPCODE,
          a => i_DIN,
          b => i_MEM2ALU(i),
          pcin => i_ALU2ALU(i-1),
          p => i_ALU2ALU(i)
        );
end generate;

DOUT<=i_ALU2ALU(COLUMN_TOTAL-1)(DATA_WIDTH-1 downto 0);	
end Behavioral;

