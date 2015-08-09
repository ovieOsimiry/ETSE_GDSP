/*****************************************************************************
* Filename:          C:\FPGA\AXI4\Virtex6_ML605_MUL_IP_CORE/drivers/matrix_mul_ip_core_v1_00_a/src/matrix_mul_ip_core_selftest.c
* Version:           1.00.a
* Description:       Contains a diagnostic self-test function for the matrix_mul_ip_core driver
* Date:              Wed Aug 05 15:25:43 2015 (by Create and Import Peripheral Wizard)
*****************************************************************************/


/***************************** Include Files *******************************/

#include "matrix_mul_ip_core_s_int_g.h"
#include "stdio.h"
#include "xio.h"
#include "xparameters.h"


/************************** Constant Definitions ***************************/

#define READ_WRITE_MUL_FACTOR 0x10
#define MATRIX_MUL_IP_CORE_SELFTEST_BUFSIZE  4 /* Size of buffer (n bytes) is fixed to 4 for lite Master */
#define MATRIX_MUL_IP_CORE_USER_NUM_REG  2/* Number of registers in slave */

/************************** Variable Definitions ****************************/

//static Xuint8 __attribute__((aligned (128))) SrcBuffer[MATRIX_MUL_IP_CORE_SELFTEST_BUFSIZE];   /* Source buffer      */
//static Xuint8 __attribute__((aligned (128))) DstBuffer[MATRIX_MUL_IP_CORE_SELFTEST_BUFSIZE];   /* Destination buffer */

/************************** Function Definitions ***************************/
void delay(int cycles);
int Read_Status(void);

/**************************************************************************/

/********************************Constants********************************/
const int LOAD_GRAM1 = 0b00000000000001000000000000000100;
const int LOAD_GRAM2 = 0b00000000000000000000000000000100;
const int OP_DONE =    0b00000000000010000000000000000000;


/**************************************************************************/
/**
 *
 * Run a self-test on the driver/device. Note this may be a destructive test if
 * resets of the device are performed.
 *
 * If the hardware system is not built correctly, this function may never
 * return to the caller.
 *
 * @param   baseaddr_p is the base address of the MATRIX_MUL_IP_CORE instance to be worked on.
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
XStatus MATRIX_MUL_IP_CORE_SelfTest(void * baseaddr_p)
{
  Xuint32 baseaddr;
//  int write_loop_index;
//  int read_loop_index;
//  int Index;
  
  /*
   * Check and get the device address
   */
  /*
   * Base Address maybe 0. Up to developer to uncomment line below.
  XASSERT_NONVOID(baseaddr_p != XNULL);
   */
  baseaddr = (Xuint32) baseaddr_p;

  xil_printf("******************************\n\r");
  xil_printf("* matrix_mul_ip_core_s_int_g Self Test\n\r");
  xil_printf("******************************\n\n\r");

  /*
   * Write to user logic slave module register(s) and read back
   */
  xil_printf("LOAD GRAM test...\n\r");

//  for (write_loop_index = 0 ; write_loop_index < MATRIX_MUL_IP_CORE_USER_NUM_REG; write_loop_index++)
//    MATRIX_MUL_IP_CORE_mWriteSlaveReg0 (baseaddr, write_loop_index*4, (write_loop_index+1)*READ_WRITE_MUL_FACTOR);
//  for (read_loop_index = 0 ; read_loop_index < MATRIX_MUL_IP_CORE_USER_NUM_REG; read_loop_index++)
//    if ( MATRIX_MUL_IP_CORE_mReadSlaveReg0 (baseaddr, read_loop_index*4) != (read_loop_index+1)*READ_WRITE_MUL_FACTOR){
//      xil_printf ("Error reading register value at address %x", (int)baseaddr + read_loop_index*4);
//      return XST_FAILURE;
//    }


  matrix_mul_ip_core_s_int_g_mWriteSlaveReg0 (baseaddr, 0, LOAD_GRAM1);
  delay(3);
  matrix_mul_ip_core_s_int_g_mWriteSlaveReg0 (baseaddr, 0, LOAD_GRAM2);
  //ioposition = ((uint32_t)0x01) << 19;
  int stat=matrix_mul_ip_core_s_int_g_mReadSlaveReg0(_baseAddress, 0);
  xil_printf("First reg0 %x ...\n\r",stat);
  stat=Read_Status();
  //while ((OP_DONE & Read_Status()) != OP_DONE);
  	  xil_printf("First test Passed %i ...\n\r",stat);




//  xil_printf("   - slave register write/read passed\n\n\r");
//
//  /* Read the registers at the base address to ensure that this is indeed working */
//  if ( (MATRIX_MUL_IP_CORE_mReadSlaveReg0 (baseaddr, 0)) != 0x0){
//    xil_printf("   - soft reset failed\n\n\r");
//    return XST_FAILURE;
//  }
//
//  xil_printf("   - soft reset passed\n\n\r");
//
//  /*
//   * Setup user logic master module to receive/send data from/to remote memory
//   */
//  xil_printf("User logic master module test...\n\r");
//  xil_printf("   - source buffer address is 0x%08x\n\r", SrcBuffer);
//  xil_printf("   - destination buffer address is 0x%08x\n\r", DstBuffer);
//  xil_printf("   - initialize the source buffer bytes with a pattern\n\r");
//  xil_printf("   - initialize the destination buffer bytes to zero\n\r");
//  /*
//  *  Initialize the buffer to be used for testing. Note that this
//  * buffer should be accessible from both processor as well as
//  * Master */
//
//  for ( Index = 0; Index < MATRIX_MUL_IP_CORE_SELFTEST_BUFSIZE; Index++ )
//  {
//    SrcBuffer[Index] = Index;
//    DstBuffer[Index] = 0;
//  }
//  xil_printf("   - start user logic master module to receive one word from the source\n\r");
//  MATRIX_MUL_IP_CORE_MasterRecvWord(baseaddr, (Xuint32) SrcBuffer);
//  while ( ! MATRIX_MUL_IP_CORE_mMasterDone(baseaddr) ) {}
//  xil_printf("   - transfer completed\n\r");
//  xil_printf("   - start user logic master module to send one word to the destination\n\r");
//  MATRIX_MUL_IP_CORE_MasterSendWord(baseaddr, (Xuint32) DstBuffer);
//  while ( ! MATRIX_MUL_IP_CORE_mMasterDone(baseaddr) ) {}
//  xil_printf("   - transfer completed\n\r");
//
//  /* Compare the source and destination buffers */
//
//  for ( Index = 0; Index < MATRIX_MUL_IP_CORE_SELFTEST_BUFSIZE; Index++ )
//  {
//    if ( DstBuffer[Index] != SrcBuffer[Index] )
//    {
//      xil_printf("   - destination buffer byte %d is different from the source buffer\n\r", Index);
//      xil_printf("   - master module data transfer failed\n\r");
//      return XST_FAILURE;
//    }
//  }
//  xil_printf("   - destination buffer's contents are same as the source buffer\n\r");
//  xil_printf("   - master module data transfer passed\n\n\r");

  return XST_SUCCESS;
}

void delay(int cycles)
{
	int i = 0;
	for (i=0;i<cycles;i++);
}

int Read_Status(void)
{
	return matrix_mul_ip_core_s_int_g_mReadSlaveReg1(_baseAddress, 0);
}
