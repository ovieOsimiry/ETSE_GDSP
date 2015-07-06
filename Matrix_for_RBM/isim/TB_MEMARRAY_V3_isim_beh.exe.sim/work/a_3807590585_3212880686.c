/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/FPGA/Internship Jobs/Codes/ETSE_GDSP/Matrix_for_RBM/MEMARRAY_V3.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3807590585_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned char t17;
    unsigned char t18;
    int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    int t29;
    int t30;

LAB0:    xsi_set_current_line(123, ng0);
    t1 = (t0 + 4424U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 13712);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(124, ng0);
    t3 = (t0 + 9104U);
    t4 = *((char **)t3);
    t3 = (t0 + 13808);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t4, 10U);
    xsi_driver_first_trans_delta(t3, 0U, 10U, 0LL);
    xsi_set_current_line(125, ng0);
    t9 = (5 - 1);
    t1 = (t0 + 27276);
    *((int *)t1) = 0;
    t3 = (t0 + 27280);
    *((int *)t3) = t9;
    t10 = 0;
    t11 = t9;

LAB5:    if (t10 <= t11)
        goto LAB6;

LAB8:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 10600U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t10 = (t9 - 1);
    t1 = (t0 + 27284);
    *((int *)t1) = 1;
    t4 = (t0 + 27288);
    *((int *)t4) = t10;
    t11 = 1;
    t12 = t10;

LAB10:    if (t11 <= t12)
        goto LAB11;

