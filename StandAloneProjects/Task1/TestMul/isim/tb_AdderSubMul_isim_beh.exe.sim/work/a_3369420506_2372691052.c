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
static const char *ng2 = "C:/FPGA/Internship Jobs/Codes/ETSE_GDSP/StandAloneProjects/Task1/TestMul/tb_AdderSubMul.vhd";
extern char *STD_TEXTIO;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
int ieee_p_1242562249_sub_2271993008_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_2563015576_1035706684(char *, char *, int , int );


char *work_a_3369420506_2372691052_sub_3797534189_4163069965(char *t1, char *t2, double t3, double t4)
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

static void work_a_3369420506_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 4560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(94, ng2);
    t2 = (t0 + 6776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(95, ng2);
    t2 = (t0 + 3088U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 4368);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(96, ng2);
    t2 = (t0 + 6776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(97, ng2);
    t2 = (t0 + 3088U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 4368);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_3369420506_2372691052_p_1(char *t0)
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
    int t12;
    double t13;
    double t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(100, ng2);

LAB3:    t1 = (t0 + 2792U);
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
    t12 = (-(17));
    t13 = xsi_vhdl_pow_double(2.0000000000000000, t12);
    t14 = ((((double)(t11))) * t13);
    t8 = (t0 + 6840);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((double *)t18) = t14;
    xsi_driver_first_trans_fast(t8);

LAB2:    t19 = (t0 + 6616);
    *((int *)t19) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3369420506_2372691052_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    double t5;
    double t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(102, ng2);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 11988U);
    t3 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t2, t1);
    t4 = (-(17));
    t5 = xsi_vhdl_pow_double(2.0000000000000000, t4);
    t6 = ((((double)(t3))) * t5);
    t7 = (t0 + 6904);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((double *)t11) = t6;
    xsi_driver_first_trans_fast(t7);

LAB2:    t12 = (t0 + 6632);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3369420506_2372691052_p_3(char *t0)
{
    char t9[16];
    char t11[16];
    char t16[16];
    char *t1;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    char *t17;
    int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(104, ng2);

LAB3:    t1 = (t0 + 12492);
    t3 = (t0 + 2792U);
    t4 = *((char **)t3);
    t5 = (47 - 36);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t3 = (t4 + t7);
    t10 = ((IEEE_P_2592010699) + 4024);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 27;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (27 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t13 = (t16 + 0U);
    t17 = (t13 + 0U);
    *((int *)t17) = 36;
    t17 = (t13 + 4U);
    *((int *)t17) = 17;
    t17 = (t13 + 8U);
    *((int *)t17) = -1;
    t18 = (17 - 36);
    t15 = (t18 * -1);
    t15 = (t15 + 1);
    t17 = (t13 + 12U);
    *((unsigned int *)t17) = t15;
    t8 = xsi_base_array_concat(t8, t9, t10, (char)97, t1, t11, (char)97, t3, t16, (char)101);
    t15 = (28U + 20U);
    t19 = (48U != t15);
    if (t19 == 1)
        goto LAB5;

LAB6:    t17 = (t0 + 6968);
    t20 = (t17 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t8, 48U);
    xsi_driver_first_trans_fast(t17);

LAB2:    t24 = (t0 + 6648);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(48U, t15, 0);
    goto LAB6;

}

static void work_a_3369420506_2372691052_p_4(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    double t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(106, ng2);

LAB3:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 11924U);
    t3 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t2, t1);
    t4 = ((((double)(t3))) / 131072.00000000000);
    t5 = (t0 + 7032);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((double *)t9) = t4;
    xsi_driver_first_trans_fast(t5);

LAB2:    t10 = (t0 + 6664);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3369420506_2372691052_p_5(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    double t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(107, ng2);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 11940U);
    t3 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t2, t1);
    t4 = ((((double)(t3))) / 131072.00000000000);
    t5 = (t0 + 7096);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((double *)t9) = t4;
    xsi_driver_first_trans_fast(t5);

LAB2:    t10 = (t0 + 6680);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3369420506_2372691052_p_6(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    double t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(108, ng2);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 11956U);
    t3 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t2, t1);
    t4 = ((((double)(t3))) / 131072.00000000000);
    t5 = (t0 + 7160);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((double *)t9) = t4;
    xsi_driver_first_trans_fast(t5);

