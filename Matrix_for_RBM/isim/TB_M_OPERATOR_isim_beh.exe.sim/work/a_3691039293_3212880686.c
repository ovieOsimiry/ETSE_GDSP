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

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Taras/Documents/FPGA_current_work/BRAM_build/MEMARRAY_PCIN.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3691039293_3212880686_p_0(char *t0)
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
    int t31;
    char *t32;

LAB0:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 2312U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 10184);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(108, ng0);
    t3 = (t0 + 2512U);
    t4 = *((char **)t3);
    t3 = (t0 + 10328);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t4, 10U);
    xsi_driver_first_trans_delta(t3, 0U, 10U, 0LL);
    xsi_set_current_line(109, ng0);
    t9 = (3 - 1);
    t1 = (t0 + 20580);
    *((int *)t1) = 0;
    t3 = (t0 + 20584);
    *((int *)t3) = t9;
    t10 = 0;
    t11 = t9;

LAB5:    if (t10 <= t11)
        goto LAB6;

LAB8:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 7168U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t1 = (t0 + 7288U);
    t4 = *((char **)t1);
    t10 = *((int *)t4);
    t11 = (t9 + t10);
    t1 = (t0 + 20588);
    *((int *)t1) = 1;
    t5 = (t0 + 20592);
    *((int *)t5) = t11;
    t12 = 1;
    t13 = t11;

LAB10:    if (t12 <= t13)
        goto LAB11;

