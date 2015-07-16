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


static void work_a_0195739324_3212880686_p_0(char *t0)
{
    char t11[16];
    char t17[16];
    char t24[16];
    char t25[16];
    char t31[16];
    char *t1;
    unsigned char t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    int t22;
    unsigned char t23;
    char *t26;
    char *t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    char *t32;
    char *t33;
    int t34;
    unsigned int t35;
    char *t36;
    int t37;
    char *t38;
    char *t39;

LAB0:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5632);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 2152U);
    t4 = *((char **)t1);
    t2 = *((unsigned char *)t4);
    t3 = (t2 == (unsigned char)2);
    if (t3 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    t13 = (10 - 2);
    t14 = (9 - t13);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t1 = (t4 + t16);
    t5 = (t17 + 0U);
    t8 = (t5 + 0U);
    *((int *)t8) = 8;
    t8 = (t5 + 4U);
    *((int *)t8) = 0;
    t8 = (t5 + 8U);
    *((int *)t8) = -1;
    t20 = (0 - 8);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t8 = (t5 + 12U);
    *((unsigned int *)t8) = t21;
    t8 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t11, t1, t17, 1);
    t22 = (3 - 1);
    t2 = ieee_p_1242562249_sub_1781543830_1035706684(IEEE_P_1242562249, t8, t11, t22);
    if (t2 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    t13 = (10 - 2);
    t14 = (9 - t13);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t1 = (t4 + t16);
    t5 = (t17 + 0U);
    t8 = (t5 + 0U);
    *((int *)t8) = 8;
    t8 = (t5 + 4U);
    *((int *)t8) = 0;
    t8 = (t5 + 8U);
    *((int *)t8) = -1;
    t20 = (0 - 8);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t8 = (t5 + 12U);
    *((unsigned int *)t8) = t21;
    t8 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t11, t1, t17, 1);
    t22 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t8, t11);
    t12 = (t0 + 4208U);
    t18 = *((char **)t12);
    t12 = (t18 + 0);
    *((int *)t12) = t22;

LAB18:
LAB15:
LAB6:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 2152U);
    t4 = *((char **)t1);
    t2 = *((unsigned char *)t4);
    t3 = (t2 == (unsigned char)2);
    if (t3 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 1832U);
    t4 = *((char **)t1);
    t13 = (10 - 2);
    t14 = (9 - t13);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t1 = (t4 + t16);
    t5 = (t17 + 0U);
    t8 = (t5 + 0U);
    *((int *)t8) = 8;
    t8 = (t5 + 4U);
    *((int *)t8) = 0;
    t8 = (t5 + 8U);
    *((int *)t8) = -1;
    t20 = (0 - 8);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t8 = (t5 + 12U);
    *((unsigned int *)t8) = t21;
    t8 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t11, t1, t17, 1);
    t22 = (3 - 1);
    t2 = ieee_p_1242562249_sub_1781543830_1035706684(IEEE_P_1242562249, t8, t11, t22);
    if (t2 != 0)
        goto LAB23;

LAB25:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 1832U);
    t4 = *((char **)t1);
    t13 = (10 - 2);
    t14 = (9 - t13);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t1 = (t4 + t16);
    t5 = (t17 + 0U);
    t8 = (t5 + 0U);
    *((int *)t8) = 8;
    t8 = (t5 + 4U);
    *((int *)t8) = 0;
    t8 = (t5 + 8U);
    *((int *)t8) = -1;
    t20 = (0 - 8);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t8 = (t5 + 12U);
    *((unsigned int *)t8) = t21;
    t8 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t11, t1, t17, 1);
    t22 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t8, t11);
    t12 = (t0 + 4328U);
    t18 = *((char **)t12);
    t12 = (t18 + 0);
    *((int *)t12) = t22;

