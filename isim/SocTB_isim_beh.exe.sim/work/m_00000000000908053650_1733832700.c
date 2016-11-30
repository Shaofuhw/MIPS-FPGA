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
static const char *ng0 = "C:/Users/Shao.Surface/Documents/Digital/Lab3v4/PC.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Always_28_0(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 2984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3304);
    *((int *)t2) = 1;
    t3 = (t0 + 3016);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB11;

LAB8:    if (t18 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t13) = 1;

LAB11:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB12;

LAB13:
LAB14:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(30, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2064);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 6);
    goto LAB7;

LAB10:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB11;

LAB12:    xsi_set_current_line(32, ng0);
    t26 = (t0 + 1664U);
    t27 = *((char **)t26);
    t26 = (t0 + 2064);
    xsi_vlogvar_assign_value(t26, t27, 0, 0, 6);
    goto LAB14;

}


extern void work_m_00000000000908053650_1733832700_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_00000000000908053650_1733832700", "isim/SocTB_isim_beh.exe.sim/work/m_00000000000908053650_1733832700.didat");
	xsi_register_executes(pe);
}
