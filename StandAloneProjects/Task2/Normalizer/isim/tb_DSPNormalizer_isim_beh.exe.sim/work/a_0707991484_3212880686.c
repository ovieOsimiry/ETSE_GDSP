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
static const char *ng0 = "C:/FPGA/Internship Jobs/Codes/ETSE_GDSP/StandAloneProjects/Task2/Normalizer/Normalizer.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_2271993008_1035706684(char *, char *, char *);
char *ieee_p_2592010699_sub_3293060193_503743352(char *, char *, char *, char *, unsigned char );
char *ieee_p_2592010699_sub_393209765_503743352(char *, char *, char *, char *);


static void work_a_0707991484_3212880686_p_0(char *t0)
{
    char t1[16];
    char t2[16];
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(61, ng0);

LAB3:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t3 = (t0 + 6564U);
    t5 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t2, t4, t3, (unsigned char)0);
    t6 = (t2 + 12U);
    t7 = *((unsigned int *)t6);
    t7 = (t7 * 1U);
    t8 = xsi_vhdl_bitvec_sra(t8, t5, t7, 15);
    t9 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t1, t8, t2);
    t10 = (t1 + 12U);
    t11 = *((unsigned int *)t10);
    t11 = (t11 * 1U);
    t12 = (48U != t11);
    if (t12 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 3960);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t9, 48U);
    xsi_driver_first_trans_fast(t13);

LAB2:    t18 = (t0 + 3848);
    *((int *)t18) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(48U, t11, 0);
    goto LAB6;

}

static void work_a_0707991484_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(63, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = (47 - 17);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 4024);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 18U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 3864);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0707991484_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    double t4;
    double t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(65, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 6596U);
    t3 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t2, t1);
    t4 = xsi_vhdl_pow_double(2.0000000000000000, 15);
    t5 = ((((double)(t3))) / t4);
    t6 = (t0 + 4088);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((double *)t10) = t5;
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 3880);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0707991484_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0707991484_3212880686_p_0,(void *)work_a_0707991484_3212880686_p_1,(void *)work_a_0707991484_3212880686_p_2};
	xsi_register_didat("work_a_0707991484_3212880686", "isim/tb_DSPNormalizer_isim_beh.exe.sim/work/a_0707991484_3212880686.didat");
	xsi_register_executes(pe);
}