LAB13:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 5392U);
    t3 = *((char **)t1);
    t1 = (t0 + 7168U);
    t4 = *((char **)t1);
    t9 = *((int *)t4);
    t10 = (t9 - 1);
    t11 = (t10 - 0);
    t14 = (t11 * 1);
    t15 = (3U * t14);
    t16 = (0 + t15);
    t1 = (t3 + t16);
    t5 = (t0 + 10456);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t24 = *((char **)t8);
    memcpy(t24, t1, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 7168U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t1 = (t0 + 20596);
    *((int *)t1) = 1;
    t4 = (t0 + 20600);
    *((int *)t4) = t9;
    t10 = 1;
    t11 = t9;

LAB15:    if (t10 <= t11)
        goto LAB16;

LAB18:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 5872U);
    t3 = *((char **)t1);
    t1 = (t0 + 7168U);
    t4 = *((char **)t1);
    t9 = *((int *)t4);
    t10 = (t9 - 0);
    t14 = (t10 * 1);
    t15 = (10U * t14);
    t16 = (0 + t15);
    t1 = (t3 + t16);
    t5 = (t0 + 10520);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t24 = *((char **)t8);
    memcpy(t24, t1, 10U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(122, ng0);
    t1 = (t0 + 3312U);
    t3 = *((char **)t1);
    t1 = (t0 + 10584);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 3U);
    xsi_driver_first_trans_delta(t1, 0U, 3U, 0LL);
    xsi_set_current_line(123, ng0);
    t1 = (t0 + 3632U);
    t3 = *((char **)t1);
    t1 = (t0 + 10648);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 18U);
    xsi_driver_first_trans_delta(t1, 0U, 18U, 0LL);
    xsi_set_current_line(124, ng0);
    t1 = (t0 + 7048U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t10 = (t9 - 1);
    t1 = (t0 + 20604);
    *((int *)t1) = 1;
    t4 = (t0 + 20608);
    *((int *)t4) = t10;
    t11 = 1;
    t12 = t10;

LAB20:    if (t11 <= t12)
        goto LAB21;

LAB23:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 5072U);
    t3 = *((char **)t1);
    t1 = (t0 + 7048U);
    t4 = *((char **)t1);
    t9 = *((int *)t4);
    t10 = (t9 - 1);
    t11 = (t10 - 0);
    t14 = (t11 * 1);
    t15 = (18U * t14);
    t16 = (0 + t15);
    t1 = (t3 + t16);
    t5 = (t0 + 10712);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t24 = *((char **)t8);
    memcpy(t24, t1, 18U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(129, ng0);
    t1 = (t0 + 4752U);
    t3 = *((char **)t1);
    t1 = (t0 + 7048U);
    t4 = *((char **)t1);
    t9 = *((int *)t4);
    t10 = (t9 - 1);
    t11 = (t10 - 0);
    t14 = (t11 * 1);
    t15 = (3U * t14);
    t16 = (0 + t15);
    t1 = (t3 + t16);
    t5 = (t0 + 10776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t24 = *((char **)t8);
    memcpy(t24, t1, 3U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB6:    xsi_set_current_line(110, ng0);
    t4 = (t0 + 3792U);
    t5 = *((char **)t4);
    t4 = (t0 + 20580);
    t12 = *((int *)t4);
    t13 = (t12 - 2);
    t14 = (t13 * -1);
    xsi_vhdl_check_range_of_index(2, 0, -1, *((int *)t4));
    t15 = (1U * t14);
    t16 = (0 + t15);
    t6 = (t5 + t16);
    t2 = *((unsigned char *)t6);
    t7 = (t0 + 2832U);
    t8 = *((char **)t7);
    t17 = *((unsigned char *)t8);
    t18 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t2, t17);
    t7 = (t0 + 20580);
    t19 = *((int *)t7);
    t20 = (t19 - 0);
    t21 = (t20 * 1);
    t22 = (1 * t21);
    t23 = (0U + t22);
    t24 = (t0 + 10392);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = t18;
    xsi_driver_first_trans_delta(t24, t23, 1, 0LL);

LAB7:    t1 = (t0 + 20580);
    t10 = *((int *)t1);
    t3 = (t0 + 20584);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB8;

LAB9:    t9 = (t10 + 1);
    t10 = t9;
    t4 = (t0 + 20580);
    *((int *)t4) = t10;
    goto LAB5;

LAB11:    xsi_set_current_line(113, ng0);
    t6 = (t0 + 5392U);
    t7 = *((char **)t6);
    t6 = (t0 + 20588);
    t19 = *((int *)t6);
    t20 = (t19 - 1);
    t29 = (t20 - 0);
    t14 = (t29 * 1);
    xsi_vhdl_check_range_of_index(0, 6, 1, t20);
    t15 = (3U * t14);
    t16 = (0 + t15);
    t8 = (t7 + t16);
    t24 = (t0 + 20588);
    t30 = *((int *)t24);
    t31 = (t30 - 0);
    t21 = (t31 * 1);
    t22 = (3U * t21);
    t23 = (0U + t22);
    t25 = (t0 + 10392);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t32 = *((char **)t28);
    memcpy(t32, t8, 3U);
    xsi_driver_first_trans_delta(t25, t23, 3U, 0LL);

LAB12:    t1 = (t0 + 20588);
    t12 = *((int *)t1);
    t3 = (t0 + 20592);
    t13 = *((int *)t3);
    if (t12 == t13)
        goto LAB13;

LAB14:    t9 = (t12 + 1);
    t12 = t9;
    t4 = (t0 + 20588);
    *((int *)t4) = t12;
    goto LAB10;

LAB16:    xsi_set_current_line(118, ng0);
    t5 = (t0 + 5872U);
    t6 = *((char **)t5);
    t5 = (t0 + 20596);
    t12 = *((int *)t5);
    t13 = (t12 - 1);
    t19 = (t13 - 0);
    t14 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 6, 1, t13);
    t15 = (10U * t14);
    t16 = (0 + t15);
    t7 = (t6 + t16);
    t8 = (t0 + 20596);
    t20 = *((int *)t8);
    t29 = (t20 - 0);
    t21 = (t29 * 1);
    t22 = (10U * t21);
    t23 = (0U + t22);
    t24 = (t0 + 10328);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t7, 10U);
    xsi_driver_first_trans_delta(t24, t23, 10U, 0LL);

LAB17:    t1 = (t0 + 20596);
    t10 = *((int *)t1);
    t3 = (t0 + 20600);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB18;

LAB19:    t9 = (t10 + 1);
    t10 = t9;
    t4 = (t0 + 20596);
    *((int *)t4) = t10;
    goto LAB15;

LAB21:    xsi_set_current_line(125, ng0);
    t5 = (t0 + 5072U);
    t6 = *((char **)t5);
    t5 = (t0 + 20604);
    t13 = *((int *)t5);
    t19 = (t13 - 1);
    t20 = (t19 - 0);
    t14 = (t20 * 1);
    xsi_vhdl_check_range_of_index(0, 1, 1, t19);
    t15 = (18U * t14);
    t16 = (0 + t15);
    t7 = (t6 + t16);
    t8 = (t0 + 20604);
    t29 = *((int *)t8);
    t30 = (t29 - 0);
    t21 = (t30 * 1);
    t22 = (18U * t21);
    t23 = (0U + t22);
    t24 = (t0 + 10648);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t7, 18U);
    xsi_driver_first_trans_delta(t24, t23, 18U, 0LL);
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 4752U);
    t3 = *((char **)t1);
    t1 = (t0 + 20604);
    t9 = *((int *)t1);
    t10 = (t9 - 1);
    t13 = (t10 - 0);
    t14 = (t13 * 1);
    xsi_vhdl_check_range_of_index(0, 1, 1, t10);
    t15 = (3U * t14);
    t16 = (0 + t15);
    t4 = (t3 + t16);
    t5 = (t0 + 20604);
    t19 = *((int *)t5);
    t20 = (t19 - 0);
    t21 = (t20 * 1);
    t22 = (3U * t21);
    t23 = (0U + t22);
    t6 = (t0 + 10584);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t24 = (t8 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t4, 3U);
    xsi_driver_first_trans_delta(t6, t23, 3U, 0LL);