LAB2:    t10 = (t0 + 6696);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3369420506_2372691052_p_7(char *t0)
{
    char t6[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    int t11;
    unsigned char t12;
    unsigned char t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    int t18;
    int t19;
    double t20;
    double t21;
    char *t22;
    char *t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    int64 t30;

LAB0:    t1 = (t0 + 6296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(118, ng2);
    t2 = (t0 + 6104);
    t3 = (t0 + 3832U);
    t4 = (t0 + 12520);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 7;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (7 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    std_textio_write7(STD_TEXTIO, t2, t3, t4, t6, (unsigned char)0, 0);
    xsi_set_current_line(119, ng2);
    t2 = (t0 + 6104);
    t3 = ((STD_TEXTIO) + 1480U);
    t4 = (t0 + 3832U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(120, ng2);
    t2 = (t0 + 6104);
    t3 = (t0 + 3832U);
    t4 = (t0 + 12527);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 1;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (1 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    std_textio_write7(STD_TEXTIO, t2, t3, t4, t6, (unsigned char)0, 0);
    xsi_set_current_line(121, ng2);
    t2 = (t0 + 6104);
    t3 = ((STD_TEXTIO) + 1480U);
    t4 = (t0 + 3832U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(125, ng2);
    t2 = (t0 + 3656U);
    t3 = (t0 + 12528);
    t5 = (t6 + 0U);
    t7 = (t5 + 0U);
    *((int *)t7) = 1;
    t7 = (t5 + 4U);
    *((int *)t7) = 73;
    t7 = (t5 + 8U);
    *((int *)t7) = 1;
    t9 = (73 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t7 = (t5 + 12U);
    *((unsigned int *)t7) = t10;
    std_textio_file_open1(t2, t3, t6, (unsigned char)0);
    xsi_set_current_line(127, ng2);
    t2 = (t0 + 12601);
    *((int *)t2) = 1;
    t3 = (t0 + 12605);
    *((int *)t3) = 10;
    t9 = 1;
    t11 = 10;

LAB4:    if (t9 <= t11)
        goto LAB5;

LAB7:    xsi_set_current_line(135, ng2);
    t2 = (t0 + 3656U);
    std_textio_file_close(t2);
    xsi_set_current_line(137, ng2);
    t2 = (t0 + 12609);
    *((int *)t2) = 1;
    t3 = (t0 + 12613);
    *((int *)t3) = 5;
    t9 = 1;
    t11 = 5;

LAB12:    if (t9 <= t11)
        goto LAB13;

LAB15:    xsi_set_current_line(147, ng2);

LAB30:    *((char **)t1) = &&LAB31;

LAB1:    return;
LAB5:    xsi_set_current_line(129, ng2);
    t4 = (t0 + 3656U);
    t12 = std_textio_endfile(t4);
    t13 = (!(t12));
    if (t13 != 0)
        goto LAB8;

LAB10:
LAB9:
LAB6:    t2 = (t0 + 12601);
    t9 = *((int *)t2);
    t3 = (t0 + 12605);
    t11 = *((int *)t3);
    if (t9 == t11)
        goto LAB7;

LAB11:    t14 = (t9 + 1);
    t9 = t14;
    t4 = (t0 + 12601);
    *((int *)t4) = t9;
    goto LAB4;

LAB8:    xsi_set_current_line(130, ng2);
    t5 = (t0 + 6104);
    t7 = (t0 + 3656U);
    t8 = (t0 + 3904U);
    std_textio_readline(STD_TEXTIO, t5, t7, t8);
    xsi_set_current_line(132, ng2);
    t2 = (t0 + 6104);
    t3 = (t0 + 3904U);
    t4 = (t0 + 3328U);
    t5 = *((char **)t4);
    t4 = (t0 + 12601);
    t14 = *((int *)t4);
    t15 = (t14 - 1);
    t10 = (t15 * 1);
    xsi_vhdl_check_range_of_index(1, 10, 1, *((int *)t4));
    t16 = (8U * t10);
    t17 = (0 + t16);
    t7 = (t5 + t17);
    std_textio_read12(STD_TEXTIO, t2, t3, t7);
    goto LAB9;

LAB13:    xsi_set_current_line(138, ng2);
    t4 = (t0 + 3328U);
    t5 = *((char **)t4);
    t4 = (t0 + 12609);
    t7 = (t0 + 3208U);
    t8 = *((char **)t7);
    t14 = *((int *)t8);
    t15 = *((int *)t4);
    t18 = (t15 + t14);
    t19 = (t18 - 1);
    t10 = (t19 * 1);
    xsi_vhdl_check_range_of_index(1, 10, 1, t18);
    t16 = (8U * t10);
    t17 = (0 + t16);
    t7 = (t5 + t17);
    t20 = *((double *)t7);
    t21 = xsi_vhdl_pow_double(2.0000000000000000, 17);
    t22 = work_a_3369420506_2372691052_sub_3797534189_4163069965(t0, t6, t20, t21);
    t23 = (t6 + 12U);
    t24 = *((unsigned int *)t23);
    t24 = (t24 * 1U);
    t12 = (18U != t24);
    if (t12 == 1)
        goto LAB16;

LAB17:    t25 = (t0 + 7224);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t22, 18U);
    xsi_driver_first_trans_fast(t25);
    xsi_set_current_line(139, ng2);
    t2 = (t0 + 3208U);
    t3 = *((char **)t2);
    t14 = *((int *)t3);
    t15 = (t14 + 1);
    t2 = (t0 + 3208U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = t15;
    xsi_set_current_line(140, ng2);
    t2 = (t0 + 3328U);
    t3 = *((char **)t2);
    t2 = (t0 + 12609);
    t4 = (t0 + 3208U);
    t5 = *((char **)t4);
    t14 = *((int *)t5);
    t15 = *((int *)t2);
    t18 = (t15 + t14);
    t19 = (t18 - 1);
    t10 = (t19 * 1);
    xsi_vhdl_check_range_of_index(1, 10, 1, t18);
    t16 = (8U * t10);
    t17 = (0 + t16);
    t4 = (t3 + t17);
    t20 = *((double *)t4);
    t21 = xsi_vhdl_pow_double(2.0000000000000000, 17);
    t7 = work_a_3369420506_2372691052_sub_3797534189_4163069965(t0, t6, t20, t21);
    t8 = (t6 + 12U);
    t24 = *((unsigned int *)t8);
    t24 = (t24 * 1U);
    t12 = (18U != t24);
    if (t12 == 1)
        goto LAB18;

LAB19:    t22 = (t0 + 7288);
    t23 = (t22 + 56U);
    t25 = *((char **)t23);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t7, 18U);
    xsi_driver_first_trans_fast(t22);
    xsi_set_current_line(141, ng2);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t6, 5, 3);
    t3 = (t0 + 7352);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(142, ng2);
    t2 = (t0 + 12609);
    t14 = *((int *)t2);
    t12 = (t14 == 5);
    if (t12 != 0)
        goto LAB20;

LAB22:
LAB21:    xsi_set_current_line(145, ng2);
    t2 = (t0 + 3088U);
    t3 = *((char **)t2);
    t30 = *((int64 *)t3);
    t2 = (t0 + 6104);
    xsi_process_wait(t2, t30);

LAB25:    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB14:    t2 = (t0 + 12609);
    t9 = *((int *)t2);
    t3 = (t0 + 12613);
    t11 = *((int *)t3);
    if (t9 == t11)
        goto LAB15;

LAB27:    t14 = (t9 + 1);
    t9 = t14;
    t4 = (t0 + 12609);
    *((int *)t4) = t9;
    goto LAB12;

LAB16:    xsi_size_not_matching(18U, t24, 0);
    goto LAB17;

LAB18:    xsi_size_not_matching(18U, t24, 0);
    goto LAB19;

LAB20:    xsi_set_current_line(143, ng2);
    t3 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t6, 2, 3);
    t4 = (t0 + 7352);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t22 = *((char **)t8);
    memcpy(t22, t3, 3U);
    xsi_driver_first_trans_fast(t4);
    goto LAB21;

LAB23:    goto LAB14;

LAB24:    goto LAB23;

LAB26:    goto LAB24;

LAB28:    xsi_set_current_line(196, ng2);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB32:    goto LAB2;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

}


extern void work_a_3369420506_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3369420506_2372691052_p_0,(void *)work_a_3369420506_2372691052_p_1,(void *)work_a_3369420506_2372691052_p_2,(void *)work_a_3369420506_2372691052_p_3,(void *)work_a_3369420506_2372691052_p_4,(void *)work_a_3369420506_2372691052_p_5,(void *)work_a_3369420506_2372691052_p_6,(void *)work_a_3369420506_2372691052_p_7};
	static char *se[] = {(void *)work_a_3369420506_2372691052_sub_3797534189_4163069965};
	xsi_register_didat("work_a_3369420506_2372691052", "isim/tb_AdderSubMul_isim_beh.exe.sim/work/a_3369420506_2372691052.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
