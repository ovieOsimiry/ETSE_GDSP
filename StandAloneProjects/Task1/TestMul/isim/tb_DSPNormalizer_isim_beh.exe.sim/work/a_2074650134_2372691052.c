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
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;
static const char *ng2 = "C:/FPGA/Internship Jobs/Codes/Task1/TestIPCoreGenerator/TestMul/tb_DSPNormalizer.vhd";
extern char *STD_TEXTIO;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
int ieee_p_1242562249_sub_2271993008_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_2563015576_1035706684(char *, char *, int , int );


char *work_a_2074650134_2372691052_sub_3797534189_4163069965(char *t1, char *t2, double t3, double t4)
{
    char t5[128];
    char t6[24];
    char t7[16];
    char t14[24];
    char t20[16];
    char *t0;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    double t21;
    int t22;
    unsigned char t23;
    unsigned char t24;
    double t25;
    double t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    int t31;
    int t32;
    unsigned int t33;

LAB0:    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 17;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t10 = (0 - 17);
    t11 = (t10 * -1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t5 + 4U);
    t12 = ((IEEE_P_2592010699) + 4024);
    t13 = (t9 + 88U);
    *((char **)t13) = t12;
    t15 = (t9 + 56U);
    *((char **)t15) = t14;
    xsi_type_set_default_value(t12, t14, t7);
    t16 = (t9 + 64U);
    *((char **)t16) = t7;
    t17 = (t9 + 80U);
    *((unsigned int *)t17) = 18U;
    t18 = (t6 + 4U);
    *((double *)t18) = t3;
    t19 = (t6 + 12U);
    *((double *)t19) = t4;
    t21 = (t3 * t4);
    t23 = (t21 >= 0);
    if (t23 == 1)
        goto LAB2;

LAB3:    t26 = (t21 - 0.50000000000000000);
    t22 = ((int)(t26));

LAB4:    t27 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t20, t22, 18);
    t28 = (t9 + 56U);
    t29 = *((char **)t28);
    t28 = (t29 + 0);
    t30 = (t20 + 12U);
    t11 = *((unsigned int *)t30);
    t11 = (t11 * 1U);
    memcpy(t28, t27, t11);
    t8 = (t9 + 56U);
    t12 = *((char **)t8);
    t8 = (t7 + 12U);
    t11 = *((unsigned int *)t8);
    t11 = (t11 * 1U);
    t0 = xsi_get_transient_memory(t11);
    memcpy(t0, t12, t11);
    t13 = (t7 + 0U);
    t10 = *((int *)t13);
    t15 = (t7 + 4U);
    t22 = *((int *)t15);
    t16 = (t7 + 8U);
    t31 = *((int *)t16);
    t17 = (t2 + 0U);
    t27 = (t17 + 0U);
    *((int *)t27) = t10;
    t27 = (t17 + 4U);
    *((int *)t27) = t22;
    t27 = (t17 + 8U);
    *((int *)t27) = t31;
    t32 = (t22 - t10);
    t33 = (t32 * t31);
    t33 = (t33 + 1);
    t27 = (t17 + 12U);
    *((unsigned int *)t27) = t33;

LAB1:    return t0;
LAB2:    t24 = (t21 >= 2147483647);
    if (t24 == 1)
        goto LAB5;

LAB6:    t25 = (t21 + 0.50000000000000000);
    t22 = ((int)(t25));
    goto LAB4;

LAB5:    t22 = 2147483647;
    goto LAB4;

LAB7:;
}

