##############################################################################
## Filename:          C:\FPGA\AXI4\Virtex6_ML605_MUL_IP_CORE/drivers/matrix_mul_ip_core_s_int_g_v1_00_a/data/matrix_mul_ip_core_s_int_g_v2_1_0.tcl
## Description:       Microprocess Driver Command (tcl)
## Date:              Wed Aug 05 15:25:43 2015 (by Create and Import Peripheral Wizard)
##############################################################################

#uses "xillib.tcl"

proc generate {drv_handle} {
  xdefine_include_file $drv_handle "xparameters.h" "matrix_mul_ip_core_s_int_g" "NUM_INSTANCES" "DEVICE_ID" "C_BASEADDR" "C_HIGHADDR" 
}
