-------------------------------------------------------------------------------
-- system_matrix_mul_ip_core_s_int_g_0_wrapper.vhd
-------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

library UNISIM;
use UNISIM.VCOMPONENTS.ALL;

library matrix_mul_ip_core_s_int_g_v1_00_a;
use matrix_mul_ip_core_s_int_g_v1_00_a.all;

entity system_matrix_mul_ip_core_s_int_g_0_wrapper is
  port (
    S_AXI_ACLK : in std_logic;
    S_AXI_ARESETN : in std_logic;
    S_AXI_AWADDR : in std_logic_vector(31 downto 0);
    S_AXI_AWVALID : in std_logic;
    S_AXI_WDATA : in std_logic_vector(31 downto 0);
    S_AXI_WSTRB : in std_logic_vector(3 downto 0);
    S_AXI_WVALID : in std_logic;
    S_AXI_BREADY : in std_logic;
    S_AXI_ARADDR : in std_logic_vector(31 downto 0);
    S_AXI_ARVALID : in std_logic;
    S_AXI_RREADY : in std_logic;
    S_AXI_ARREADY : out std_logic;
    S_AXI_RDATA : out std_logic_vector(31 downto 0);
    S_AXI_RRESP : out std_logic_vector(1 downto 0);
    S_AXI_RVALID : out std_logic;
    S_AXI_WREADY : out std_logic;
    S_AXI_BRESP : out std_logic_vector(1 downto 0);
    S_AXI_BVALID : out std_logic;
    S_AXI_AWREADY : out std_logic;
    m_axi_lite_aclk : in std_logic;
    m_axi_lite_aresetn : in std_logic;
    md_error : out std_logic;
    m_axi_lite_arready : in std_logic;
    m_axi_lite_arvalid : out std_logic;
    m_axi_lite_araddr : out std_logic_vector(31 downto 0);
    m_axi_lite_arprot : out std_logic_vector(2 downto 0);
    m_axi_lite_rready : out std_logic;
    m_axi_lite_rvalid : in std_logic;
    m_axi_lite_rdata : in std_logic_vector(31 downto 0);
    m_axi_lite_rresp : in std_logic_vector(1 downto 0);
    m_axi_lite_awready : in std_logic;
    m_axi_lite_awvalid : out std_logic;
    m_axi_lite_awaddr : out std_logic_vector(31 downto 0);
    m_axi_lite_awprot : out std_logic_vector(2 downto 0);
    m_axi_lite_wready : in std_logic;
    m_axi_lite_wvalid : out std_logic;
    m_axi_lite_wdata : out std_logic_vector(31 downto 0);
    m_axi_lite_wstrb : out std_logic_vector(3 downto 0);
    m_axi_lite_bready : out std_logic;
    m_axi_lite_bvalid : in std_logic;
    m_axi_lite_bresp : in std_logic_vector(1 downto 0);
    AXI_IP2Bus_RdAck : out std_logic;
    AXI_IP2Bus_WrAck : out std_logic;
    READY : out std_logic;
    OP_DONE : out std_logic;
    LOADING_DONE : out std_logic;
    UN_LOADING_DONE : out std_logic;
    Data_going_to_IP : out std_logic_vector(17 downto 0);
    Data_coming_fromIP : out std_logic_vector(17 downto 0);
    AXI_Bus_2IP_WrCE : out std_logic;
    AXI_Bus_2IP_RdCE_0 : out std_logic;
    AXI_Bus_2IP_RdCE_1 : out std_logic
  );
end system_matrix_mul_ip_core_s_int_g_0_wrapper;

