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
static const char *ng0 = "C:/FPGA/Internship Jobs/Codes/ETSE_GDSP/Matrix_for_RBM/BRAM_WRAPPER_V2.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
unsigned char ieee_p_1242562249_sub_1781543830_1035706684(char *, char *, char *, int );
char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_1919437128_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3780288823_3212880686_p_0(char *t0)
{
    char t12[16];
    char t19[16];
    char t20[16];
    char t21[16];
    char t25[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t13;
    char *t14;
    int t15;
    unsigned int t16;
    int t17;
    char *t18;
    int t22;
    unsigned int t23;
    unsigned int t24;
    char *t26;
    int t27;
    unsigned int t28;
    char *t29;
    int t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5632);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1832U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t8 = (10 - 2);
    t9 = (9 - t8);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t3 + t11);
    t4 = (t19 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 8;
    t7 = (t4 + 4U);
    *((int *)t7) = 0;
    t7 = (t4 + 8U);
    *((int *)t7) = -1;
    t15 = (0 - 8);
    t16 = (t15 * -1);
    t16 = (t16 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t16;
    t7 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t12, t1, t19, 2);
    t17 = (5 - 1);
    t2 = ieee_p_1242562249_sub_1781543830_1035706684(IEEE_P_1242562249, t7, t12, t17);
    if (t2 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t8 = (10 - 2);
    t9 = (9 - t8);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t3 + t11);
    t4 = (t19 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 8;
    t7 = (t4 + 4U);
    *((int *)t7) = 0;
    t7 = (t4 + 8U);
    *((int *)t7) = -1;
    t15 = (0 - 8);
    t16 = (t15 * -1);
    t16 = (t16 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t16;
    t7 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t12, t1, t19, 2);
    t17 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t7, t12);
    t13 = (t0 + 4208U);
    t14 = *((char **)t13);
    t13 = (t14 + 0);
    *((int *)t13) = t17;

LAB9:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t8 = (10 - 2);
    t9 = (9 - t8);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t3 + t11);
    t4 = (t19 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 8;
    t7 = (t4 + 4U);
    *((int *)t7) = 0;
    t7 = (t4 + 8U);
    *((int *)t7) = -1;
    t15 = (0 - 8);
    t16 = (t15 * -1);
    t16 = (t16 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t16;
    t7 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t12, t1, t19, 2);
    t17 = (5 - 1);
    t2 = ieee_p_1242562249_sub_1781543830_1035706684(IEEE_P_1242562249, t7, t12, t17);
    if (t2 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t8 = (10 - 2);
    t9 = (9 - t8);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t3 + t11);
    t4 = (t19 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 8;
    t7 = (t4 + 4U);
    *((int *)t7) = 0;
    t7 = (t4 + 8U);
    *((int *)t7) = -1;
    t15 = (0 - 8);
    t16 = (t15 * -1);
    t16 = (t16 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t16;
    t7 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t12, t1, t19, 2);
    t17 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t7, t12);
    t13 = (t0 + 4328U);
    t14 = *((char **)t13);
    t13 = (t14 + 0);
    *((int *)t13) = t17;

LAB12:
LAB6:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 5712);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t2);
    t1 = (t0 + 5776);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t5;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 5840);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t1 = (t0 + 5904);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t3, 18U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t8 = (10 - 1);
    t15 = (t8 - 9);
    t9 = (t15 * -1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t3 + t11);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 4208U);
    t7 = *((char **)t4);
    t17 = *((int *)t7);
    t22 = (10 - 1);
    t4 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t12, t17, t22);
    t14 = ((IEEE_P_2592010699) + 4024);
    t13 = xsi_base_array_concat(t13, t19, t14, (char)99, t2, (char)97, t4, t12, (char)101);
    t18 = (t12 + 12U);
    t16 = *((unsigned int *)t18);
    t16 = (t16 * 1U);
    t23 = (1U + t16);
    t5 = (10U != t23);
    if (t5 == 1)
        goto LAB14;

