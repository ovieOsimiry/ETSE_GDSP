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
static const char *ng0 = "C:/FPGA/Internship Jobs/Codes/ETSE_GDSP/Matrix_for_RBM/TB_MEMARRAY_V3.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
char *ieee_p_1242562249_sub_2563015576_1035706684(char *, char *, int , int );


static void work_a_0735452067_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 5112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 5744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 4008U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 4920);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 5744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 4008U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 4920);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_0735452067_2372691052_p_1(char *t0)
{
    char t8[16];
    char t10[16];
    char t15[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    char *t9;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    char *t16;
    int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    int64 t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;

LAB0:    t1 = (t0 + 5360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 5808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(119, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 5168);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 5808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 5872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 9865);
    t4 = (t0 + 9867);
    t9 = ((IEEE_P_2592010699) + 4024);
    t11 = (t10 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 0;
    t12 = (t11 + 4U);
    *((int *)t12) = 1;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t13 = (1 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t12 = (t15 + 0U);
    t16 = (t12 + 0U);
    *((int *)t16) = 0;
    t16 = (t12 + 4U);
    *((int *)t16) = 7;
    t16 = (t12 + 8U);
    *((int *)t16) = 1;
    t17 = (7 - 0);
    t14 = (t17 * 1);
    t14 = (t14 + 1);
    t16 = (t12 + 12U);
    *((unsigned int *)t16) = t14;
    t6 = xsi_base_array_concat(t6, t8, t9, (char)97, t2, t10, (char)97, t4, t15, (char)101);
    t14 = (2U + 8U);
    t18 = (10U != t14);
    if (t18 == 1)
        goto LAB8;

LAB9:    t16 = (t0 + 5936);
    t19 = (t16 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t6, 10U);
    xsi_driver_first_trans_fast(t16);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 6000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 4008U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t23 = (t7 * 1.5000000000000000);
    t2 = (t0 + 5168);
    xsi_process_wait(t2, t23);

LAB12:    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_size_not_matching(10U, t14, 0);
    goto LAB9;

LAB10:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 9875);
    *((int *)t2) = 1;
    t3 = (t0 + 9879);
    *((int *)t3) = 5;
    t13 = 1;
    t17 = 5;

LAB14:    if (t13 <= t17)
        goto LAB15;

LAB17:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 4008U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 5168);
    xsi_process_wait(t2, t7);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB11:    goto LAB10;

LAB13:    goto LAB11;

LAB15:    xsi_set_current_line(132, ng0);
    t4 = (t0 + 9883);
    *((int *)t4) = 1;
    t5 = (t0 + 9887);
    *((int *)t5) = 5;
    t24 = 1;
    t25 = 5;

LAB18:    if (t24 <= t25)
        goto LAB19;

LAB21:
LAB16:    t2 = (t0 + 9875);
    t13 = *((int *)t2);
    t3 = (t0 + 9879);
    t17 = *((int *)t3);
    if (t13 == t17)
        goto LAB17;

LAB27:    t24 = (t13 + 1);
    t13 = t24;
    t4 = (t0 + 9875);
    *((int *)t4) = t13;
    goto LAB14;

LAB19:    xsi_set_current_line(133, ng0);
    t6 = (t0 + 9875);
    t26 = *((int *)t6);
    t27 = (t26 * 10);
    t9 = (t0 + 9883);
    t28 = *((int *)t9);
    t29 = (t27 + t28);
    t11 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t8, t29, 18);
    t12 = (t0 + 6064);
    t16 = (t12 + 56U);
    t19 = *((char **)t16);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t11, 18U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 4008U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 5168);
    xsi_process_wait(t2, t7);

LAB24:    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB20:    t2 = (t0 + 9883);
    t24 = *((int *)t2);
    t3 = (t0 + 9887);
    t25 = *((int *)t3);
    if (t24 == t25)
        goto LAB21;

LAB26:    t26 = (t24 + 1);
    t24 = t26;
    t4 = (t0 + 9883);
    *((int *)t4) = t24;
    goto LAB18;

LAB22:    goto LAB20;

LAB23:    goto LAB22;

LAB25:    goto LAB23;

LAB28:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 4008U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t23 = (t7 * 10);
    t2 = (t0 + 5168);
    xsi_process_wait(t2, t23);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB32:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 9891);
    *((int *)t2) = 1;
    t3 = (t0 + 9895);
    *((int *)t3) = 5;
    t13 = 1;
    t17 = 5;

