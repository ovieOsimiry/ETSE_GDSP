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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_1242562249;
char *STD_TEXTIO;
char *WORK_P_4054474977;
char *IEEE_P_3499444699;
char *IEEE_P_0774719531;
char *XILINXCORELIB_P_1837083571;
char *XILINXCORELIB_P_3381355550;
char *XILINXCORELIB_P_3155556343;
char *XILINXCORELIB_P_1521474790;
char *XILINXCORELIB_P_3743709326;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_1242562249_init();
    std_textio_init();
    work_p_4054474977_init();
    work_a_0699909074_3212880686_init();
    ieee_p_3499444699_init();
    ieee_p_0774719531_init();
    xilinxcorelib_p_1837083571_init();
    xilinxcorelib_p_3381355550_init();
    xilinxcorelib_p_3155556343_init();
    xilinxcorelib_p_1521474790_init();
    xilinxcorelib_p_3743709326_init();
    xilinxcorelib_a_1836722241_3212880686_init();
    xilinxcorelib_a_2995454174_3212880686_init();
    xilinxcorelib_a_4138043366_3212880686_init();
    xilinxcorelib_a_0693415801_3212880686_init();
    xilinxcorelib_a_1593677514_3212880686_init();
    xilinxcorelib_a_2165096021_3212880686_init();
    xilinxcorelib_a_0298167591_3212880686_init();
    xilinxcorelib_a_3459548600_3212880686_init();
    xilinxcorelib_a_4034251063_3212880686_init();
    xilinxcorelib_a_0797237672_3212880686_init();
    xilinxcorelib_a_0032241033_3212880686_init();
    xilinxcorelib_a_3832891135_3212880686_init();
    xilinxcorelib_a_3287447484_3212880686_init();
    xilinxcorelib_a_0469983011_3212880686_init();
    xilinxcorelib_a_0142782301_3212880686_init();
    work_a_1003061754_0337703906_init();
    work_a_2074650134_2372691052_init();


    xsi_register_tops("work_a_2074650134_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    WORK_P_4054474977 = xsi_get_engine_memory("work_p_4054474977");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_0774719531 = xsi_get_engine_memory("ieee_p_0774719531");
    XILINXCORELIB_P_1837083571 = xsi_get_engine_memory("xilinxcorelib_p_1837083571");
    XILINXCORELIB_P_3381355550 = xsi_get_engine_memory("xilinxcorelib_p_3381355550");
    XILINXCORELIB_P_3155556343 = xsi_get_engine_memory("xilinxcorelib_p_3155556343");
    XILINXCORELIB_P_1521474790 = xsi_get_engine_memory("xilinxcorelib_p_1521474790");
    XILINXCORELIB_P_3743709326 = xsi_get_engine_memory("xilinxcorelib_p_3743709326");

    return xsi_run_simulation(argc, argv);

}