LAB15:    t26 = (t0 + 5968);
    t29 = (t26 + 56U);
    t31 = *((char **)t29);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t13, 10U);
    xsi_driver_first_trans_fast(t26);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t8 = (10 - 1);
    t15 = (t8 - 9);
    t9 = (t15 * -1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t3 + t11);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 4328U);
    t7 = *((char **)t4);
    t17 = *((int *)t7);
    t22 = (10 - 1);
    t4 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t12, t17, t22);
    t14 = ((IEEE_P_2592010699) + 4024);
    t13 = xsi_base_array_concat(t13, t19, t14, (char)99, t2, (char)97, t4, t12, (char)101);
    t18 = (t12 + 12U);
    t16 = *((unsigned int *)t18);
    t16 = (t16 * 1U);
    t23 = (1U + t16);
    t5 = (10U != t23);
    if (t5 == 1)
        goto LAB16;

LAB17:    t26 = (t0 + 6032);
    t29 = (t26 + 56U);
    t31 = *((char **)t29);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t13, 10U);
    xsi_driver_first_trans_fast(t26);
    goto LAB3;

LAB5:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 1192U);
    t7 = *((char **)t3);
    t8 = (10 - 2);
    t9 = (9 - t8);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t3 = (t7 + t11);
    t13 = (t12 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 8;
    t14 = (t13 + 4U);
    *((int *)t14) = 0;
    t14 = (t13 + 8U);
    *((int *)t14) = -1;
    t15 = (0 - 8);
    t16 = (t15 * -1);
    t16 = (t16 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t16;
    t17 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t3, t12);
    t14 = (t0 + 4208U);
    t18 = *((char **)t14);
    t14 = (t18 + 0);
    *((int *)t14) = t17;
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t8 = (10 - 2);
    t9 = (9 - t8);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t3 + t11);
    t4 = (t12 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 8;
    t7 = (t4 + 4U);
    *((int *)t7) = 0;
    t7 = (t4 + 8U);
    *((int *)t7) = -1;
    t15 = (0 - 8);
    t16 = (t15 * -1);
    t16 = (t16 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t16;
    t17 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t1, t12);
    t7 = (t0 + 4328U);
    t13 = *((char **)t7);
    t7 = (t13 + 0);
    *((int *)t7) = t17;
    goto LAB6;

LAB8:    xsi_set_current_line(60, ng0);
    t13 = (t0 + 1192U);
    t14 = *((char **)t13);
    t22 = (10 - 2);
    t16 = (9 - t22);
    t23 = (t16 * 1U);
    t24 = (0 + t23);
    t13 = (t14 + t24);
    t18 = (t25 + 0U);
    t26 = (t18 + 0U);
    *((int *)t26) = 8;
    t26 = (t18 + 4U);
    *((int *)t26) = 0;
    t26 = (t18 + 8U);
    *((int *)t26) = -1;
    t27 = (0 - 8);
    t28 = (t27 * -1);
    t28 = (t28 + 1);
    t26 = (t18 + 12U);
    *((unsigned int *)t26) = t28;
    t26 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t21, t13, t25, 2);
    t29 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t20, t26, t21, 5);
    t30 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t29, t20);
    t31 = (t0 + 4208U);
    t32 = *((char **)t31);
    t31 = (t32 + 0);
    *((int *)t31) = t30;
    goto LAB9;

LAB11:    xsi_set_current_line(66, ng0);
    t13 = (t0 + 1512U);
    t14 = *((char **)t13);
    t22 = (10 - 2);
    t16 = (9 - t22);
    t23 = (t16 * 1U);
    t24 = (0 + t23);
    t13 = (t14 + t24);
    t18 = (t25 + 0U);
    t26 = (t18 + 0U);
    *((int *)t26) = 8;
    t26 = (t18 + 4U);
    *((int *)t26) = 0;
    t26 = (t18 + 8U);
    *((int *)t26) = -1;
    t27 = (0 - 8);
    t28 = (t27 * -1);
    t28 = (t28 + 1);
    t26 = (t18 + 12U);
    *((unsigned int *)t26) = t28;
    t26 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t21, t13, t25, 2);
    t29 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t20, t26, t21, 5);
    t30 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t29, t20);
    t31 = (t0 + 4328U);
    t32 = *((char **)t31);
    t31 = (t32 + 0);
    *((int *)t31) = t30;
    goto LAB12;

LAB14:    xsi_size_not_matching(10U, t23, 0);
    goto LAB15;

LAB16:    xsi_size_not_matching(10U, t23, 0);
    goto LAB17;

}


extern void work_a_3780288823_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3780288823_3212880686_p_0};
	xsi_register_didat("work_a_3780288823_3212880686", "isim/TB_MEMARRAY_V3_isim_beh.exe.sim/work/a_3780288823_3212880686.didat");
	xsi_register_executes(pe);
}
