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
static const char *ng0 = "C:/Users/Shao.Surface/Documents/Digital/Lab3v2/Soc_Mips.v";
static int ng1[] = {0, 0, 0, 0};
static int ng2[] = {37, 0};
static int ng3[] = {32, 0};
static int ng4[] = {31, 0};
static int ng5[] = {0, 0};
static int ng6[] = {44, 0};
static int ng7[] = {36, 0};
static int ng8[] = {35, 0};
static int ng9[] = {30, 0};
static int ng10[] = {29, 0};
static int ng11[] = {22, 0};
static int ng12[] = {21, 0};
static int ng13[] = {14, 0};
static int ng14[] = {13, 0};
static int ng15[] = {6, 0};
static int ng16[] = {5, 0};
static int ng17[] = {3, 0};
static int ng18[] = {2, 0};
static int ng19[] = {26, 0};
static int ng20[] = {25, 0};
static int ng21[] = {20, 0};
static int ng22[] = {19, 0};
static int ng23[] = {18, 0};
static int ng24[] = {11, 0};
static int ng25[] = {10, 0};



static void Cont_75_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 8976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 4296U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 21);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 21);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 31U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 31U);
    t12 = (t0 + 10696);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 31U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 4);
    t25 = (t0 + 10536);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_76_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 9224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 4296U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 16);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 16);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 31U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 31U);
    t12 = (t0 + 10760);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 31U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 4);
    t25 = (t0 + 10552);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Always_78_2(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
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
    char *t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    int t21;
    char *t22;
    int t23;
    int t24;
    int t25;
    unsigned int t26;
    int t27;
    int t28;

LAB0:    t1 = (t0 + 9472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 10568);
    *((int *)t2) = 1;
    t3 = (t0 + 9504);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(79, ng0);
    t4 = (t0 + 3656U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(82, ng0);

LAB8:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 4456U);
    t3 = *((char **)t2);
    t2 = (t0 + 7576);
    t4 = (t0 + 7576);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng2)));
    t16 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t11)), 2, t12, 32, 1, t16, 32, 1);
    t17 = (t13 + 4);
    t6 = *((unsigned int *)t17);
    t18 = (!(t6));
    t19 = (t14 + 4);
    t7 = *((unsigned int *)t19);
    t20 = (!(t7));
    t21 = (t18 && t20);
    t22 = (t15 + 4);
    t8 = *((unsigned int *)t22);
    t23 = (!(t8));
    t24 = (t21 && t23);
    if (t24 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 4296U);
    t3 = *((char **)t2);
    t2 = (t0 + 7576);
    t4 = (t0 + 7576);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng4)));
    t16 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t11)), 2, t12, 32, 1, t16, 32, 1);
    t17 = (t13 + 4);
    t6 = *((unsigned int *)t17);
    t18 = (!(t6));
    t19 = (t14 + 4);
    t7 = *((unsigned int *)t19);
    t20 = (!(t7));
    t21 = (t18 && t20);
    t22 = (t15 + 4);
    t8 = *((unsigned int *)t22);
    t23 = (!(t8));
    t24 = (t21 && t23);
    if (t24 == 1)
        goto LAB11;

LAB12:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(80, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 7576);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 38, 0LL);
    goto LAB7;

LAB9:    t9 = *((unsigned int *)t15);
    t25 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t26 = *((unsigned int *)t14);
    t27 = (t10 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t25, *((unsigned int *)t14), t28, 0LL);
    goto LAB10;

LAB11:    t9 = *((unsigned int *)t15);
    t25 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t26 = *((unsigned int *)t14);
    t27 = (t10 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t25, *((unsigned int *)t14), t28, 0LL);
    goto LAB12;

}

