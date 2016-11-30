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
static const char *ng0 = "C:/Users/Shao.Surface/Documents/Digital/Lab3v1/ALUCtrl.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {2U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {6U, 0U};
static int ng5[] = {2, 0};
static int ng6[] = {32, 0};
static int ng7[] = {34, 0};
static int ng8[] = {36, 0};
static unsigned int ng9[] = {0U, 0U};
static int ng10[] = {37, 0};
static unsigned int ng11[] = {1U, 0U};
static int ng12[] = {42, 0};
static unsigned int ng13[] = {7U, 0U};
static unsigned int ng14[] = {5U, 0U};



static void Always_27_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    int t9;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(30, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 3);
    goto LAB15;

LAB9:    xsi_set_current_line(31, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB15;

LAB11:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);

LAB16:    t3 = ((char*)((ng6)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 6, t3, 32);
    if (t9 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 32);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 32);
    if (t6 == 1)
        goto LAB25;

LAB26:
LAB28:
LAB27:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB29:    goto LAB15;

LAB17:    xsi_set_current_line(33, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 3);
    goto LAB29;

LAB19:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng4)));
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 3);
    goto LAB29;

LAB21:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng9)));
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 3);
    goto LAB29;

LAB23:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng11)));
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 3);
    goto LAB29;

LAB25:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng13)));
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 3);
    goto LAB29;

}


extern void work_m_00000000000426358022_0753322935_init()
{
	static char *pe[] = {(void *)Always_27_0};
	xsi_register_didat("work_m_00000000000426358022_0753322935", "isim/SocTB_isim_beh.exe.sim/work/m_00000000000426358022_0753322935.didat");
	xsi_register_executes(pe);
}