LAB24:
LAB21:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 2312U);
    t4 = *((char **)t1);
    t2 = *((unsigned char *)t4);
    t1 = (t0 + 5712);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t12 = (t8 + 56U);
    t18 = *((char **)t12);
    *((unsigned char *)t18) = t2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 2472U);
    t4 = *((char **)t1);
    t2 = *((unsigned char *)t4);
    t3 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t2);
    t1 = (t0 + 5776);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t12 = (t8 + 56U);
    t18 = *((char **)t12);
    *((unsigned char *)t18) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 2472U);
    t4 = *((char **)t1);
    t2 = *((unsigned char *)t4);
    t1 = (t0 + 5840);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t12 = (t8 + 56U);
    t18 = *((char **)t12);
    *((unsigned char *)t18) = t2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 1672U);
    t4 = *((char **)t1);
    t1 = (t0 + 5904);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t12 = (t8 + 56U);
    t18 = *((char **)t12);
    memcpy(t18, t4, 18U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    t13 = (10 - 1);
    t20 = (t13 - 9);
    t14 = (t20 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t1 = (t4 + t16);
    t2 = *((unsigned char *)t1);
    t5 = (t0 + 4208U);
    t8 = *((char **)t5);
    t22 = *((int *)t8);
    t28 = (10 - 1);
    t5 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t11, t22, t28);
    t18 = ((IEEE_P_2592010699) + 4024);
    t12 = xsi_base_array_concat(t12, t17, t18, (char)99, t2, (char)97, t5, t11, (char)101);
    t19 = (t11 + 12U);
    t21 = *((unsigned int *)t19);
    t21 = (t21 * 1U);
    t29 = (1U + t21);
    t3 = (10U != t29);
    if (t3 == 1)
        goto LAB26;

LAB27:    t26 = (t0 + 5968);
    t27 = (t26 + 56U);
    t32 = *((char **)t27);
    t33 = (t32 + 56U);
    t36 = *((char **)t33);
    memcpy(t36, t12, 10U);
    xsi_driver_first_trans_fast(t26);
    xsi_set_current_line(90, ng0);
    t1 = (t0 + 1832U);
    t4 = *((char **)t1);
    t13 = (10 - 1);
    t20 = (t13 - 9);
    t14 = (t20 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t1 = (t4 + t16);
    t2 = *((unsigned char *)t1);
    t5 = (t0 + 4328U);
    t8 = *((char **)t5);
    t22 = *((int *)t8);
    t28 = (10 - 1);
    t5 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t11, t22, t28);
    t18 = ((IEEE_P_2592010699) + 4024);
    t12 = xsi_base_array_concat(t12, t17, t18, (char)99, t2, (char)97, t5, t11, (char)101);
    t19 = (t11 + 12U);
    t21 = *((unsigned int *)t19);
    t21 = (t21 * 1U);
    t29 = (1U + t21);
    t3 = (10U != t29);
    if (t3 == 1)
        goto LAB28;

LAB29:    t26 = (t0 + 6032);
    t27 = (t26 + 56U);
    t32 = *((char **)t27);
    t33 = (t32 + 56U);
    t36 = *((char **)t33);
    memcpy(t36, t12, 10U);
    xsi_driver_first_trans_fast(t26);
    goto LAB3;

LAB5:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 1512U);
    t12 = *((char **)t4);
    t13 = (10 - 2);
    t14 = (9 - t13);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t4 = (t12 + t16);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 8;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - 8);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t11, t4, t17, 1);
    t22 = (3 - 1);
    t23 = ieee_p_1242562249_sub_1781543830_1035706684(IEEE_P_1242562249, t19, t11, t22);
    if (t23 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    t13 = (10 - 2);
    t14 = (9 - t13);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t1 = (t4 + t16);
    t5 = (t17 + 0U);
    t8 = (t5 + 0U);
    *((int *)t8) = 8;
    t8 = (t5 + 4U);
    *((int *)t8) = 0;
    t8 = (t5 + 8U);
    *((int *)t8) = -1;
    t20 = (0 - 8);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t8 = (t5 + 12U);
    *((unsigned int *)t8) = t21;
    t8 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t11, t1, t17, 1);
    t22 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t8, t11);
    t12 = (t0 + 4208U);
    t18 = *((char **)t12);
    t12 = (t18 + 0);
    *((int *)t12) = t22;

LAB12:    goto LAB6;

LAB8:    t4 = (t0 + 1352U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB10;

LAB11:    xsi_set_current_line(59, ng0);
    t26 = (t0 + 1512U);
    t27 = *((char **)t26);
    t28 = (10 - 2);
    t21 = (9 - t28);
    t29 = (t21 * 1U);
    t30 = (0 + t29);
    t26 = (t27 + t30);
    t32 = (t31 + 0U);
    t33 = (t32 + 0U);
    *((int *)t33) = 8;
    t33 = (t32 + 4U);
    *((int *)t33) = 0;
    t33 = (t32 + 8U);
    *((int *)t33) = -1;
    t34 = (0 - 8);
    t35 = (t34 * -1);
    t35 = (t35 + 1);
    t33 = (t32 + 12U);
    *((unsigned int *)t33) = t35;
    t33 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t25, t26, t31, 1);
    t36 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t24, t33, t25, 3);
    t37 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t36, t24);
    t38 = (t0 + 4208U);
    t39 = *((char **)t38);
    t38 = (t39 + 0);
    *((int *)t38) = t37;
    goto LAB12;