static void Always_107_3(char *t0)
{
    char t13[8];
    char t15[8];
    char t21[8];
    char t22[8];
    char t23[8];
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
    char *t16;
    char *t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    int t31;
    char *t32;
    unsigned int t33;
    int t34;
    int t35;
    char *t36;
    unsigned int t37;
    int t38;
    int t39;
    unsigned int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    int t44;
    int t45;

LAB0:    t1 = (t0 + 9720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 10584);
    *((int *)t2) = 1;
    t3 = (t0 + 9752);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(108, ng0);
    t4 = (t0 + 3656U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(111, ng0);

LAB8:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 6376U);
    t3 = *((char **)t2);
    t2 = (t0 + 4136U);
    t4 = *((char **)t2);
    t2 = (t0 + 3976U);
    t5 = *((char **)t2);
    t2 = (t0 + 3816U);
    t11 = *((char **)t2);
    t2 = (t0 + 6536U);
    t12 = *((char **)t2);
    t2 = (t0 + 6216U);
    t14 = *((char **)t2);
    t2 = (t0 + 6696U);
    t16 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t15 + 4);
    t17 = (t16 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t17);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 3U);
    t18 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t18 & 3U);
    t19 = (t0 + 7176U);
    t20 = *((char **)t19);
    xsi_vlogtype_concat(t13, 9, 9, 8U, t20, 1, t15, 2, t14, 1, t12, 1, t11, 1, t5, 1, t4, 1, t3, 1);
    t19 = (t0 + 7736);
    t24 = (t0 + 7736);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng6)));
    t28 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t21, t22, t23, ((int*)(t26)), 2, t27, 32, 1, t28, 32, 1);
    t29 = (t21 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t22 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    t35 = (t31 && t34);
    t36 = (t23 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (!(t37));
    t39 = (t35 && t38);
    if (t39 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 7576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 8);
    t12 = (t4 + 12);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 63U);
    t18 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t18 & 63U);
    t14 = (t0 + 7736);
    t16 = (t0 + 7736);
    t17 = (t16 + 72U);
    t19 = *((char **)t17);
    t20 = ((char*)((ng8)));
    t24 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t15, t21, t22, ((int*)(t19)), 2, t20, 32, 1, t24, 32, 1);
    t25 = (t15 + 4);
    t30 = *((unsigned int *)t25);
    t31 = (!(t30));
    t26 = (t21 + 4);
    t33 = *((unsigned int *)t26);
    t34 = (!(t33));
    t35 = (t31 && t34);
    t27 = (t22 + 4);
    t37 = *((unsigned int *)t27);
    t38 = (!(t37));
    t39 = (t35 && t38);
    if (t39 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 5256U);
    t3 = *((char **)t2);
    t2 = (t0 + 7736);
    t4 = (t0 + 7736);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng10)));
    t14 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t13, t15, t21, ((int*)(t11)), 2, t12, 32, 1, t14, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t31 = (!(t6));
    t17 = (t15 + 4);
    t7 = *((unsigned int *)t17);
    t34 = (!(t7));
    t35 = (t31 && t34);
    t19 = (t21 + 4);
    t8 = *((unsigned int *)t19);
    t38 = (!(t8));
    t39 = (t35 && t38);
    if (t39 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 5416U);
    t3 = *((char **)t2);
    t2 = (t0 + 7736);
    t4 = (t0 + 7736);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng12)));
    t14 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t13, t15, t21, ((int*)(t11)), 2, t12, 32, 1, t14, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t31 = (!(t6));
    t17 = (t15 + 4);
    t7 = *((unsigned int *)t17);
    t34 = (!(t7));
    t35 = (t31 && t34);
    t19 = (t21 + 4);
    t8 = *((unsigned int *)t19);
    t38 = (!(t8));
    t39 = (t35 && t38);
    if (t39 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 7016U);
    t3 = *((char **)t2);
    t2 = (t0 + 7736);
    t4 = (t0 + 7736);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng14)));
    t14 = ((char*)((ng15)));
    xsi_vlog_convert_partindices(t13, t15, t21, ((int*)(t11)), 2, t12, 32, 1, t14, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t31 = (!(t6));
    t17 = (t15 + 4);
    t7 = *((unsigned int *)t17);
    t34 = (!(t7));
    t35 = (t31 && t34);
    t19 = (t21 + 4);
    t8 = *((unsigned int *)t19);
    t38 = (!(t8));
    t39 = (t35 && t38);
    if (t39 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 7576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 16);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 16);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 7U);
    t18 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t18 & 7U);
    t12 = (t0 + 7736);
    t14 = (t0 + 7736);
    t16 = (t14 + 72U);
    t17 = *((char **)t16);
    t19 = ((char*)((ng16)));
    t20 = ((char*)((ng17)));
    xsi_vlog_convert_partindices(t15, t21, t22, ((int*)(t17)), 2, t19, 32, 1, t20, 32, 1);
    t24 = (t15 + 4);
    t30 = *((unsigned int *)t24);
    t31 = (!(t30));
    t25 = (t21 + 4);
    t33 = *((unsigned int *)t25);
    t34 = (!(t33));
    t35 = (t31 && t34);
    t26 = (t22 + 4);
    t37 = *((unsigned int *)t26);
    t38 = (!(t37));
    t39 = (t35 && t38);
    if (t39 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 7576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 11);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 11);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 7U);
    t18 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t18 & 7U);
    t12 = (t0 + 7736);
    t14 = (t0 + 7736);
    t16 = (t14 + 72U);
    t17 = *((char **)t16);
    t19 = ((char*)((ng18)));
    t20 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t15, t21, t22, ((int*)(t17)), 2, t19, 32, 1, t20, 32, 1);
    t24 = (t15 + 4);
    t30 = *((unsigned int *)t24);
    t31 = (!(t30));
    t25 = (t21 + 4);
    t33 = *((unsigned int *)t25);
    t34 = (!(t33));
    t35 = (t31 && t34);
    t26 = (t22 + 4);
    t37 = *((unsigned int *)t26);
    t38 = (!(t37));
    t39 = (t35 && t38);
    if (t39 == 1)
        goto LAB21;

