/*****************************************************************************
* Filename:          C:\FPGA\AXI4\Virtex6_ML605_MUL_IP_CORE/drivers/matrix_mul_ip_core_s_int_g_v1_00_a/src/matrix_mul_ip_core_s_int_g.h
* Version:           1.00.a
* Description:       matrix_mul_ip_core_s_int_g Driver Header File
* Date:              Wed Aug 05 15:25:43 2015 (by Create and Import Peripheral Wizard)
*****************************************************************************/

#ifndef matrix_mul_ip_core_s_int_g_H
#define matrix_mul_ip_core_s_int_g_H

/***************************** Include Files *******************************/

#include "xbasic_types.h"
#include "xstatus.h"
#include "xil_io.h"

/************************** Constant Definitions ***************************/


/**
 * User Logic Slave Space Offsets
 * -- SLV_REG0 : user logic slave module register 0
 * -- SLV_REG1 : user logic slave module register 1
 */
#define matrix_mul_ip_core_s_int_g_USER_SLV_SPACE_OFFSET (0x00000000)
#define matrix_mul_ip_core_s_int_g_SLV_REG0_OFFSET (matrix_mul_ip_core_s_int_g_USER_SLV_SPACE_OFFSET + 0x00000000)
#define matrix_mul_ip_core_s_int_g_SLV_REG1_OFFSET (matrix_mul_ip_core_s_int_g_USER_SLV_SPACE_OFFSET + 0x00000004)

#define _baseAddress XPAR_MATRIX_MUL_IP_CORE_S_INT_G_0_BASEADDR

/**
 * User Logic Master Space Offsets
 * -- MST_CNTL_REG : user logic master module control register
 * -- MST_STAT_REG : user logic master module status register
 * -- MST_ADDR_REG : user logic master module address register
 * -- MST_BE_REG   : user logic master module byte enable register
 * -- MST_LEN_REG  : user logic master module length (data transfer in bytes) register
 * -- MST_GO_PORT  : user logic master module go bit (to start master operation)
 */
#define matrix_mul_ip_core_s_int_g_USER_MST_SPACE_OFFSET (0x00000100)
#define matrix_mul_ip_core_s_int_g_MST_CNTL_REG_OFFSET (matrix_mul_ip_core_s_int_g_USER_MST_SPACE_OFFSET + 0x00000000)
#define matrix_mul_ip_core_s_int_g_MST_STAT_REG_OFFSET (matrix_mul_ip_core_s_int_g_USER_MST_SPACE_OFFSET + 0x00000001)
#define matrix_mul_ip_core_s_int_g_MST_ADDR_REG_OFFSET (matrix_mul_ip_core_s_int_g_USER_MST_SPACE_OFFSET + 0x00000004)
#define matrix_mul_ip_core_s_int_g_MST_BE_REG_OFFSET (matrix_mul_ip_core_s_int_g_USER_MST_SPACE_OFFSET + 0x00000008)
#define matrix_mul_ip_core_s_int_g_MST_LEN_REG_OFFSET (matrix_mul_ip_core_s_int_g_USER_MST_SPACE_OFFSET + 0x0000000C)
#define matrix_mul_ip_core_s_int_g_MST_GO_PORT_OFFSET (matrix_mul_ip_core_s_int_g_USER_MST_SPACE_OFFSET + 0x0000000F)

/**
 * User Logic Master Module Masks
 * -- MST_RD_MASK   : user logic master read request control
 * -- MST_WR_MASK   : user logic master write request control
 * -- MST_BL_MASK   : user logic master bus lock control
 * -- MST_BRST_MASK : user logic master burst assertion control
 * -- MST_DONE_MASK : user logic master transfer done status
 * -- MST_BSY_MASK  : user logic master busy status
 * -- MST_BRRD      : user logic master burst read request
 * -- MST_BRWR      : user logic master burst write request
 * -- MST_SGRD      : user logic master single read request
 * -- MST_SGWR      : user logic master single write request
 * -- MST_START     : user logic master to start transfer
 */
#define MST_RD_MASK (0x00000001UL)
#define MST_WR_MASK (0x00000002UL)
#define MST_BL_MASK (0x00000004UL)
#define MST_BRST_MASK (0x00000008UL)
#define MST_DONE_MASK (0x01)
#define MST_BSY_MASK (0x00000020UL)
#define MST_ERROR_MASK (0x00000040UL)
#define MST_TIMEOUT_MASK (0x00000080UL)
#define MST_BRRD (0x09)
#define MST_BRWR (0x0A)
#define MST_SGRD (0x01)
#define MST_SGWR (0x02)
#define MST_START (0x0A)

/**************************** Type Definitions *****************************/


/***************** Macros (Inline Functions) Definitions *******************/

/**
 *
 * Write a value to a matrix_mul_ip_core_s_int_g register. A 32 bit write is performed.
 * If the component is implemented in a smaller width, only the least
 * significant data is written.
 *
 * @param   BaseAddress is the base address of the matrix_mul_ip_core_s_int_g device.
 * @param   RegOffset is the register offset from the base to write to.
 * @param   Data is the data written to the register.
 *
 * @return  None.
 *
 * @note
 * C-style signature:
 * 	void matrix_mul_ip_core_s_int_g_mWriteReg(Xuint32 BaseAddress, unsigned RegOffset, Xuint32 Data)
 *
 */
#define matrix_mul_ip_core_s_int_g_mWriteReg(BaseAddress, RegOffset, Data) \
 	Xil_Out32((BaseAddress) + (RegOffset), (Xuint32)(Data))

