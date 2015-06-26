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
static const char *ng2 = "C:/FPGA/Internship Jobs/Codes/ETSE_GDSP/StandAloneProjects/Task2/Normalizer/tb_DSPNormalizer.vhd";
extern char *STD_TEXTIO;
extern char *WORK_P_4054474977;
extern char *STD_STANDARD;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
int ieee_p_1242562249_sub_2271993008_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_2563015576_1035706684(char *, char *, int , int );
char *ieee_p_2592010699_sub_3293060193_503743352(char *, char *, char *, char *, unsigned char );
char *ieee_p_2592010699_sub_393209765_503743352(char *, char *, char *, char *);
char *work_p_4054474977_sub_3316299037_1800819092(char *, char *, int );
char *work_p_4054474977_sub_3720513933_1800819092(char *, char *, double , int );


char *work_a_2074650134_2372691052_sub_3047817777_4163069965(char *t1, char *t2, double t3, double t4)
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

LAB0:    t1 = (t0 + 6936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(97, ng2);
    t2 = (t0 + 9416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(98, ng2);
    t2 = (t0 + 3728U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 6744);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(99, ng2);
    t2 = (t0 + 9416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(100, ng2);
    t2 = (t0 + 3728U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 6744);
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

LAB0:    xsi_set_current_line(106, ng2);

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
    *((int *)t8) = 17;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (17 - 34);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t1, t6);
    t8 = (t0 + 3848U);
    t12 = *((char **)t8);
    t13 = *((int *)t12);
    t14 = (-(t13));
    t15 = xsi_vhdl_pow_double(2.0000000000000000, t14);
    t16 = ((((double)(t11))) * t15);
    t8 = (t0 + 9480);
    t17 = (t8 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((double *)t20) = t16;
    xsi_driver_first_trans_fast(t8);

LAB2:    t21 = (t0 + 9240);
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

LAB0:    xsi_set_current_line(108, ng2);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 17364U);
    t3 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t2, t1);
    t4 = (t0 + 3848U);
    t5 = *((char **)t4);
    t6 = *((int *)t5);
    t7 = (-(t6));
    t8 = xsi_vhdl_pow_double(2.0000000000000000, t7);
    t9 = ((((double)(t3))) * t8);
    t4 = (t0 + 9544);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((double *)t13) = t9;
    xsi_driver_first_trans_fast(t4);

LAB2:    t14 = (t0 + 9256);
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

LAB0:    xsi_set_current_line(110, ng2);

LAB3:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 17396U);
    t3 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t2, t1);
    t4 = (t0 + 3848U);
    t5 = *((char **)t4);
    t6 = *((int *)t5);
    t7 = (-(t6));
    t8 = xsi_vhdl_pow_double(2.0000000000000000, t7);
    t9 = ((((double)(t3))) * t8);
    t4 = (t0 + 9608);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((double *)t13) = t9;
    xsi_driver_first_trans_fast(t4);

LAB2:    t14 = (t0 + 9272);
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

LAB0:    xsi_set_current_line(112, ng2);