LAB13:    xsi_set_current_line(132, ng0);
    t1 = (t0 + 8464U);
    t3 = *((char **)t1);
    t1 = (t0 + 10600U);
    t4 = *((char **)t1);
    t9 = *((int *)t4);
    t10 = (t9 - 1);
    t11 = (t10 - 0);
    t14 = (t11 * 1);
    t15 = (10U * t14);
    t16 = (0 + t15);
    t1 = (t3 + t16);
    t5 = (t0 + 13936);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t24 = *((char **)t8);
    memcpy(t24, t1, 10U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(133, ng0);
    t1 = (t0 + 7984U);
    t3 = *((char **)t1);
    t1 = (t0 + 10600U);
    t4 = *((char **)t1);
    t9 = *((int *)t4);
    t10 = (t9 - 1);
    t11 = (t10 - 0);
    t14 = (t11 * 1);
    t15 = (5U * t14);
    t16 = (0 + t15);
    t1 = (t3 + t16);
    t5 = (t0 + 14000);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t24 = *((char **)t8);
    memcpy(t24, t1, 5U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(135, ng0);
    t1 = (t0 + 9424U);
    t3 = *((char **)t1);
    t1 = (t0 + 14064);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 3U);
    xsi_driver_first_trans_delta(t1, 0U, 3U, 0LL);
    xsi_set_current_line(136, ng0);
    t1 = (t0 + 8944U);
    t3 = *((char **)t1);
    t1 = (t0 + 14128);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 18U);
    xsi_driver_first_trans_delta(t1, 0U, 18U, 0LL);
    xsi_set_current_line(137, ng0);
    t1 = (t0 + 10480U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t10 = (t9 - 1);
    t1 = (t0 + 27292);
    *((int *)t1) = 1;
    t4 = (t0 + 27296);
    *((int *)t4) = t10;
    t11 = 1;
    t12 = t10;

LAB15:    if (t11 <= t12)
        goto LAB16;

LAB18:    xsi_set_current_line(141, ng0);
    t1 = (t0 + 7664U);
    t3 = *((char **)t1);
    t1 = (t0 + 10480U);
    t4 = *((char **)t1);
    t9 = *((int *)t4);
    t10 = (t9 - 1);
    t11 = (t10 - 0);
    t14 = (t11 * 1);
    t15 = (18U * t14);
    t16 = (0 + t15);
    t1 = (t3 + t16);
    t5 = (t0 + 14192);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t24 = *((char **)t8);
    memcpy(t24, t1, 18U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(142, ng0);
    t1 = (t0 + 7344U);
    t3 = *((char **)t1);
    t1 = (t0 + 10480U);
    t4 = *((char **)t1);
    t9 = *((int *)t4);
    t10 = (t9 - 1);
    t11 = (t10 - 0);
    t14 = (t11 * 1);
    t15 = (3U * t14);
    t16 = (0 + t15);
    t1 = (t3 + t16);
    t5 = (t0 + 14256);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t24 = *((char **)t8);
    memcpy(t24, t1, 3U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB6:    xsi_set_current_line(126, ng0);
    t4 = (t0 + 8784U);
    t5 = *((char **)t4);
    t4 = (t0 + 27276);
    t12 = *((int *)t4);
    t13 = (t12 - 4);
    t14 = (t13 * -1);
    xsi_vhdl_check_range_of_index(4, 0, -1, *((int *)t4));
    t15 = (1U * t14);
    t16 = (0 + t15);
    t6 = (t5 + t16);
    t2 = *((unsigned char *)t6);
    t7 = (t0 + 9584U);
    t8 = *((char **)t7);
    t17 = *((unsigned char *)t8);
    t18 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t2, t17);
    t7 = (t0 + 27276);
    t19 = *((int *)t7);
    t20 = (t19 - 0);
    t21 = (t20 * 1);
    t22 = (1 * t21);
    t23 = (0U + t22);
    t24 = (t0 + 13872);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = t18;
    xsi_driver_first_trans_delta(t24, t23, 1, 0LL);

LAB7:    t1 = (t0 + 27276);
    t10 = *((int *)t1);
    t3 = (t0 + 27280);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB8;

LAB9:    t9 = (t10 + 1);
    t10 = t9;
    t4 = (t0 + 27276);
    *((int *)t4) = t10;
    goto LAB5;

LAB11:    xsi_set_current_line(129, ng0);
    t5 = (t0 + 7984U);
    t6 = *((char **)t5);
    t5 = (t0 + 27284);
    t13 = *((int *)t5);
    t19 = (t13 - 1);
    t20 = (t19 - 0);
    t14 = (t20 * 1);
    xsi_vhdl_check_range_of_index(0, 8, 1, t19);
    t15 = (5U * t14);
    t16 = (0 + t15);
    t7 = (t6 + t16);
    t8 = (t0 + 27284);
    t29 = *((int *)t8);
    t30 = (t29 - 0);
    t21 = (t30 * 1);
    t22 = (5U * t21);
    t23 = (0U + t22);
    t24 = (t0 + 13872);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t7, 5U);
    xsi_driver_first_trans_delta(t24, t23, 5U, 0LL);
    xsi_set_current_line(130, ng0);
    t1 = (t0 + 8464U);
    t3 = *((char **)t1);
    t1 = (t0 + 27284);
    t9 = *((int *)t1);
    t10 = (t9 - 1);
    t13 = (t10 - 0);
    t14 = (t13 * 1);
    xsi_vhdl_check_range_of_index(0, 8, 1, t10);
    t15 = (10U * t14);
    t16 = (0 + t15);
    t4 = (t3 + t16);
    t5 = (t0 + 27284);
    t19 = *((int *)t5);
    t20 = (t19 - 0);
    t21 = (t20 * 1);
    t22 = (10U * t21);
    t23 = (0U + t22);
    t6 = (t0 + 13808);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t24 = (t8 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t4, 10U);
    xsi_driver_first_trans_delta(t6, t23, 10U, 0LL);

LAB12:    t1 = (t0 + 27284);
    t11 = *((int *)t1);
    t3 = (t0 + 27288);
    t12 = *((int *)t3);
    if (t11 == t12)
        goto LAB13;

LAB14:    t9 = (t11 + 1);
    t11 = t9;
    t4 = (t0 + 27284);
    *((int *)t4) = t11;
    goto LAB10;

LAB16:    xsi_set_current_line(138, ng0);
    t5 = (t0 + 7664U);
    t6 = *((char **)t5);
    t5 = (t0 + 27292);
    t13 = *((int *)t5);
    t19 = (t13 - 1);
    t20 = (t19 - 0);
    t14 = (t20 * 1);
    xsi_vhdl_check_range_of_index(0, 1, 1, t19);
    t15 = (18U * t14);
    t16 = (0 + t15);
    t7 = (t6 + t16);
    t8 = (t0 + 27292);
    t29 = *((int *)t8);
    t30 = (t29 - 0);
    t21 = (t30 * 1);
    t22 = (18U * t21);
    t23 = (0U + t22);
    t24 = (t0 + 14128);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t7, 18U);
    xsi_driver_first_trans_delta(t24, t23, 18U, 0LL);
    xsi_set_current_line(139, ng0);
    t1 = (t0 + 7344U);
    t3 = *((char **)t1);
    t1 = (t0 + 27292);
    t9 = *((int *)t1);
    t10 = (t9 - 1);
    t13 = (t10 - 0);
    t14 = (t13 * 1);
    xsi_vhdl_check_range_of_index(0, 1, 1, t10);
    t15 = (3U * t14);
    t16 = (0 + t15);
    t4 = (t3 + t16);
    t5 = (t0 + 27292);
    t19 = *((int *)t5);
    t20 = (t19 - 0);
    t21 = (t20 * 1);
    t22 = (3U * t21);
    t23 = (0U + t22);
    t6 = (t0 + 14064);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t24 = (t8 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t4, 3U);
    xsi_driver_first_trans_delta(t6, t23, 3U, 0LL);

LAB17:    t1 = (t0 + 27292);
    t11 = *((int *)t1);
    t3 = (t0 + 27296);
    t12 = *((int *)t3);
    if (t11 == t12)
        goto LAB18;

LAB19:    t9 = (t11 + 1);
    t11 = t9;
    t4 = (t0 + 27292);
    *((int *)t4) = t11;
    goto LAB15;

}

static void work_a_3807590585_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    int t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(232, ng0);

LAB3:    t1 = (t0 + 7184U);
    t2 = *((char **)t1);
    t3 = (48 - 1);
    t4 = (18 - 1);
    t5 = (t3 - t4);
    t6 = (t5 * 1U);
    t7 = (5 - 1);
    t8 = (t7 - 0);
    t9 = (t8 * 1);
    t10 = (48U * t9);
    t11 = (0 + t10);
    t12 = (t11 + t6);
    t1 = (t2 + t12);
    t13 = (t0 + 14320);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t1, 18U);
    xsi_driver_first_trans_fast_port(t13);

LAB2:    t18 = (t0 + 13728);
    *((int *)t18) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3807590585_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3807590585_3212880686_p_0,(void *)work_a_3807590585_3212880686_p_1};
	xsi_register_didat("work_a_3807590585_3212880686", "isim/TB_MEMARRAY_V3_isim_beh.exe.sim/work/a_3807590585_3212880686.didat");
	xsi_register_executes(pe);
}
