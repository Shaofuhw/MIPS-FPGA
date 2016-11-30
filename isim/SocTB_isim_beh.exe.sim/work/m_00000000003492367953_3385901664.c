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
static const char *ng0 = "C:/Users/Shao.Surface/Documents/Digital/Lab3v4/Registers.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Always_34_0(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
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
    char *t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 6096);
    *((int *)t2) = 1;
    t3 = (t0 + 4568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 2256U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(36, ng0);
    xsi_set_current_line(36, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3296);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB8:    t2 = (t0 + 3296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 608);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t11, 32);
    t5 = (t13 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    goto LAB7;

LAB9:    xsi_set_current_line(37, ng0);
    t12 = ((char*)((ng1)));
    t14 = (t0 + 3136);
    t17 = (t0 + 3136);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3136);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3296);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 3296);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB8;

LAB11:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t14, t12, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB12;

}

static void Always_39_1(char *t0)
{
    char t13[8];
    char t14[8];
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    int t24;
    char *t25;
    unsigned int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;

LAB0:    t1 = (t0 + 4784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 6112);
    *((int *)t2) = 1;
    t3 = (t0 + 4816);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 2416U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(41, ng0);
    t11 = (t0 + 1936U);
    t12 = *((char **)t11);
    t11 = (t0 + 3136);
    t15 = (t0 + 3136);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 3136);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 1776U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t13, t14, t17, t20, 2, 1, t22, 3, 2);
    t21 = (t13 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (!(t23));
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB8;

LAB9:    goto LAB7;

LAB8:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t14);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB9;

}

static void Always_43_2(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 6128);
    *((int *)t2) = 1;
    t3 = (t0 + 5064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 1456U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB8:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3136);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 3136);
    t22 = (t21 + 64U);
    t28 = *((char **)t22);
    t29 = (t0 + 1456U);
    t30 = *((char **)t29);
    xsi_vlog_generic_get_array_select_value(t6, 8, t4, t8, t28, 2, 1, t30, 3, 2);
    t29 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t29, t6, 0, 0, 8, 0LL);

LAB11:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(45, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 8, 0LL);
    goto LAB11;

}

static void Always_49_3(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 5280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 6144);
    *((int *)t2) = 1;
    t3 = (t0 + 5312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 1616U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB8:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3136);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 3136);
    t22 = (t21 + 64U);
    t28 = *((char **)t22);
    t29 = (t0 + 1616U);
    t30 = *((char **)t29);
    xsi_vlog_generic_get_array_select_value(t6, 8, t4, t8, t28, 2, 1, t30, 3, 2);
    t29 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t29, t6, 0, 0, 8, 0LL);

LAB11:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(51, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 8, 0LL);
    goto LAB11;

}

static void impl1_execute(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 5528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 6160);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t3 = (t0 + 3456);
    t4 = (t0 + 3136);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 3136);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 3136);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 1456U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t7, 8, t6, t10, t13, 2, 1, t15, 3, 2);
    xsi_vlogimplicitvar_assign_value(t3, t7, 8);
    goto LAB2;

}

static void impl2_execute(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 5776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 6176);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t3 = (t0 + 3616);
    t4 = (t0 + 3136);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 3136);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 3136);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 1616U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t7, 8, t6, t10, t13, 2, 1, t15, 3, 2);
    xsi_vlogimplicitvar_assign_value(t3, t7, 8);
    goto LAB2;

}


extern void work_m_00000000003492367953_3385901664_init()
{
	static char *pe[] = {(void *)Always_34_0,(void *)Always_39_1,(void *)Always_43_2,(void *)Always_49_3,(void *)impl1_execute,(void *)impl2_execute};
	xsi_register_didat("work_m_00000000003492367953_3385901664", "isim/SocTB_isim_beh.exe.sim/work/m_00000000003492367953_3385901664.didat");
	xsi_register_executes(pe);
}
