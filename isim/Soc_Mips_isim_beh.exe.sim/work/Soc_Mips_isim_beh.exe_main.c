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
    work_m_00000000000908053650_1733832700_init();
    work_m_00000000000989333826_1211604612_init();
    work_m_00000000000729349496_2352116331_init();
    work_m_00000000001138278668_1898523838_init();
    work_m_00000000003465725071_3385901664_init();
    work_m_00000000004054176960_3461722539_init();
    work_m_00000000002241447320_4051098589_init();
    work_m_00000000002200021454_1648104263_init();
    work_m_00000000003183153106_0886308060_init();
    work_m_00000000000426358022_0753322935_init();
    work_m_00000000000135897315_3666345988_init();
    work_m_00000000002052046691_4284950183_init();
    work_m_00000000002934650137_1595836845_init();
    work_m_00000000003422549533_0530857640_init();
    work_m_00000000002226688333_3063122245_init();
    work_m_00000000004235330864_2143999898_init();
    work_m_00000000000305236330_2312822605_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000305236330_2312822605");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