/**
 *
 * Read a value from a matrix_mul_ip_core_s_int_g register. A 32 bit read is performed.
 * If the component is implemented in a smaller width, only the least
 * significant data is read from the register. The most significant data
 * will be read as 0.
 *
 * @param   BaseAddress is the base address of the matrix_mul_ip_core_s_int_g device.
 * @param   RegOffset is the register offset from the base to write to.
 *
 * @return  Data is the data from the register.
 *
 * @note
 * C-style signature:
 * 	Xuint32 matrix_mul_ip_core_s_int_g_mReadReg(Xuint32 BaseAddress, unsigned RegOffset)
 *
 */
#define matrix_mul_ip_core_s_int_g_mReadReg(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (RegOffset))


/**
 *
 * Write/Read 32 bit value to/from matrix_mul_ip_core_s_int_g user logic slave registers.
 *
 * @param   BaseAddress is the base address of the matrix_mul_ip_core_s_int_g device.
 * @param   RegOffset is the offset from the slave register to write to or read from.
 * @param   Value is the data written to the register.
 *
 * @return  Data is the data from the user logic slave register.
 *
 * @note
 * C-style signature:
 * 	void matrix_mul_ip_core_s_int_g_mWriteSlaveRegn(Xuint32 BaseAddress, unsigned RegOffset, Xuint32 Value)
 * 	Xuint32 matrix_mul_ip_core_s_int_g_mReadSlaveRegn(Xuint32 BaseAddress, unsigned RegOffset)
 *
 */
#define matrix_mul_ip_core_s_int_g_mWriteSlaveReg0(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (matrix_mul_ip_core_s_int_g_SLV_REG0_OFFSET) + (RegOffset), (Xuint32)(Value))
#define matrix_mul_ip_core_s_int_g_mWriteSlaveReg1(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (matrix_mul_ip_core_s_int_g_SLV_REG1_OFFSET) + (RegOffset), (Xuint32)(Value))

#define matrix_mul_ip_core_s_int_g_mReadSlaveReg0(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (matrix_mul_ip_core_s_int_g_SLV_REG0_OFFSET) + (RegOffset))
#define matrix_mul_ip_core_s_int_g_mReadSlaveReg1(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (matrix_mul_ip_core_s_int_g_SLV_REG1_OFFSET) + (RegOffset))

/**
 *
 * Check status of matrix_mul_ip_core_s_int_g user logic master module.
 *
 * @param   BaseAddress is the base address of the matrix_mul_ip_core_s_int_g device.
 *
 * @return  Status is the result of status checking.
 *
 * @note
 * C-style signature:
 * 	bool matrix_mul_ip_core_s_int_g_mMasterDone(Xuint32 BaseAddress)
 * 	bool matrix_mul_ip_core_s_int_g_mMasterBusy(Xuint32 BaseAddress)
 * 	bool matrix_mul_ip_core_s_int_g_mMasterError(Xuint32 BaseAddress)
 * 	bool matrix_mul_ip_core_s_int_g_mMasterTimeout(Xuint32 BaseAddress)
 *
 */
#define matrix_mul_ip_core_s_int_g_mMasterDone(BaseAddress) \
 	((((Xuint32) Xil_In8((BaseAddress)+(matrix_mul_ip_core_s_int_g_MST_STAT_REG_OFFSET))) & MST_DONE_MASK) == MST_DONE_MASK)
#define matrix_mul_ip_core_s_int_g_mMasterBusy(BaseAddress) \
 	((((Xuint32) Xil_In8((BaseAddress)+(matrix_mul_ip_core_s_int_g_MST_STAT_REG_OFFSET))) & MST_BUSY_MASK) == MST_BUSY_MASK)
#define matrix_mul_ip_core_s_int_g_mMasterError(BaseAddress) \
 	((((Xuint32) Xil_In8((BaseAddress)+(matrix_mul_ip_core_s_int_g_MST_STAT_REG_OFFSET))) & MST_ERROR_MASK) == MST_ERROR_MASK)
#define matrix_mul_ip_core_s_int_g_mMasterTimeout(BaseAddress) \
 	((((Xuint32) Xil_In8((BaseAddress)+(matrix_mul_ip_core_s_int_g_MST_STAT_REG_OFFSET))) & MST_TIMEOUT_MASK) == MST_TIMEOUT_MASK)

/************************** Function Prototypes ****************************/


/**
 *
 * User logic master module to send/receive word to/from remote system memory.
 * While sending, one word is read from user logic local FIFO and written to remote system memory.
 * While receiving, one word is read from remote system memory and written to user logic local FIFO.
 *
 * @param   BaseAddress is the base address of the matrix_mul_ip_core_s_int_g device.
 * @param   Src/DstAddress is the destination system memory address from/to which the data will be fetched/stored.
 *
 * @return  None.
 *
 * @note    None.
 *
 */
void matrix_mul_ip_core_s_int_g_MasterSendWord(Xuint32 BaseAddress, Xuint32 DstAddress);
void matrix_mul_ip_core_s_int_g_MasterRecvWord(Xuint32 BaseAddress, Xuint32 SrcAddress);

/**
 *
 * Run a self-test on the driver/device. Note this may be a destructive test if
 * resets of the device are performed.
 *
 * If the hardware system is not built correctly, this function may never
 * return to the caller.
 *
 * @param   baseaddr_p is the base address of the matrix_mul_ip_core_s_int_g instance to be worked on.
 *
 * @return
 *
 *    - XST_SUCCESS   if all self-test code passed
 *    - XST_FAILURE   if any self-test code failed
 *
 * @note    Caching must be turned off for this function to work.
 * @note    Self test may fail if data memory and device are not on the same bus.
 *
 */
XStatus matrix_mul_ip_core_s_int_g_SelfTest(void * baseaddr_p);
/**
*  Defines the number of registers available for read and write*/
#define TEST_AXI_LITE_USER_NUM_REG 2


#endif /** matrix_mul_ip_core_s_int_g_H */