LAB36:    if (t13 <= t17)
        goto LAB37;

LAB39:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 4008U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t23 = (t7 * 5);
    t2 = (t0 + 5168);
    xsi_process_wait(t2, t23);

LAB47:    *((char **)t1) = &&LAB48;
    goto LAB1;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

LAB37:    xsi_set_current_line(146, ng0);
    t4 = (t0 + 9891);
    t24 = *((int *)t4);
    t25 = (t24 - 1);
    t5 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t8, t25, 10);
    t6 = (t0 + 5936);
    t9 = (t6 + 56U);
    t11 = *((char **)t9);
    t12 = (t11 + 56U);
    t16 = *((char **)t12);
    memcpy(t16, t5, 10U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 4008U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 5168);
    xsi_process_wait(t2, t7);

LAB42:    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB38:    t2 = (t0 + 9891);
    t13 = *((int *)t2);
    t3 = (t0 + 9895);
    t17 = *((int *)t3);
    if (t13 == t17)
        goto LAB39;

LAB44:    t24 = (t13 + 1);
    t13 = t24;
    t4 = (t0 + 9891);
    *((int *)t4) = t13;
    goto LAB36;

LAB40:    goto LAB38;

LAB41:    goto LAB40;

LAB43:    goto LAB41;

LAB45:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 6000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 4008U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 5168);
    xsi_process_wait(t2, t7);

LAB51:    *((char **)t1) = &&LAB52;
    goto LAB1;

LAB46:    goto LAB45;

LAB48:    goto LAB46;

LAB49:    xsi_set_current_line(156, ng0);
    t2 = (t0 + 4008U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t23 = (t7 * 10);
    t2 = (t0 + 5168);
    xsi_process_wait(t2, t23);

LAB55:    *((char **)t1) = &&LAB56;
    goto LAB1;

LAB50:    goto LAB49;

LAB52:    goto LAB50;

LAB53:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 9899);
    *((int *)t2) = 1;
    t3 = (t0 + 9903);
    *((int *)t3) = 5;
    t13 = 1;
    t17 = 5;

LAB57:    if (t13 <= t17)
        goto LAB58;

LAB60:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 4008U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t23 = (t7 * 5);
    t2 = (t0 + 5168);
    xsi_process_wait(t2, t23);

LAB68:    *((char **)t1) = &&LAB69;
    goto LAB1;

LAB54:    goto LAB53;

LAB56:    goto LAB54;

LAB58:    xsi_set_current_line(159, ng0);
    t4 = (t0 + 9899);
    t24 = *((int *)t4);
    t25 = (t24 - 1);
    t5 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t8, t25, 10);
    t6 = (t0 + 5936);
    t9 = (t6 + 56U);
    t11 = *((char **)t9);
    t12 = (t11 + 56U);
    t16 = *((char **)t12);
    memcpy(t16, t5, 10U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 4008U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 5168);
    xsi_process_wait(t2, t7);

LAB63:    *((char **)t1) = &&LAB64;
    goto LAB1;

LAB59:    t2 = (t0 + 9899);
    t13 = *((int *)t2);
    t3 = (t0 + 9903);
    t17 = *((int *)t3);
    if (t13 == t17)
        goto LAB60;

LAB65:    t24 = (t13 + 1);
    t13 = t24;
    t4 = (t0 + 9899);
    *((int *)t4) = t13;
    goto LAB57;

LAB61:    goto LAB59;

LAB62:    goto LAB61;

LAB64:    goto LAB62;

LAB66:    xsi_set_current_line(165, ng0);

LAB72:    *((char **)t1) = &&LAB73;
    goto LAB1;

LAB67:    goto LAB66;

LAB69:    goto LAB67;

LAB70:    goto LAB2;

LAB71:    goto LAB70;

LAB73:    goto LAB71;

}


extern void work_a_0735452067_2372691052_init()
{
	static char *pe[] = {(void *)work_a_0735452067_2372691052_p_0,(void *)work_a_0735452067_2372691052_p_1};
	xsi_register_didat("work_a_0735452067_2372691052", "isim/TB_MEMARRAY_V3_isim_beh.exe.sim/work/a_0735452067_2372691052.didat");
	xsi_register_executes(pe);
}
