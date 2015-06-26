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
char *STD_TEXTIO;
char *IEEE_P_3499444699;
char *IEEE_P_3620187407;
char *IEEE_P_0774719531;
char *IEEE_P_1242562249;
char *XILINXCORELIB_P_1837083571;
char *XILINXCORELIB_P_3381355550;
char *XILINXCORELIB_P_3155556343;
char *XILINXCORELIB_P_1521474790;
char *IEEE_P_3564397177;
char *XILINXCORELIB_P_3743709326;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_1242562249_init();
    std_textio_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    ieee_p_3564397177_init();
    xilinxcorelib_a_2806565182_2959432447_init();
    xilinxcorelib_a_3078020594_2959432447_init();
    xilinxcorelib_a_0143741456_1709443946_init();
    xilinxcorelib_a_1208185933_0543512595_init();
    xilinxcorelib_a_2140771369_3212880686_init();
    work_a_2282909094_4258264813_init();
    work_a_4265544349_3212880686_init();
    work_a_1068619101_3212880686_init();
    work_a_2790503260_3212880686_init();
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
    xilinxcorelib_a_0794577273_3212880686_init();
    work_a_4163148988_0134332017_init();
    work_a_3691039293_3212880686_init();
    work_a_1762641598_3212880686_init();
    work_a_0691590294_2372691052_init();


    xsi_register_tops("work_a_0691590294_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    IEEE_P_0774719531 = xsi_get_engine_memory("ieee_p_0774719531");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    XILINXCORELIB_P_1837083571 = xsi_get_engine_memory("xilinxcorelib_p_1837083571");
    XILINXCORELIB_P_3381355550 = xsi_get_engine_memory("xilinxcorelib_p_3381355550");
    XILINXCORELIB_P_3155556343 = xsi_get_engine_memory("xilinxcorelib_p_3155556343");
    XILINXCORELIB_P_1521474790 = xsi_get_engine_memory("xilinxcorelib_p_1521474790");
    IEEE_P_3564397177 = xsi_get_engine_memory("ieee_p_3564397177");
    XILINXCORELIB_P_3743709326 = xsi_get_engine_memory("xilinxcorelib_p_3743709326");

    return xsi_run_simulation(argc, argv);

}