static void work_a_2074650134_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 5280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(94, ng2);
    t2 = (t0 + 7496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(95, ng2);
    t2 = (t0 + 3568U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 5088);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(96, ng2);
    t2 = (t0 + 7496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(97, ng2);
    t2 = (t0 + 3568U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 5088);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_2074650134_2372691052_p_1(char *t0)
{
    char t6[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    int t11;
    char *t12;
    int t13;
    int t14;
    double t15;
    double t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(103, ng2);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = (47 - 34);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 34;
    t8 = (t7 + 4U);
    *((int *)t8) = 15;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (15 - 34);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t1, t6);
    t8 = (t0 + 3688U);
    t12 = *((char **)t8);
    t13 = *((int *)t12);
    t14 = (-(t13));
    t15 = xsi_vhdl_pow_double(2.0000000000000000, t14);
    t16 = ((((double)(t11))) * t15);
    t8 = (t0 + 7560);
    t17 = (t8 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((double *)t20) = t16;
    xsi_driver_first_trans_fast(t8);

LAB2:    t21 = (t0 + 7336);
    *((int *)t21) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2074650134_2372691052_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    int t6;
    int t7;
    double t8;
    double t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(105, ng2);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 13128U);
    t3 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t2, t1);
    t4 = (t0 + 3688U);
    t5 = *((char **)t4);
    t6 = *((int *)t5);
    t7 = (-(t6));
    t8 = xsi_vhdl_pow_double(2.0000000000000000, t7);
    t9 = ((((double)(t3))) * t8);
    t4 = (t0 + 7624);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((double *)t13) = t9;
    xsi_driver_first_trans_fast(t4);

LAB2:    t14 = (t0 + 7352);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2074650134_2372691052_p_3(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    int t6;
    int t7;
    double t8;
    double t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(107, ng2);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 13160U);
    t3 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t2, t1);
    t4 = (t0 + 3688U);
    t5 = *((char **)t4);
    t6 = *((int *)t5);
    t7 = (-(t6));
    t8 = xsi_vhdl_pow_double(2.0000000000000000, t7);
    t9 = ((((double)(t3))) * t8);
    t4 = (t0 + 7688);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((double *)t13) = t9;
    xsi_driver_first_trans_fast(t4);

LAB2:    t14 = (t0 + 7368);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2074650134_2372691052_p_4(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    int t6;
    double t7;
    double t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(109, ng2);

LAB3:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 13064U);
    t3 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t2, t1);
    t4 = (t0 + 3688U);
    t5 = *((char **)t4);
    t6 = *((int *)t5);
    t7 = xsi_vhdl_pow_double(2.0000000000000000, t6);
    t8 = ((((double)(t3))) / t7);
    t4 = (t0 + 7752);
    t9 = (t4 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((double *)t12) = t8;
    xsi_driver_first_trans_fast(t4);

LAB2:    t13 = (t0 + 7384);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2074650134_2372691052_p_5(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    int t6;
    double t7;
    double t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(110, ng2);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 13080U);
    t3 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t2, t1);
    t4 = (t0 + 3688U);
    t5 = *((char **)t4);
    t6 = *((int *)t5);
    t7 = xsi_vhdl_pow_double(2.0000000000000000, t6);
    t8 = ((((double)(t3))) / t7);
    t4 = (t0 + 7816);
    t9 = (t4 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((double *)t12) = t8;
    xsi_driver_first_trans_fast(t4);

LAB2:    t13 = (t0 + 7400);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2074650134_2372691052_p_6(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    int t6;
    double t7;
    double t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(111, ng2);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 13096U);
    t3 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t2, t1);
    t4 = (t0 + 3688U);
    t5 = *((char **)t4);
    t6 = *((int *)t5);
    t7 = xsi_vhdl_pow_double(2.0000000000000000, t6);
    t8 = ((((double)(t3))) / t7);
    t4 = (t0 + 7880);
    t9 = (t4 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((double *)t12) = t8;
    xsi_driver_first_trans_fast(t4);

LAB2:    t13 = (t0 + 7416);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2074650134_2372691052_p_7(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    unsigned char t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    int t16;
    int t17;
    int t18;
    int t19;
    double t20;
    char *t21;
    char *t22;
    int t23;
    double t24;
    char *t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int64 t32;

LAB0:    t1 = (t0 + 7016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(125, ng2);
    t2 = (t0 + 4376U);
    t3 = (t0 + 13688);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 70;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (70 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    std_textio_file_open1(t2, t3, t5, (unsigned char)0);
    xsi_set_current_line(128, ng2);

LAB4:    t2 = (t0 + 4376U);
    t10 = std_textio_endfile(t2);
    t11 = (!(t10));
    if (t11 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(135, ng2);
    t2 = (t0 + 4376U);
    std_textio_file_close(t2);
    xsi_set_current_line(137, ng2);
    t2 = (t0 + 13758);
    *((int *)t2) = 1;
    t3 = (t0 + 13762);
    *((int *)t3) = 5;
    t8 = 1;
    t12 = 5;

LAB8:    if (t8 <= t12)
        goto LAB9;

LAB11:    xsi_set_current_line(147, ng2);

LAB26:    *((char **)t1) = &&LAB27;

LAB1:    return;
LAB5:    xsi_set_current_line(129, ng2);
    t3 = (t0 + 3928U);
    t4 = *((char **)t3);
    t8 = *((int *)t4);
    t12 = (t8 + 1);
    t3 = (t0 + 3928U);
    t6 = *((char **)t3);
    t3 = (t6 + 0);
    *((int *)t3) = t12;
    xsi_set_current_line(130, ng2);
    t2 = (t0 + 6824);
    t3 = (t0 + 4376U);
    t4 = (t0 + 4624U);
    std_textio_readline(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(132, ng2);
    t2 = (t0 + 6824);
    t3 = (t0 + 4624U);
    t4 = (t0 + 4048U);
    t6 = *((char **)t4);
    t4 = (t0 + 3928U);
    t7 = *((char **)t4);
    t8 = *((int *)t7);
    t12 = (t8 - 1);
    t9 = (t12 * 1);
    xsi_vhdl_check_range_of_index(1, 10, 1, t8);
    t13 = (8U * t9);
    t14 = (0 + t13);
    t4 = (t6 + t14);
    std_textio_read12(STD_TEXTIO, t2, t3, t4);
    goto LAB4;

LAB6:;
LAB9:    xsi_set_current_line(138, ng2);
    t4 = (t0 + 4048U);
    t6 = *((char **)t4);
    t4 = (t0 + 13758);
    t7 = (t0 + 3808U);
    t15 = *((char **)t7);
    t16 = *((int *)t15);
    t17 = *((int *)t4);
    t18 = (t17 + t16);
    t19 = (t18 - 1);
    t9 = (t19 * 1);
    xsi_vhdl_check_range_of_index(1, 10, 1, t18);
    t13 = (8U * t9);
    t14 = (0 + t13);
    t7 = (t6 + t14);
    t20 = *((double *)t7);
    t21 = (t0 + 3688U);
    t22 = *((char **)t21);
    t23 = *((int *)t22);
    t24 = xsi_vhdl_pow_double(2.0000000000000000, t23);
    t21 = work_a_2074650134_2372691052_sub_3797534189_4163069965(t0, t5, t20, t24);
    t25 = (t5 + 12U);
    t26 = *((unsigned int *)t25);
    t26 = (t26 * 1U);
    t10 = (18U != t26);
    if (t10 == 1)
        goto LAB12;

LAB13:    t27 = (t0 + 7944);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t21, 18U);
    xsi_driver_first_trans_fast(t27);
    xsi_set_current_line(139, ng2);
    t2 = (t0 + 3808U);
    t3 = *((char **)t2);
    t16 = *((int *)t3);
    t17 = (t16 + 1);
    t2 = (t0 + 3808U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = t17;
    xsi_set_current_line(140, ng2);
    t2 = (t0 + 4048U);
    t3 = *((char **)t2);
    t2 = (t0 + 13758);
    t4 = (t0 + 3808U);
    t6 = *((char **)t4);
    t16 = *((int *)t6);
    t17 = *((int *)t2);
    t18 = (t17 + t16);
    t19 = (t18 - 1);
    t9 = (t19 * 1);
    xsi_vhdl_check_range_of_index(1, 10, 1, t18);
    t13 = (8U * t9);
    t14 = (0 + t13);
    t4 = (t3 + t14);
    t20 = *((double *)t4);
    t7 = (t0 + 3688U);
    t15 = *((char **)t7);
    t23 = *((int *)t15);
    t24 = xsi_vhdl_pow_double(2.0000000000000000, t23);
    t7 = work_a_2074650134_2372691052_sub_3797534189_4163069965(t0, t5, t20, t24);
    t21 = (t5 + 12U);
    t26 = *((unsigned int *)t21);
    t26 = (t26 * 1U);
    t10 = (18U != t26);
    if (t10 == 1)
        goto LAB14;

LAB15:    t22 = (t0 + 8008);
    t25 = (t22 + 56U);
    t27 = *((char **)t25);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t7, 18U);
    xsi_driver_first_trans_fast(t22);
    xsi_set_current_line(141, ng2);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t5, 5, 3);
    t3 = (t0 + 8072);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t15 = *((char **)t7);
    memcpy(t15, t2, 3U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(142, ng2);
    t2 = (t0 + 13758);
    t16 = *((int *)t2);
    t10 = (t16 == 5);
    if (t10 != 0)
        goto LAB16;

LAB18:
LAB17:    xsi_set_current_line(145, ng2);
    t2 = (t0 + 3568U);
    t3 = *((char **)t2);
    t32 = *((int64 *)t3);
    t2 = (t0 + 6824);
    xsi_process_wait(t2, t32);

LAB21:    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB10:    t2 = (t0 + 13758);
    t8 = *((int *)t2);
    t3 = (t0 + 13762);
    t12 = *((int *)t3);
    if (t8 == t12)
        goto LAB11;

LAB23:    t16 = (t8 + 1);
    t8 = t16;
    t4 = (t0 + 13758);
    *((int *)t4) = t8;
    goto LAB8;

LAB12:    xsi_size_not_matching(18U, t26, 0);
    goto LAB13;

LAB14:    xsi_size_not_matching(18U, t26, 0);
    goto LAB15;

LAB16:    xsi_set_current_line(143, ng2);
    t3 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t5, 2, 3);
    t4 = (t0 + 8072);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t15 = (t7 + 56U);
    t21 = *((char **)t15);
    memcpy(t21, t3, 3U);
    xsi_driver_first_trans_fast(t4);
    goto LAB17;

LAB19:    goto LAB10;

LAB20:    goto LAB19;

LAB22:    goto LAB20;

LAB24:    xsi_set_current_line(196, ng2);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    goto LAB2;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

}


extern void work_a_2074650134_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2074650134_2372691052_p_0,(void *)work_a_2074650134_2372691052_p_1,(void *)work_a_2074650134_2372691052_p_2,(void *)work_a_2074650134_2372691052_p_3,(void *)work_a_2074650134_2372691052_p_4,(void *)work_a_2074650134_2372691052_p_5,(void *)work_a_2074650134_2372691052_p_6,(void *)work_a_2074650134_2372691052_p_7};
	static char *se[] = {(void *)work_a_2074650134_2372691052_sub_3797534189_4163069965};
	xsi_register_didat("work_a_2074650134_2372691052", "isim/tb_DSPNormalizer_isim_beh.exe.sim/work/a_2074650134_2372691052.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