LAB22:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(109, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 7736);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 45, 0LL);
    goto LAB7;

LAB9:    t40 = *((unsigned int *)t23);
    t41 = (t40 + 0);
    t42 = *((unsigned int *)t21);
    t43 = *((unsigned int *)t22);
    t44 = (t42 - t43);
    t45 = (t44 + 1);
    xsi_vlogvar_wait_assign_value(t19, t13, t41, *((unsigned int *)t22), t45, 0LL);
    goto LAB10;

LAB11:    t40 = *((unsigned int *)t22);
    t41 = (t40 + 0);
    t42 = *((unsigned int *)t15);
    t43 = *((unsigned int *)t21);
    t44 = (t42 - t43);
    t45 = (t44 + 1);
    xsi_vlogvar_wait_assign_value(t14, t13, t41, *((unsigned int *)t21), t45, 0LL);
    goto LAB12;

LAB13:    t9 = *((unsigned int *)t21);
    t41 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t15);
    t44 = (t10 - t18);
    t45 = (t44 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t41, *((unsigned int *)t15), t45, 0LL);
    goto LAB14;

LAB15:    t9 = *((unsigned int *)t21);
    t41 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t15);
    t44 = (t10 - t18);
    t45 = (t44 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t41, *((unsigned int *)t15), t45, 0LL);
    goto LAB16;

LAB17:    t9 = *((unsigned int *)t21);
    t41 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t15);
    t44 = (t10 - t18);
    t45 = (t44 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t41, *((unsigned int *)t15), t45, 0LL);
    goto LAB18;

LAB19:    t40 = *((unsigned int *)t22);
    t41 = (t40 + 0);
    t42 = *((unsigned int *)t15);
    t43 = *((unsigned int *)t21);
    t44 = (t42 - t43);
    t45 = (t44 + 1);
    xsi_vlogvar_wait_assign_value(t12, t13, t41, *((unsigned int *)t21), t45, 0LL);
    goto LAB20;

LAB21:    t40 = *((unsigned int *)t22);
    t41 = (t40 + 0);
    t42 = *((unsigned int *)t15);
    t43 = *((unsigned int *)t21);
    t44 = (t42 - t43);
    t45 = (t44 + 1);
    xsi_vlogvar_wait_assign_value(t12, t13, t41, *((unsigned int *)t21), t45, 0LL);
    goto LAB22;

}

