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
static const char *ng0 = "C:/FPGA/Internship Jobs/Codes/Task1/TestIPCoreGenerator/TestMul/Normalizer.vhd";
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_2271993008_1035706684(char *, char *, char *);


static void work_a_3480578342_3212880686_p_0(char *t0)
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
    int t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = (47 - 34);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 3960);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 31U);
    xsi_driver_first_trans_delta(t6, 17U, 31U, 0LL);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t11 = (34 - 47);
    t3 = (t11 * -1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t12 = *((unsigned char *)t1);
    t13 = (t12 == (unsigned char)2);
    if (t13 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(57, ng0);
    t1 = xsi_get_transient_memory(17U);
    memset(t1, 0, 17U);
    t2 = t1;
    memset(t2, (unsigned char)3, 17U);
    t6 = (t0 + 3960);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 17U);
    xsi_driver_first_trans_delta(t6, 0U, 17U, 0LL);

LAB3:    t1 = (t0 + 3848);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(55, ng0);
    t6 = xsi_get_transient_memory(17U);
    memset(t6, 0, 17U);
    t7 = t6;
    memset(t7, (unsigned char)2, 17U);
    t8 = (t0 + 3960);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 17U);
    xsi_driver_first_trans_delta(t8, 0U, 17U, 0LL);
    goto LAB3;

}

static void work_a_3480578342_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(62, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 4024);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 48U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3864);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3480578342_3212880686_p_2(char *t0)
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

LAB0:    xsi_set_current_line(64, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 6448U);
    t3 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t2, t1);
    t4 = xsi_vhdl_pow_double(2.0000000000000000, 4);
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


extern void work_a_3480578342_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3480578342_3212880686_p_0,(void *)work_a_3480578342_3212880686_p_1,(void *)work_a_3480578342_3212880686_p_2};
	xsi_register_didat("work_a_3480578342_3212880686", "isim/tb_DSPNormalizer_isim_beh.exe.sim/work/a_3480578342_3212880686.didat");
	xsi_register_executes(pe);
}