LAB22:    t1 = (t0 + 20604);
    t11 = *((int *)t1);
    t3 = (t0 + 20608);
    t12 = *((int *)t3);
    if (t11 == t12)
        goto LAB23;

LAB24:    t9 = (t11 + 1);
    t11 = t9;
    t4 = (t0 + 20604);
    *((int *)t4) = t11;
    goto LAB20;

}

static void work_a_3691039293_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(135, ng0);

LAB3:    t1 = (t0 + 4432U);
    t2 = *((char **)t1);
    t3 = (48 - 1);
    t4 = (18 - 1);
    t5 = (t3 - t4);
    t6 = (t5 * 1U);
    t1 = (t0 + 7408U);
    t7 = *((char **)t1);
    t8 = *((int *)t7);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    t11 = (48U * t10);
    t12 = (0 + t11);
    t13 = (t12 + t6);
    t1 = (t2 + t13);
    t14 = (t0 + 10840);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t1, 18U);
    xsi_driver_first_trans_delta(t14, 0U, 18U, 0LL);

LAB2:    t19 = (t0 + 10200);
    *((int *)t19) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3691039293_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(135, ng0);

LAB3:    t1 = (t0 + 4432U);
    t2 = *((char **)t1);
    t3 = (48 - 1);
    t4 = (18 - 1);
    t5 = (t3 - t4);
    t6 = (t5 * 1U);
    t1 = (t0 + 7528U);
    t7 = *((char **)t1);
    t8 = *((int *)t7);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    t11 = (48U * t10);
    t12 = (0 + t11);
    t13 = (t12 + t6);
    t1 = (t2 + t13);
    t14 = (t0 + 10904);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t1, 18U);
    xsi_driver_first_trans_delta(t14, 18U, 18U, 0LL);

LAB2:    t19 = (t0 + 10216);
    *((int *)t19) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3691039293_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(135, ng0);

LAB3:    t1 = (t0 + 4432U);
    t2 = *((char **)t1);
    t3 = (48 - 1);
    t4 = (18 - 1);
    t5 = (t3 - t4);
    t6 = (t5 * 1U);
    t1 = (t0 + 7648U);
    t7 = *((char **)t1);
    t8 = *((int *)t7);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    t11 = (48U * t10);
    t12 = (0 + t11);
    t13 = (t12 + t6);
    t1 = (t2 + t13);
    t14 = (t0 + 10968);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t1, 18U);
    xsi_driver_first_trans_delta(t14, 36U, 18U, 0LL);

LAB2:    t19 = (t0 + 10232);
    *((int *)t19) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3691039293_3212880686_p_4(char *t0)
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

LAB0:    xsi_set_current_line(176, ng0);

LAB3:    t1 = (t0 + 4432U);
    t2 = *((char **)t1);
    t3 = (48 - 1);
    t4 = (18 - 1);
    t5 = (t3 - t4);
    t6 = (t5 * 1U);
    t7 = (3 - 1);
    t8 = (t7 - 0);
    t9 = (t8 * 1);
    t10 = (48U * t9);
    t11 = (0 + t10);
    t12 = (t11 + t6);
    t1 = (t2 + t12);
    t13 = (t0 + 11032);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t1, 18U);
    xsi_driver_first_trans_fast_port(t13);

LAB2:    t18 = (t0 + 10248);
    *((int *)t18) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3691039293_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3691039293_3212880686_p_0,(void *)work_a_3691039293_3212880686_p_1,(void *)work_a_3691039293_3212880686_p_2,(void *)work_a_3691039293_3212880686_p_3,(void *)work_a_3691039293_3212880686_p_4};
	xsi_register_didat("work_a_3691039293_3212880686", "isim/TB_M_OPERATOR_isim_beh.exe.sim/work/a_3691039293_3212880686.didat");
	xsi_register_executes(pe);
}