architecture STRUCTURE of system_matrix_mul_ip_core_s_int_g_0_wrapper is

  component matrix_mul_ip_core_s_int_g is
    generic (
      C_S_AXI_DATA_WIDTH : INTEGER;
      C_S_AXI_ADDR_WIDTH : INTEGER;
      C_S_AXI_MIN_SIZE : std_logic_vector;
      C_USE_WSTRB : INTEGER;
      C_DPHASE_TIMEOUT : INTEGER;
      C_BASEADDR : std_logic_vector;
      C_HIGHADDR : std_logic_vector;
      C_FAMILY : STRING;
      C_NUM_REG : INTEGER;
      C_NUM_MEM : INTEGER;
      C_SLV_AWIDTH : INTEGER;
      C_SLV_DWIDTH : INTEGER;
      C_M_AXI_LITE_ADDR_WIDTH : INTEGER;
      C_M_AXI_LITE_DATA_WIDTH : INTEGER
    );
    port (
      S_AXI_ACLK : in std_logic;
      S_AXI_ARESETN : in std_logic;
      S_AXI_AWADDR : in std_logic_vector((C_S_AXI_ADDR_WIDTH-1) downto 0);
      S_AXI_AWVALID : in std_logic;
      S_AXI_WDATA : in std_logic_vector((C_S_AXI_DATA_WIDTH-1) downto 0);
      S_AXI_WSTRB : in std_logic_vector(((C_S_AXI_DATA_WIDTH/8)-1) downto 0);
      S_AXI_WVALID : in std_logic;
      S_AXI_BREADY : in std_logic;
      S_AXI_ARADDR : in std_logic_vector((C_S_AXI_ADDR_WIDTH-1) downto 0);
      S_AXI_ARVALID : in std_logic;
      S_AXI_RREADY : in std_logic;
      S_AXI_ARREADY : out std_logic;
      S_AXI_RDATA : out std_logic_vector((C_S_AXI_DATA_WIDTH-1) downto 0);
      S_AXI_RRESP : out std_logic_vector(1 downto 0);
      S_AXI_RVALID : out std_logic;
      S_AXI_WREADY : out std_logic;
      S_AXI_BRESP : out std_logic_vector(1 downto 0);
      S_AXI_BVALID : out std_logic;
      S_AXI_AWREADY : out std_logic;
      m_axi_lite_aclk : in std_logic;
      m_axi_lite_aresetn : in std_logic;
      md_error : out std_logic;
      m_axi_lite_arready : in std_logic;
      m_axi_lite_arvalid : out std_logic;
      m_axi_lite_araddr : out std_logic_vector((C_M_AXI_LITE_ADDR_WIDTH-1) downto 0);
      m_axi_lite_arprot : out std_logic_vector(2 downto 0);
      m_axi_lite_rready : out std_logic;
      m_axi_lite_rvalid : in std_logic;
      m_axi_lite_rdata : in std_logic_vector((C_M_AXI_LITE_DATA_WIDTH-1) downto 0);
      m_axi_lite_rresp : in std_logic_vector(1 downto 0);
      m_axi_lite_awready : in std_logic;
      m_axi_lite_awvalid : out std_logic;
      m_axi_lite_awaddr : out std_logic_vector((C_M_AXI_LITE_ADDR_WIDTH-1) downto 0);
      m_axi_lite_awprot : out std_logic_vector(2 downto 0);
      m_axi_lite_wready : in std_logic;
      m_axi_lite_wvalid : out std_logic;
      m_axi_lite_wdata : out std_logic_vector((C_M_AXI_LITE_DATA_WIDTH-1) downto 0);
      m_axi_lite_wstrb : out std_logic_vector(((C_M_AXI_LITE_DATA_WIDTH/8)-1) downto 0);
      m_axi_lite_bready : out std_logic;
      m_axi_lite_bvalid : in std_logic;
      m_axi_lite_bresp : in std_logic_vector(1 downto 0);
      AXI_IP2Bus_RdAck : out std_logic;
      AXI_IP2Bus_WrAck : out std_logic;
      READY : out std_logic;
      OP_DONE : out std_logic;
      LOADING_DONE : out std_logic;
      UN_LOADING_DONE : out std_logic;
      Data_going_to_IP : out std_logic_vector(17 downto 0);
      Data_coming_fromIP : out std_logic_vector(17 downto 0);
      AXI_Bus_2IP_WrCE : out std_logic;
      AXI_Bus_2IP_RdCE_0 : out std_logic;
      AXI_Bus_2IP_RdCE_1 : out std_logic
    );
  end component;