static void Always_138_4(char *t0)
{
    char t13[8];
    char t16[8];
    char t17[8];
    char t18[8];
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
    char *t15;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    int t26;
    char *t27;
    unsigned int t28;
    int t29;
    int t30;
    char *t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    int t39;
    int t40;

LAB0:    t1 = (t0 + 9968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 10600);
    *((int *)t2) = 1;
    t3 = (t0 + 10000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(139, ng0);
    t4 = (t0 + 3656U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(142, ng0);

LAB8:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 7736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 8);
    t12 = (t4 + 12);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 4);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 4);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 31U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 31U);
    t15 = (t0 + 7896);
    t19 = (t0 + 7896);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng9)));
    t23 = ((char*)((ng19)));
    xsi_vlog_convert_partindices(t16, t17, t18, ((int*)(t21)), 2, t22, 32, 1, t23, 32, 1);
    t24 = (t16 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t17 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    t30 = (t26 && t29);
    t31 = (t18 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 4616U);
    t3 = *((char **)t2);
    t2 = (t0 + 7896);
    t4 = (t0 + 7896);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng20)));
    t15 = ((char*)((ng21)));
    xsi_vlog_convert_partindices(t13, t16, t17, ((int*)(t11)), 2, t12, 32, 1, t15, 32, 1);
    t19 = (t13 + 4);
    t6 = *((unsigned int *)t19);
    t26 = (!(t6));
    t20 = (t16 + 4);
    t7 = *((unsigned int *)t20);
    t29 = (!(t7));
    t30 = (t26 && t29);
    t21 = (t17 + 4);
    t8 = *((unsigned int *)t21);
    t33 = (!(t8));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 6056U);
    t3 = *((char **)t2);
    t2 = (t0 + 7896);
    t4 = (t0 + 7896);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng22)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t26 = (!(t6));
    if (t26 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 4936U);
    t3 = *((char **)t2);
    t2 = (t0 + 7896);
    t4 = (t0 + 7896);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng23)));
    t15 = ((char*)((ng24)));
    xsi_vlog_convert_partindices(t13, t16, t17, ((int*)(t11)), 2, t12, 32, 1, t15, 32, 1);
    t19 = (t13 + 4);
    t6 = *((unsigned int *)t19);
    t26 = (!(t6));
    t20 = (t16 + 4);
    t7 = *((unsigned int *)t20);
    t29 = (!(t7));
    t30 = (t26 && t29);
    t21 = (t17 + 4);
    t8 = *((unsigned int *)t21);
    t33 = (!(t8));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 7736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 14);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 14);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 255U);
    t12 = (t0 + 7896);
    t15 = (t0 + 7896);
    t19 = (t15 + 72U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng25)));
    t22 = ((char*)((ng17)));
    xsi_vlog_convert_partindices(t16, t17, t18, ((int*)(t20)), 2, t21, 32, 1, t22, 32, 1);
    t23 = (t16 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (!(t25));
    t24 = (t17 + 4);
    t28 = *((unsigned int *)t24);
    t29 = (!(t28));
    t30 = (t26 && t29);
    t27 = (t18 + 4);
    t32 = *((unsigned int *)t27);
    t33 = (!(t32));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 6856U);
    t3 = *((char **)t2);
    t2 = (t0 + 7896);
    t4 = (t0 + 7896);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng18)));
    t15 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t13, t16, t17, ((int*)(t11)), 2, t12, 32, 1, t15, 32, 1);
    t19 = (t13 + 4);
    t6 = *((unsigned int *)t19);
    t26 = (!(t6));
    t20 = (t16 + 4);
    t7 = *((unsigned int *)t20);
    t29 = (!(t7));
    t30 = (t26 && t29);
    t21 = (t17 + 4);
    t8 = *((unsigned int *)t21);
    t33 = (!(t8));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB19;

LAB20:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(140, ng0);
    t11 = ((char*)((ng5)));
    t12 = (t0 + 7896);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 31, 0LL);
    goto LAB7;

LAB9:    t35 = *((unsigned int *)t18);
    t36 = (t35 + 0);
    t37 = *((unsigned int *)t16);
    t38 = *((unsigned int *)t17);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_wait_assign_value(t15, t13, t36, *((unsigned int *)t17), t40, 0LL);
    goto LAB10;

LAB11:    t9 = *((unsigned int *)t17);
    t36 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t14 = *((unsigned int *)t16);
    t39 = (t10 - t14);
    t40 = (t39 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t36, *((unsigned int *)t16), t40, 0LL);
    goto LAB12;

LAB13:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB14;

LAB15:    t9 = *((unsigned int *)t17);
    t36 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t14 = *((unsigned int *)t16);
    t39 = (t10 - t14);
    t40 = (t39 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t36, *((unsigned int *)t16), t40, 0LL);
    goto LAB16;

LAB17:    t35 = *((unsigned int *)t18);
    t36 = (t35 + 0);
    t37 = *((unsigned int *)t16);
    t38 = *((unsigned int *)t17);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_wait_assign_value(t12, t13, t36, *((unsigned int *)t17), t40, 0LL);
    goto LAB18;

LAB19:    t9 = *((unsigned int *)t17);
    t36 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t14 = *((unsigned int *)t16);
    t39 = (t10 - t14);
    t40 = (t39 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t36, *((unsigned int *)t16), t40, 0LL);
    goto LAB20;

}

