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
static const char *ng0 = "C:/Users/Taras/Documents/FPGA_current_work/BRAM_build/TB_M_OPERATOR.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_2563015576_1035706684(char *, char *, int , int );


static void work_a_0691590294_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 4736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3088U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3880);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 4736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3088U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3880);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_0691590294_2372691052_p_1(char *t0)
{
    char t13[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;
    char *t9;
    char *t10;
    int t11;
    int t12;
    int t14;
    int t15;
    char *t16;
    char *t17;
    unsigned char t18;
    unsigned char t19;

LAB0:    t1 = (t0 + 4320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 4800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(91, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 4800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3088U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 * 10);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 8068);
    t4 = (t0 + 4864);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 8073);
    *((int *)t2) = 1;
    t3 = (t0 + 8077);
    *((int *)t3) = 10;
    t11 = 1;
    t12 = 10;

LAB12:    if (t11 <= t12)
        goto LAB13;

LAB15:    xsi_set_current_line(99, ng0);

LAB23:    t2 = (t0 + 4640);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB13:    xsi_set_current_line(96, ng0);
    t4 = (t0 + 8073);
    t14 = *((int *)t4);
    t15 = (t14 + 9);
    t5 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t13, t15, 18);
    t6 = (t0 + 4928);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 18U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3088U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t7);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB14:    t2 = (t0 + 8073);
    t11 = *((int *)t2);
    t3 = (t0 + 8077);
    t12 = *((int *)t3);
    if (t11 == t12)
        goto LAB15;

LAB20:    t14 = (t11 + 1);
    t11 = t14;
    t4 = (t0 + 8073);
    *((int *)t4) = t11;
    goto LAB12;

LAB16:    goto LAB14;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB21:    t3 = (t0 + 4640);
    *((int *)t3) = 0;
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 3088U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 * 10);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t8);

LAB27:    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB22:    t3 = (t0 + 2312U);
    t4 = *((char **)t3);
    t18 = *((unsigned char *)t4);
    t19 = (t18 == (unsigned char)2);
    if (t19 == 1)
        goto LAB21;
    else
        goto LAB23;

LAB24:    goto LAB22;

LAB25:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 4800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3088U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 * 1);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t8);

LAB31:    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB26:    goto LAB25;

LAB28:    goto LAB26;

LAB29:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 4800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 8081);
    t4 = (t0 + 4864);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(105, ng0);

LAB35:    t2 = (t0 + 4656);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB30:    goto LAB29;

LAB32:    goto LAB30;

LAB33:    t3 = (t0 + 4656);
    *((int *)t3) = 0;
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 3088U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 * 10);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t8);

LAB39:    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB34:    t3 = (t0 + 2312U);
    t4 = *((char **)t3);
    t18 = *((unsigned char *)t4);
    t19 = (t18 == (unsigned char)2);
    if (t19 == 1)
        goto LAB33;
    else
        goto LAB35;

LAB36:    goto LAB34;

LAB37:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 3088U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 * 20);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t8);

LAB43:    *((char **)t1) = &&LAB44;
    goto LAB1;

LAB38:    goto LAB37;

LAB40:    goto LAB38;

LAB41:    xsi_set_current_line(110, ng0);
    if ((unsigned char)0 == 0)
        goto LAB45;

LAB46:    xsi_set_current_line(111, ng0);

LAB49:    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB42:    goto LAB41;

LAB44:    goto LAB42;

LAB45:    t2 = (t0 + 8086);
    xsi_report(t2, 20U, (unsigned char)3);
    goto LAB46;

LAB47:    goto LAB2;

LAB48:    goto LAB47;

LAB50:    goto LAB48;

}


extern void work_a_0691590294_2372691052_init()
{
	static char *pe[] = {(void *)work_a_0691590294_2372691052_p_0,(void *)work_a_0691590294_2372691052_p_1};
	xsi_register_didat("work_a_0691590294_2372691052", "isim/TB_M_OPERATOR_isim_beh.exe.sim/work/a_0691590294_2372691052.didat");
	xsi_register_executes(pe);
}