begin

  matrix_mul_ip_core_s_int_g_0 : matrix_mul_ip_core_s_int_g
    generic map (
      C_S_AXI_DATA_WIDTH => 32,
      C_S_AXI_ADDR_WIDTH => 32,
      C_S_AXI_MIN_SIZE => X"000001ff",
      C_USE_WSTRB => 0,
      C_DPHASE_TIMEOUT => 8,
      C_BASEADDR => X"7a000000",
      C_HIGHADDR => X"7a00ffff",
      C_FAMILY => "virtex6",
      C_NUM_REG => 4,
      C_NUM_MEM => 1,
      C_SLV_AWIDTH => 32,
      C_SLV_DWIDTH => 32,
      C_M_AXI_LITE_ADDR_WIDTH => 32,
      C_M_AXI_LITE_DATA_WIDTH => 32
    )
    port map (
      S_AXI_ACLK => S_AXI_ACLK,
      S_AXI_ARESETN => S_AXI_ARESETN,
      S_AXI_AWADDR => S_AXI_AWADDR,
      S_AXI_AWVALID => S_AXI_AWVALID,
      S_AXI_WDATA => S_AXI_WDATA,
      S_AXI_WSTRB => S_AXI_WSTRB,
      S_AXI_WVALID => S_AXI_WVALID,
      S_AXI_BREADY => S_AXI_BREADY,
      S_AXI_ARADDR => S_AXI_ARADDR,
      S_AXI_ARVALID => S_AXI_ARVALID,
      S_AXI_RREADY => S_AXI_RREADY,
      S_AXI_ARREADY => S_AXI_ARREADY,
      S_AXI_RDATA => S_AXI_RDATA,
      S_AXI_RRESP => S_AXI_RRESP,
      S_AXI_RVALID => S_AXI_RVALID,
      S_AXI_WREADY => S_AXI_WREADY,
      S_AXI_BRESP => S_AXI_BRESP,
      S_AXI_BVALID => S_AXI_BVALID,
      S_AXI_AWREADY => S_AXI_AWREADY,
      m_axi_lite_aclk => m_axi_lite_aclk,
      m_axi_lite_aresetn => m_axi_lite_aresetn,
      md_error => md_error,
      m_axi_lite_arready => m_axi_lite_arready,
      m_axi_lite_arvalid => m_axi_lite_arvalid,
      m_axi_lite_araddr => m_axi_lite_araddr,
      m_axi_lite_arprot => m_axi_lite_arprot,
      m_axi_lite_rready => m_axi_lite_rready,
      m_axi_lite_rvalid => m_axi_lite_rvalid,
      m_axi_lite_rdata => m_axi_lite_rdata,
      m_axi_lite_rresp => m_axi_lite_rresp,
      m_axi_lite_awready => m_axi_lite_awready,
      m_axi_lite_awvalid => m_axi_lite_awvalid,
      m_axi_lite_awaddr => m_axi_lite_awaddr,
      m_axi_lite_awprot => m_axi_lite_awprot,
      m_axi_lite_wready => m_axi_lite_wready,
      m_axi_lite_wvalid => m_axi_lite_wvalid,
      m_axi_lite_wdata => m_axi_lite_wdata,
      m_axi_lite_wstrb => m_axi_lite_wstrb,
      m_axi_lite_bready => m_axi_lite_bready,
      m_axi_lite_bvalid => m_axi_lite_bvalid,
      m_axi_lite_bresp => m_axi_lite_bresp,
      AXI_IP2Bus_RdAck => AXI_IP2Bus_RdAck,
      AXI_IP2Bus_WrAck => AXI_IP2Bus_WrAck,
      READY => READY,
      OP_DONE => OP_DONE,
      LOADING_DONE => LOADING_DONE,
      UN_LOADING_DONE => UN_LOADING_DONE,
      Data_going_to_IP => Data_going_to_IP,
      Data_coming_fromIP => Data_coming_fromIP,
      AXI_Bus_2IP_WrCE => AXI_Bus_2IP_WrCE,
      AXI_Bus_2IP_RdCE_0 => AXI_Bus_2IP_RdCE_0,
      AXI_Bus_2IP_RdCE_1 => AXI_Bus_2IP_RdCE_1
    );

end architecture STRUCTURE;