static void Always_161_5(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char t17[8];
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
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    int t25;
    char *t26;
    unsigned int t27;
    int t28;
    int t29;
    char *t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    int t39;

LAB0:    t1 = (t0 + 10216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 10616);
    *((int *)t2) = 1;
    t3 = (t0 + 10248);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(162, ng0);
    t4 = (t0 + 3656U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(165, ng0);

LAB8:    xsi_set_current_line(166, ng0);
    t2 = (t0 + 7896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 26);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 26);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 3U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 3U);
    t12 = (t0 + 8056);
    t18 = (t0 + 8056);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng21)));
    t22 = ((char*)((ng22)));
    xsi_vlog_convert_partindices(t15, t16, t17, ((int*)(t20)), 2, t21, 32, 1, t22, 32, 1);
    t23 = (t15 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (!(t24));
    t26 = (t16 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t25 && t28);
    t30 = (t17 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 5096U);
    t3 = *((char **)t2);
    t2 = (t0 + 8056);
    t4 = (t0 + 8056);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng23)));
    t18 = ((char*)((ng24)));
    xsi_vlog_convert_partindices(t13, t15, t16, ((int*)(t11)), 2, t12, 32, 1, t18, 32, 1);
    t19 = (t13 + 4);
    t6 = *((unsigned int *)t19);
    t25 = (!(t6));
    t20 = (t15 + 4);
    t7 = *((unsigned int *)t20);
    t28 = (!(t7));
    t29 = (t25 && t28);
    t21 = (t16 + 4);
    t8 = *((unsigned int *)t21);
    t32 = (!(t8));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(168, ng0);
    t2 = (t0 + 7896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 11);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 11);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 255U);
    t12 = (t0 + 8056);
    t18 = (t0 + 8056);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng25)));
    t22 = ((char*)((ng17)));
    xsi_vlog_convert_partindices(t15, t16, t17, ((int*)(t20)), 2, t21, 32, 1, t22, 32, 1);
    t23 = (t15 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (!(t24));
    t26 = (t16 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t25 && t28);
    t30 = (t17 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 7896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 7U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 7U);
    t12 = (t0 + 8056);
    t18 = (t0 + 8056);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng18)));
    t22 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t15, t16, t17, ((int*)(t20)), 2, t21, 32, 1, t22, 32, 1);
    t23 = (t15 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (!(t24));
    t26 = (t16 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t25 && t28);
    t30 = (t17 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB15;

LAB16:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(163, ng0);
    t11 = ((char*)((ng5)));
    t12 = (t0 + 8056);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 21, 0LL);
    goto LAB7;

LAB9:    t34 = *((unsigned int *)t17);
    t35 = (t34 + 0);
    t36 = *((unsigned int *)t15);
    t37 = *((unsigned int *)t16);
    t38 = (t36 - t37);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t12, t13, t35, *((unsigned int *)t16), t39, 0LL);
    goto LAB10;

LAB11:    t9 = *((unsigned int *)t16);
    t35 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t14 = *((unsigned int *)t15);
    t38 = (t10 - t14);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t35, *((unsigned int *)t15), t39, 0LL);
    goto LAB12;

LAB13:    t34 = *((unsigned int *)t17);
    t35 = (t34 + 0);
    t36 = *((unsigned int *)t15);
    t37 = *((unsigned int *)t16);
    t38 = (t36 - t37);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t12, t13, t35, *((unsigned int *)t16), t39, 0LL);
    goto LAB14;

LAB15:    t34 = *((unsigned int *)t17);
    t35 = (t34 + 0);
    t36 = *((unsigned int *)t15);
    t37 = *((unsigned int *)t16);
    t38 = (t36 - t37);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t12, t13, t35, *((unsigned int *)t16), t39, 0LL);
    goto LAB16;

}


extern void work_m_00000000002232963561_2269173280_init()
{
	static char *pe[] = {(void *)Cont_75_0,(void *)Cont_76_1,(void *)Always_78_2,(void *)Always_107_3,(void *)Always_138_4,(void *)Always_161_5};
	xsi_register_didat("work_m_00000000002232963561_2269173280", "isim/SocTB_isim_beh.exe.sim/work/m_00000000002232963561_2269173280.didat");
	xsi_register_executes(pe);
}
