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



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001486218969_1898523838_init();
    work_m_00000000002847727941_3385901664_init();
    work_m_00000000004054176960_3461722539_init();
    work_m_00000000000896444205_4051098589_init();
    work_m_00000000003636514044_1648104263_init();
    work_m_00000000003518436948_1491606800_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003518436948_1491606800");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