LAB3:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 17300U);
    t3 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t2, t1);
    t4 = (t0 + 3848U);
    t5 = *((char **)t4);
    t6 = *((int *)t5);
    t7 = xsi_vhdl_pow_double(2.0000000000000000, t6);
    t8 = ((((double)(t3))) / t7);
    t4 = (t0 + 9672);
    t9 = (t4 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((double *)t12) = t8;
    xsi_driver_first_trans_fast(t4);

LAB2:    t13 = (t0 + 9288);
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

LAB0:    xsi_set_current_line(113, ng2);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 17316U);
    t3 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t2, t1);
    t4 = (t0 + 3848U);
    t5 = *((char **)t4);
    t6 = *((int *)t5);
    t7 = xsi_vhdl_pow_double(2.0000000000000000, t6);
    t8 = ((((double)(t3))) / t7);
    t4 = (t0 + 9736);
    t9 = (t4 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((double *)t12) = t8;
    xsi_driver_first_trans_fast(t4);

LAB2:    t13 = (t0 + 9304);
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

LAB0:    xsi_set_current_line(114, ng2);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 17332U);
    t3 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t2, t1);
    t4 = (t0 + 3848U);
    t5 = *((char **)t4);
    t6 = *((int *)t5);
    t7 = xsi_vhdl_pow_double(2.0000000000000000, t6);
    t8 = ((((double)(t3))) / t7);
    t4 = (t0 + 9800);
    t9 = (t4 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((double *)t12) = t8;
    xsi_driver_first_trans_fast(t4);

LAB2:    t13 = (t0 + 9320);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2074650134_2372691052_p_7(char *t0)
{
    char t11[16];
    char t27[16];
    char t29[16];
    char t36[16];
    char t38[16];
    char t42[16];
    char t46[16];
    char t51[16];
    char t53[16];
    char t59[16];
    char t61[16];
    char t65[16];
    char t76[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    int t19;
    double t20;
    double t21;
    char *t22;
    char *t23;
    int t24;
    int t25;
    char *t26;
    char *t28;
    char *t30;
    char *t31;
    int t32;
    unsigned int t33;
    char *t35;
    char *t37;
    char *t39;
    char *t40;
    int t41;
    char *t43;
    double t44;
    char *t45;
    char *t47;
    char *t48;
    char *t50;
    char *t52;
    char *t54;
    char *t55;
    int t56;
    char *t58;
    char *t60;
    char *t62;
    char *t63;
    int t64;
    char *t66;
    char *t67;
    int t68;
    int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    double t73;
    char *t74;
    char *t75;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;

LAB0:    t1 = (t0 + 8672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(129, ng2);

LAB6:    t2 = (t0 + 9336);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t4 = (t0 + 9336);
    *((int *)t4) = 0;
    xsi_set_current_line(131, ng2);
    t2 = (t0 + 4088U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)1);
    if (t6 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(143, ng2);
    t2 = (t0 + 4088U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)0;
    xsi_set_current_line(144, ng2);
    t2 = (t0 + 2952U);
    t4 = *((char **)t2);
    t2 = (t0 + 17396U);
    t14 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t4, t2);
    t5 = (t0 + 3848U);
    t8 = *((char **)t5);
    t16 = *((int *)t8);
    t19 = (-(t16));
    t20 = xsi_vhdl_pow_double(2.0000000000000000, t19);
    t21 = ((((double)(t14))) * t20);
    t5 = (t0 + 4208U);
    t12 = *((char **)t5);
    t5 = (t12 + 0);
    *((double *)t5) = t21;
    xsi_set_current_line(145, ng2);
    t2 = (t0 + 8480);
    t4 = (t0 + 6136U);
    t5 = (t0 + 4208U);
    t8 = *((char **)t5);
    t20 = *((double *)t8);
    std_textio_write6(STD_TEXTIO, t2, t4, t20, (unsigned char)1, 0, 6);
    xsi_set_current_line(146, ng2);
    t2 = (t0 + 8480);
    t4 = (t0 + 6136U);
    t5 = (t0 + 4208U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    std_textio_read12(STD_TEXTIO, t2, t4, t5);
    xsi_set_current_line(149, ng2);
    t2 = (t0 + 4208U);
    t4 = *((char **)t2);
    t20 = *((double *)t4);
    t2 = (t0 + 3968U);
    t5 = *((char **)t2);
    t2 = (t0 + 4328U);
    t8 = *((char **)t2);
    t14 = *((int *)t8);
    t16 = (t14 + 1);
    t19 = (t16 - 1);
    t15 = (t19 * 1);
    xsi_vhdl_check_range_of_index(1, 1000, 1, t16);
    t17 = (8U * t15);
    t18 = (0 + t17);
    t2 = (t5 + t18);
    t21 = *((double *)t2);
    t3 = (t20 == t21);
    if (t3 == 0)
        goto LAB18;

LAB19:    xsi_set_current_line(154, ng2);
    t2 = (t0 + 4328U);
    t4 = *((char **)t2);
    t14 = *((int *)t4);
    t16 = (t14 + 1);
    t2 = (t0 + 4328U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = t16;
    goto LAB2;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t4 = (t0 + 2792U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)1);
    t3 = t10;
    goto LAB10;

LAB11:    xsi_set_current_line(132, ng2);
    t2 = (t0 + 5856U);
    t5 = (t0 + 34173);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 1;
    t13 = (t12 + 4U);
    *((int *)t13) = 83;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (83 - 1);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    std_textio_file_open1(t2, t5, t11, (unsigned char)0);
    xsi_set_current_line(133, ng2);

LAB14:    t2 = (t0 + 5856U);
    t3 = std_textio_endfile(t2);
    t6 = (!(t3));
    if (t6 != 0)
        goto LAB15;

LAB17:    xsi_set_current_line(139, ng2);
    t2 = (t0 + 4328U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = 0;
    xsi_set_current_line(140, ng2);
    t2 = (t0 + 5856U);
    std_textio_file_close(t2);
    goto LAB12;

LAB15:    xsi_set_current_line(134, ng2);
    t4 = (t0 + 4328U);
    t5 = *((char **)t4);
    t14 = *((int *)t5);
    t16 = (t14 + 1);
    t4 = (t0 + 4328U);
    t8 = *((char **)t4);
    t4 = (t8 + 0);
    *((int *)t4) = t16;
    xsi_set_current_line(135, ng2);
    t2 = (t0 + 8480);
    t4 = (t0 + 5856U);
    t5 = (t0 + 6136U);
    std_textio_readline(STD_TEXTIO, t2, t4, t5);
    xsi_set_current_line(137, ng2);
    t2 = (t0 + 8480);
    t4 = (t0 + 6136U);
    t5 = (t0 + 3968U);
    t8 = *((char **)t5);
    t5 = (t0 + 4328U);
    t12 = *((char **)t5);
    t14 = *((int *)t12);
    t16 = (t14 - 1);
    t15 = (t16 * 1);
    xsi_vhdl_check_range_of_index(1, 1000, 1, t14);
    t17 = (8U * t15);
    t18 = (0 + t17);
    t5 = (t8 + t18);
    std_textio_read12(STD_TEXTIO, t2, t4, t5);
    goto LAB14;

LAB16:;
LAB18:    t12 = (t0 + 34256);
    t22 = (t0 + 4328U);
    t23 = *((char **)t22);
    t24 = *((int *)t23);
    t25 = (t24 + 1);
    t22 = work_p_4054474977_sub_3316299037_1800819092(WORK_P_4054474977, t11, t25);
    t28 = ((STD_STANDARD) + 1008);
    t30 = (t29 + 0U);
    t31 = (t30 + 0U);
    *((int *)t31) = 1;
    t31 = (t30 + 4U);
    *((int *)t31) = 19;
    t31 = (t30 + 8U);
    *((int *)t31) = 1;
    t32 = (19 - 1);
    t33 = (t32 * 1);
    t33 = (t33 + 1);
    t31 = (t30 + 12U);
    *((unsigned int *)t31) = t33;
    t26 = xsi_base_array_concat(t26, t27, t28, (char)97, t12, t29, (char)97, t22, t11, (char)101);
    t31 = (t0 + 34275);
    t37 = ((STD_STANDARD) + 1008);
    t39 = (t38 + 0U);
    t40 = (t39 + 0U);
    *((int *)t40) = 1;
    t40 = (t39 + 4U);
    *((int *)t40) = 21;
    t40 = (t39 + 8U);
    *((int *)t40) = 1;
    t41 = (21 - 1);
    t33 = (t41 * 1);
    t33 = (t33 + 1);
    t40 = (t39 + 12U);
    *((unsigned int *)t40) = t33;
    t35 = xsi_base_array_concat(t35, t36, t37, (char)97, t26, t27, (char)97, t31, t38, (char)101);
    t40 = (t0 + 4208U);
    t43 = *((char **)t40);
    t44 = *((double *)t43);
    t40 = work_p_4054474977_sub_3720513933_1800819092(WORK_P_4054474977, t42, t44, 10);
    t47 = ((STD_STANDARD) + 1008);
    t45 = xsi_base_array_concat(t45, t46, t47, (char)97, t35, t36, (char)97, t40, t42, (char)101);
    t48 = (t0 + 34296);
    t52 = ((STD_STANDARD) + 1008);
    t54 = (t53 + 0U);
    t55 = (t54 + 0U);
    *((int *)t55) = 1;
    t55 = (t54 + 4U);
    *((int *)t55) = 5;
    t55 = (t54 + 8U);
    *((int *)t55) = 1;
    t56 = (5 - 1);
    t33 = (t56 * 1);
    t33 = (t33 + 1);
    t55 = (t54 + 12U);
    *((unsigned int *)t55) = t33;
    t50 = xsi_base_array_concat(t50, t51, t52, (char)97, t45, t46, (char)97, t48, t53, (char)101);
    t55 = (t0 + 34301);
    t60 = ((STD_STANDARD) + 1008);
    t62 = (t61 + 0U);
    t63 = (t62 + 0U);
    *((int *)t63) = 1;
    t63 = (t62 + 4U);
    *((int *)t63) = 22;
    t63 = (t62 + 8U);
    *((int *)t63) = 1;
    t64 = (22 - 1);
    t33 = (t64 * 1);
    t33 = (t33 + 1);
    t63 = (t62 + 12U);
    *((unsigned int *)t63) = t33;
    t58 = xsi_base_array_concat(t58, t59, t60, (char)97, t50, t51, (char)97, t55, t61, (char)101);
    t63 = (t0 + 3968U);
    t66 = *((char **)t63);
    t63 = (t0 + 4328U);
    t67 = *((char **)t63);
    t68 = *((int *)t67);
    t69 = (t68 + 1);
    t70 = (t69 - 1);
    t33 = (t70 * 1);
    xsi_vhdl_check_range_of_index(1, 1000, 1, t69);
    t71 = (8U * t33);
    t72 = (0 + t71);
    t63 = (t66 + t72);
    t73 = *((double *)t63);
    t74 = work_p_4054474977_sub_3720513933_1800819092(WORK_P_4054474977, t65, t73, 10);
    t77 = ((STD_STANDARD) + 1008);
    t75 = xsi_base_array_concat(t75, t76, t77, (char)97, t58, t59, (char)97, t74, t65, (char)101);
    t78 = (t11 + 12U);
    t79 = *((unsigned int *)t78);
    t79 = (t79 * 1U);
    t80 = (19U + t79);
    t81 = (t80 + 21U);
    t82 = (t42 + 12U);
    t83 = *((unsigned int *)t82);
    t83 = (t83 * 1U);
    t84 = (t81 + t83);
    t85 = (t84 + 5U);
    t86 = (t85 + 22U);
    t87 = (t65 + 12U);
    t88 = *((unsigned int *)t87);
    t88 = (t88 * 1U);
    t89 = (t86 + t88);
    xsi_report(t75, t89, (unsigned char)0);
    goto LAB19;

}

static void work_a_2074650134_2372691052_p_8(char *t0)
{
    char t5[16];
    char t27[16];
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
    int t15;
    int t16;
    int t17;
    int t18;
    double t19;
    char *t20;
    int t21;
    double t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    char *t28;
    char *t29;
    char *t30;
    int t31;
    int t32;
    char *t33;
    char *t34;
    char *t35;
    int64 t36;

LAB0:    t1 = (t0 + 8920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(175, ng2);
    t2 = (t0 + 5960U);
    t3 = (t0 + 34323);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 76;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (76 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    std_textio_file_open1(t2, t3, t5, (unsigned char)0);
    xsi_set_current_line(178, ng2);

LAB4:    t2 = (t0 + 5960U);
    t10 = std_textio_endfile(t2);
    t11 = (!(t10));
    if (t11 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(184, ng2);
    t2 = (t0 + 4448U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int *)t2) = 0;
    xsi_set_current_line(185, ng2);
    t2 = (t0 + 5960U);
    std_textio_file_close(t2);
    xsi_set_current_line(191, ng2);
    t2 = (t0 + 5960U);
    t3 = (t0 + 34399);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 83;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (83 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    std_textio_file_open1(t2, t3, t5, (unsigned char)1);
    xsi_set_current_line(192, ng2);
    t2 = (t0 + 4568U);
    t3 = *((char **)t2);
    t8 = *((int *)t3);
    t12 = (t8 / 2);
    t2 = (t0 + 34482);
    *((int *)t2) = 1;
    t4 = (t0 + 34486);
    *((int *)t4) = t12;
    t15 = 1;
    t16 = t12;

LAB8:    if (t15 <= t16)
        goto LAB9;

LAB11:    xsi_set_current_line(206, ng2);
    t2 = (t0 + 4448U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int *)t2) = 0;
    xsi_set_current_line(207, ng2);
    t2 = (t0 + 5960U);
    std_textio_file_close(t2);
    xsi_set_current_line(208, ng2);
    t2 = (t0 + 5528U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((unsigned char *)t2) = (unsigned char)1;
    xsi_set_current_line(210, ng2);
    t2 = (t0 + 5528U);
    t3 = *((char **)t2);
    t10 = *((unsigned char *)t3);
    t2 = (t0 + 9864);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t20 = *((char **)t7);
    *((unsigned char *)t20) = t10;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(213, ng2);
    t2 = (t0 + 4568U);
    t3 = *((char **)t2);
    t8 = *((int *)t3);
    t12 = (t8 / 2);
    t2 = (t0 + 34490);
    *((int *)t2) = 1;
    t4 = (t0 + 34494);
    *((int *)t4) = t12;
    t15 = 1;
    t16 = t12;

LAB13:    if (t15 <= t16)
        goto LAB14;

LAB16:    xsi_set_current_line(223, ng2);

LAB31:    *((char **)t1) = &&LAB32;

LAB1:    return;
LAB5:    xsi_set_current_line(179, ng2);
    t3 = (t0 + 4568U);
    t4 = *((char **)t3);
    t8 = *((int *)t4);
    t12 = (t8 + 1);
    t3 = (t0 + 4568U);
    t6 = *((char **)t3);
    t3 = (t6 + 0);
    *((int *)t3) = t12;
    xsi_set_current_line(180, ng2);
    t2 = (t0 + 8728);
    t3 = (t0 + 5960U);
    t4 = (t0 + 6280U);
    std_textio_readline(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(182, ng2);
    t2 = (t0 + 8728);
    t3 = (t0 + 6280U);
    t4 = (t0 + 5408U);
    t6 = *((char **)t4);
    t4 = (t0 + 4568U);
    t7 = *((char **)t4);
    t8 = *((int *)t7);
    t12 = (t8 - 1);
    t9 = (t12 * 1);
    xsi_vhdl_check_range_of_index(1, 1000, 1, t8);
    t13 = (8U * t9);
    t14 = (0 + t13);
    t4 = (t6 + t14);
    std_textio_read12(STD_TEXTIO, t2, t3, t4);
    goto LAB4;

LAB6:;
LAB9:    xsi_set_current_line(193, ng2);
    t6 = (t0 + 5528U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_set_current_line(194, ng2);
    t2 = (t0 + 5408U);
    t3 = *((char **)t2);
    t2 = (t0 + 34482);
    t4 = (t0 + 4448U);
    t6 = *((char **)t4);
    t8 = *((int *)t6);
    t12 = *((int *)t2);
    t17 = (t12 + t8);
    t18 = (t17 - 1);
    t9 = (t18 * 1);
    xsi_vhdl_check_range_of_index(1, 1000, 1, t17);
    t13 = (8U * t9);
    t14 = (0 + t13);
    t4 = (t3 + t14);
    t19 = *((double *)t4);
    t7 = (t0 + 3848U);
    t20 = *((char **)t7);
    t21 = *((int *)t20);
    t22 = xsi_vhdl_pow_double(2.0000000000000000, t21);
    t7 = work_a_2074650134_2372691052_sub_3047817777_4163069965(t0, t5, t19, t22);
    t23 = (t0 + 4688U);
    t24 = *((char **)t23);
    t23 = (t24 + 0);
    t25 = (t5 + 12U);
    t26 = *((unsigned int *)t25);
    t26 = (t26 * 1U);
    memcpy(t23, t7, t26);
    xsi_set_current_line(195, ng2);
    t2 = (t0 + 4448U);
    t3 = *((char **)t2);
    t8 = *((int *)t3);
    t12 = (t8 + 1);
    t2 = (t0 + 4448U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = t12;
    xsi_set_current_line(196, ng2);
    t2 = (t0 + 5408U);
    t3 = *((char **)t2);
    t2 = (t0 + 34482);
    t4 = (t0 + 4448U);
    t6 = *((char **)t4);
    t8 = *((int *)t6);
    t12 = *((int *)t2);
    t17 = (t12 + t8);
    t18 = (t17 - 1);
    t9 = (t18 * 1);
    xsi_vhdl_check_range_of_index(1, 1000, 1, t17);
    t13 = (8U * t9);
    t14 = (0 + t13);
    t4 = (t3 + t14);
    t19 = *((double *)t4);
    t7 = (t0 + 3848U);
    t20 = *((char **)t7);
    t21 = *((int *)t20);
    t22 = xsi_vhdl_pow_double(2.0000000000000000, t21);
    t7 = work_a_2074650134_2372691052_sub_3047817777_4163069965(t0, t5, t19, t22);
    t23 = (t0 + 4808U);
    t24 = *((char **)t23);
    t23 = (t24 + 0);
    t25 = (t5 + 12U);
    t26 = *((unsigned int *)t25);
    t26 = (t26 * 1U);
    memcpy(t23, t7, t26);
    xsi_set_current_line(198, ng2);
    t2 = (t0 + 4688U);
    t3 = *((char **)t2);
    t2 = (t0 + 17412U);
    t8 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t3, t2);
    t4 = (t0 + 4808U);
    t6 = *((char **)t4);
    t4 = (t0 + 17412U);
    t12 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t6, t4);
    t17 = (t8 * t12);
    t7 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t27, t17, 36);
    t20 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t5, t7, t27, (unsigned char)0);
    t23 = (t0 + 5168U);
    t24 = *((char **)t23);
    t23 = (t24 + 0);
    t25 = (t5 + 12U);
    t9 = *((unsigned int *)t25);
    t9 = (t9 * 1U);
    memcpy(t23, t20, t9);
    xsi_set_current_line(199, ng2);
    t2 = (t0 + 5168U);
    t3 = *((char **)t2);
    t2 = (t0 + 17444U);
    t4 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t5, t3, t2);
    t6 = (t0 + 4928U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t20 = (t5 + 12U);
    t9 = *((unsigned int *)t20);
    t9 = (t9 * 1U);
    memcpy(t6, t4, t9);
    xsi_set_current_line(200, ng2);
    t2 = (t0 + 4928U);
    t3 = *((char **)t2);
    t2 = (t0 + 17428U);
    t8 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t3, t2);
    t4 = (t0 + 5048U);
    t6 = *((char **)t4);
    t4 = (t0 + 17428U);
    t12 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t6, t4);
    t17 = (t8 + t12);
    t7 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t27, t17, 36);
    t20 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t5, t7, t27, (unsigned char)0);
    t23 = (t0 + 5288U);
    t24 = *((char **)t23);
    t23 = (t24 + 0);
    t25 = (t5 + 12U);
    t9 = *((unsigned int *)t25);
    t9 = (t9 * 1U);
    memcpy(t23, t20, t9);
    xsi_set_current_line(201, ng2);
    t2 = (t0 + 5288U);
    t3 = *((char **)t2);
    t2 = (t0 + 17444U);
    t4 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t5, t3, t2);
    t6 = (t0 + 5048U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t20 = (t5 + 12U);
    t9 = *((unsigned int *)t20);
    t9 = (t9 * 1U);
    memcpy(t6, t4, t9);
    xsi_set_current_line(202, ng2);
    t2 = (t0 + 8728);
    t3 = (t0 + 6208U);
    t4 = (t0 + 5288U);
    t6 = *((char **)t4);
    t4 = (t0 + 3848U);
    t7 = *((char **)t4);
    t8 = *((int *)t7);
    t4 = xsi_vhdl_bitvec_sra(t4, t6, 36U, t8);
    t20 = (t0 + 17444U);
    t23 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t5, t4, t20);
    t24 = (t5 + 0U);
    t12 = *((int *)t24);
    t9 = (t12 - 17);
    t13 = (t9 * 1U);
    t14 = (0 + t13);
    t25 = (t23 + t14);
    t28 = (t27 + 0U);
    t29 = (t28 + 0U);
    *((int *)t29) = 17;
    t29 = (t28 + 4U);
    *((int *)t29) = 0;
    t29 = (t28 + 8U);
    *((int *)t29) = -1;
    t17 = (0 - 17);
    t26 = (t17 * -1);
    t26 = (t26 + 1);
    t29 = (t28 + 12U);
    *((unsigned int *)t29) = t26;
    t18 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t25, t27);
    t29 = (t0 + 3848U);
    t30 = *((char **)t29);
    t21 = *((int *)t30);
    t19 = xsi_vhdl_pow_double(2.0000000000000000, t21);
    t22 = ((((double)(t18))) / t19);
    std_textio_write6(STD_TEXTIO, t2, t3, t22, (unsigned char)1, 0, 6);
    xsi_set_current_line(203, ng2);
    t2 = (t0 + 8728);
    t3 = (t0 + 5960U);
    t4 = (t0 + 6208U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);

LAB10:    t2 = (t0 + 34482);
    t15 = *((int *)t2);
    t3 = (t0 + 34486);
    t16 = *((int *)t3);
    if (t15 == t16)
        goto LAB11;

LAB12:    t8 = (t15 + 1);
    t15 = t8;
    t4 = (t0 + 34482);
    *((int *)t4) = t15;
    goto LAB8;

LAB14:    xsi_set_current_line(214, ng2);
    t6 = (t0 + 5408U);
    t7 = *((char **)t6);
    t6 = (t0 + 34490);
    t20 = (t0 + 4448U);
    t23 = *((char **)t20);
    t17 = *((int *)t23);
    t18 = *((int *)t6);
    t21 = (t18 + t17);
    t31 = (t21 - 1);
    t9 = (t31 * 1);
    xsi_vhdl_check_range_of_index(1, 1000, 1, t21);
    t13 = (8U * t9);
    t14 = (0 + t13);
    t20 = (t7 + t14);
    t19 = *((double *)t20);
    t24 = (t0 + 3848U);
    t25 = *((char **)t24);
    t32 = *((int *)t25);
    t22 = xsi_vhdl_pow_double(2.0000000000000000, t32);
    t24 = work_a_2074650134_2372691052_sub_3047817777_4163069965(t0, t5, t19, t22);
    t28 = (t5 + 12U);
    t26 = *((unsigned int *)t28);
    t26 = (t26 * 1U);
    t10 = (18U != t26);
    if (t10 == 1)
        goto LAB17;

LAB18:    t29 = (t0 + 9928);
    t30 = (t29 + 56U);
    t33 = *((char **)t30);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memcpy(t35, t24, 18U);
    xsi_driver_first_trans_fast(t29);
    xsi_set_current_line(215, ng2);
    t2 = (t0 + 4448U);
    t3 = *((char **)t2);
    t8 = *((int *)t3);
    t12 = (t8 + 1);
    t2 = (t0 + 4448U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = t12;
    xsi_set_current_line(216, ng2);
    t2 = (t0 + 5408U);
    t3 = *((char **)t2);
    t2 = (t0 + 34490);
    t4 = (t0 + 4448U);
    t6 = *((char **)t4);
    t8 = *((int *)t6);
    t12 = *((int *)t2);
    t17 = (t12 + t8);
    t18 = (t17 - 1);
    t9 = (t18 * 1);
    xsi_vhdl_check_range_of_index(1, 1000, 1, t17);
    t13 = (8U * t9);
    t14 = (0 + t13);
    t4 = (t3 + t14);
    t19 = *((double *)t4);
    t7 = (t0 + 3848U);
    t20 = *((char **)t7);
    t21 = *((int *)t20);
    t22 = xsi_vhdl_pow_double(2.0000000000000000, t21);
    t7 = work_a_2074650134_2372691052_sub_3047817777_4163069965(t0, t5, t19, t22);
    t23 = (t5 + 12U);
    t26 = *((unsigned int *)t23);
    t26 = (t26 * 1U);
    t10 = (18U != t26);
    if (t10 == 1)
        goto LAB19;

LAB20:    t24 = (t0 + 9992);
    t25 = (t24 + 56U);
    t28 = *((char **)t25);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t7, 18U);
    xsi_driver_first_trans_fast(t24);
    xsi_set_current_line(217, ng2);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t5, 5, 3);
    t3 = (t0 + 10056);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t20 = *((char **)t7);
    memcpy(t20, t2, 3U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(218, ng2);
    t2 = (t0 + 34490);
    t3 = (t0 + 4568U);
    t4 = *((char **)t3);
    t8 = *((int *)t4);
    t12 = (t8 / 2);
    t17 = *((int *)t2);
    t10 = (t17 == t12);
    if (t10 != 0)
        goto LAB21;

LAB23:
LAB22:    xsi_set_current_line(221, ng2);
    t2 = (t0 + 3728U);
    t3 = *((char **)t2);
    t36 = *((int64 *)t3);
    t2 = (t0 + 8728);
    xsi_process_wait(t2, t36);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB15:    t2 = (t0 + 34490);
    t15 = *((int *)t2);
    t3 = (t0 + 34494);
    t16 = *((int *)t3);
    if (t15 == t16)
        goto LAB16;

LAB28:    t8 = (t15 + 1);
    t15 = t8;
    t4 = (t0 + 34490);
    *((int *)t4) = t15;
    goto LAB13;

LAB17:    xsi_size_not_matching(18U, t26, 0);
    goto LAB18;

LAB19:    xsi_size_not_matching(18U, t26, 0);
    goto LAB20;

LAB21:    xsi_set_current_line(219, ng2);
    t3 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t5, 2, 3);
    t6 = (t0 + 10056);
    t7 = (t6 + 56U);
    t20 = *((char **)t7);
    t23 = (t20 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t3, 3U);
    xsi_driver_first_trans_fast(t6);
    goto LAB22;

LAB24:    goto LAB15;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB29:    xsi_set_current_line(272, ng2);

LAB35:    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB30:    goto LAB29;

LAB32:    goto LAB30;

LAB33:    goto LAB2;

LAB34:    goto LAB33;

LAB36:    goto LAB34;

}


extern void work_a_2074650134_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2074650134_2372691052_p_0,(void *)work_a_2074650134_2372691052_p_1,(void *)work_a_2074650134_2372691052_p_2,(void *)work_a_2074650134_2372691052_p_3,(void *)work_a_2074650134_2372691052_p_4,(void *)work_a_2074650134_2372691052_p_5,(void *)work_a_2074650134_2372691052_p_6,(void *)work_a_2074650134_2372691052_p_7,(void *)work_a_2074650134_2372691052_p_8};
	static char *se[] = {(void *)work_a_2074650134_2372691052_sub_3047817777_4163069965};
	xsi_register_didat("work_a_2074650134_2372691052", "isim/tb_DSPNormalizer_isim_beh.exe.sim/work/a_2074650134_2372691052.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