LAB14:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1512U);
    t5 = *((char **)t1);
    t13 = (10 - 2);
    t14 = (9 - t13);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t1 = (t5 + t16);
    t8 = (t11 + 0U);
    t12 = (t8 + 0U);
    *((int *)t12) = 8;
    t12 = (t8 + 4U);
    *((int *)t12) = 0;
    t12 = (t8 + 8U);
    *((int *)t12) = -1;
    t20 = (0 - 8);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t12 = (t8 + 12U);
    *((unsigned int *)t12) = t21;
    t22 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t1, t11);
    t12 = (t0 + 4208U);
    t18 = *((char **)t12);
    t12 = (t18 + 0);
    *((int *)t12) = t22;
    goto LAB15;

LAB17:    xsi_set_current_line(68, ng0);
    t12 = (t0 + 1512U);
    t18 = *((char **)t12);
    t28 = (10 - 2);
    t21 = (9 - t28);
    t29 = (t21 * 1U);
    t30 = (0 + t29);
    t12 = (t18 + t30);
    t19 = (t31 + 0U);
    t26 = (t19 + 0U);
    *((int *)t26) = 8;
    t26 = (t19 + 4U);
    *((int *)t26) = 0;
    t26 = (t19 + 8U);
    *((int *)t26) = -1;
    t34 = (0 - 8);
    t35 = (t34 * -1);
    t35 = (t35 + 1);
    t26 = (t19 + 12U);
    *((unsigned int *)t26) = t35;
    t26 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t25, t12, t31, 1);
    t27 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t24, t26, t25, 3);
    t37 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t27, t24);
    t32 = (t0 + 4208U);
    t33 = *((char **)t32);
    t32 = (t33 + 0);
    *((int *)t32) = t37;
    goto LAB18;

LAB20:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1832U);
    t5 = *((char **)t1);
    t13 = (10 - 2);
    t14 = (9 - t13);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t1 = (t5 + t16);
    t8 = (t11 + 0U);
    t12 = (t8 + 0U);
    *((int *)t12) = 8;
    t12 = (t8 + 4U);
    *((int *)t12) = 0;
    t12 = (t8 + 8U);
    *((int *)t12) = -1;
    t20 = (0 - 8);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t12 = (t8 + 12U);
    *((unsigned int *)t12) = t21;
    t22 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t1, t11);
    t12 = (t0 + 4328U);
    t18 = *((char **)t12);
    t12 = (t18 + 0);
    *((int *)t12) = t22;
    goto LAB21;

LAB23:    xsi_set_current_line(79, ng0);
    t12 = (t0 + 1832U);
    t18 = *((char **)t12);
    t28 = (10 - 2);
    t21 = (9 - t28);
    t29 = (t21 * 1U);
    t30 = (0 + t29);
    t12 = (t18 + t30);
    t19 = (t31 + 0U);
    t26 = (t19 + 0U);
    *((int *)t26) = 8;
    t26 = (t19 + 4U);
    *((int *)t26) = 0;
    t26 = (t19 + 8U);
    *((int *)t26) = -1;
    t34 = (0 - 8);
    t35 = (t34 * -1);
    t35 = (t35 + 1);
    t26 = (t19 + 12U);
    *((unsigned int *)t26) = t35;
    t26 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t25, t12, t31, 1);
    t27 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t24, t26, t25, 3);
    t37 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t27, t24);
    t32 = (t0 + 4328U);
    t33 = *((char **)t32);
    t32 = (t33 + 0);
    *((int *)t32) = t37;
    goto LAB24;

LAB26:    xsi_size_not_matching(10U, t29, 0);
    goto LAB27;

LAB28:    xsi_size_not_matching(10U, t29, 0);
    goto LAB29;

}


extern void work_a_0195739324_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0195739324_3212880686_p_0};
	xsi_register_didat("work_a_0195739324_3212880686", "isim/TB_MEMARRAY_V4_isim_beh.exe.sim/work/a_0195739324_3212880686.didat");
	xsi_register_executes(pe);
}
