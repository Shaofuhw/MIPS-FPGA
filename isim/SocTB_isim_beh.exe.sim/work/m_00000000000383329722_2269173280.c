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
static const char *ng0 = "C:/Users/Shao.Surface/Documents/Digital/Lab3v3/Soc_Mips.v";
static int ng1[] = {0, 0, 0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {37, 0};
static int ng4[] = {32, 0};
static int ng5[] = {31, 0};
static int ng6[] = {0, 0};
static int ng7[] = {44, 0};
static int ng8[] = {36, 0};
static int ng9[] = {35, 0};
static int ng10[] = {30, 0};
static int ng11[] = {29, 0};
static int ng12[] = {22, 0};
static int ng13[] = {21, 0};
static int ng14[] = {14, 0};
static int ng15[] = {13, 0};
static int ng16[] = {6, 0};
static int ng17[] = {5, 0};
static int ng18[] = {3, 0};
static int ng19[] = {2, 0};
static int ng20[] = {26, 0};
static int ng21[] = {25, 0};
static int ng22[] = {20, 0};
static int ng23[] = {19, 0};
static int ng24[] = {18, 0};
static int ng25[] = {11, 0};
static int ng26[] = {10, 0};



static void Always_77_0(char *t0)
{
    char t13[8];
    char t28[8];
    char t29[8];
    char t30[8];
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
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    int t38;
    char *t39;
    unsigned int t40;
    int t41;
    int t42;
    char *t43;
    unsigned int t44;
    int t45;
    int t46;
    unsigned int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    int t52;

LAB0:    t1 = (t0 + 10576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 12384);
    *((int *)t2) = 1;
    t3 = (t0 + 10608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(78, ng0);
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

LAB6:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 7336U);
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

LAB5:    xsi_set_current_line(79, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 9016);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 38, 0LL);
    goto LAB7;

LAB10:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB11;

LAB12:    xsi_set_current_line(81, ng0);

LAB15:    xsi_set_current_line(82, ng0);
    t26 = (t0 + 6216U);
    t27 = *((char **)t26);
    t26 = (t0 + 9016);
    t31 = (t0 + 9016);
    t32 = (t31 + 72U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng3)));
    t35 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t28, t29, t30, ((int*)(t33)), 2, t34, 32, 1, t35, 32, 1);
    t36 = (t28 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (!(t37));
    t39 = (t29 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (!(t40));
    t42 = (t38 && t41);
    t43 = (t30 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (!(t44));
    t46 = (t42 && t45);
    if (t46 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 4296U);
    t3 = *((char **)t2);
    t2 = (t0 + 9016);
    t4 = (t0 + 9016);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng5)));
    t26 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t13, t28, t29, ((int*)(t11)), 2, t12, 32, 1, t26, 32, 1);
    t27 = (t13 + 4);
    t6 = *((unsigned int *)t27);
    t38 = (!(t6));
    t31 = (t28 + 4);
    t7 = *((unsigned int *)t31);
    t41 = (!(t7));
    t42 = (t38 && t41);
    t32 = (t29 + 4);
    t8 = *((unsigned int *)t32);
    t45 = (!(t8));
    t46 = (t42 && t45);
    if (t46 == 1)
        goto LAB18;

LAB19:    goto LAB14;

LAB16:    t47 = *((unsigned int *)t30);
    t48 = (t47 + 0);
    t49 = *((unsigned int *)t28);
    t50 = *((unsigned int *)t29);
    t51 = (t49 - t50);
    t52 = (t51 + 1);
    xsi_vlogvar_wait_assign_value(t26, t27, t48, *((unsigned int *)t29), t52, 0LL);
    goto LAB17;

LAB18:    t9 = *((unsigned int *)t29);
    t48 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t14 = *((unsigned int *)t28);
    t51 = (t10 - t14);
    t52 = (t51 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t48, *((unsigned int *)t28), t52, 0LL);
    goto LAB19;

}

static void Cont_86_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 10824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 9016);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 21);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 21);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 7U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 7U);
    t14 = (t0 + 12560);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 7U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 2);
    t27 = (t0 + 12400);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_87_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 11072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 9016);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 16);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 16);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 7U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 7U);
    t14 = (t0 + 12624);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 7U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 2);
    t27 = (t0 + 12416);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_88_3(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 11320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 9496);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 7U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 7U);
    t14 = (t0 + 12688);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 7U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 2);
    t27 = (t0 + 12432);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_110_4(char *t0)
{
    char t13[8];
    char t26[8];
    char t34[8];
    char t45[8];
    char t46[8];
    char t47[8];
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
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    int t55;
    char *t56;
    unsigned int t57;
    int t58;
    int t59;
    char *t60;
    unsigned int t61;
    int t62;
    int t63;
    unsigned int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    int t69;

LAB0:    t1 = (t0 + 11568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 12448);
    *((int *)t2) = 1;
    t3 = (t0 + 11600);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(111, ng0);
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

LAB6:    xsi_set_current_line(117, ng0);

LAB9:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 7496U);
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
        goto LAB13;

LAB10:    if (t18 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t13) = 1;

LAB13:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 7496U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
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
        goto LAB22;

LAB19:    if (t18 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t13) = 1;

LAB22:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB23;

LAB24:
LAB25:
LAB16:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 9016);
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
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 63U);
    t27 = (t0 + 9176);
    t28 = (t0 + 9176);
    t29 = (t28 + 72U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng9)));
    t32 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t26, t34, t45, ((int*)(t30)), 2, t31, 32, 1, t32, 32, 1);
    t33 = (t26 + 4);
    t15 = *((unsigned int *)t33);
    t55 = (!(t15));
    t35 = (t34 + 4);
    t16 = *((unsigned int *)t35);
    t58 = (!(t16));
    t59 = (t55 && t58);
    t36 = (t45 + 4);
    t17 = *((unsigned int *)t36);
    t62 = (!(t17));
    t63 = (t59 && t62);
    if (t63 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 4936U);
    t3 = *((char **)t2);
    t2 = (t0 + 9176);
    t4 = (t0 + 9176);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng11)));
    t27 = ((char*)((ng12)));
    xsi_vlog_convert_partindices(t13, t26, t34, ((int*)(t11)), 2, t12, 32, 1, t27, 32, 1);
    t28 = (t13 + 4);
    t6 = *((unsigned int *)t28);
    t55 = (!(t6));
    t29 = (t26 + 4);
    t7 = *((unsigned int *)t29);
    t58 = (!(t7));
    t59 = (t55 && t58);
    t30 = (t34 + 4);
    t8 = *((unsigned int *)t30);
    t62 = (!(t8));
    t63 = (t59 && t62);
    if (t63 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 5096U);
    t3 = *((char **)t2);
    t2 = (t0 + 9176);
    t4 = (t0 + 9176);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng13)));
    t27 = ((char*)((ng14)));
    xsi_vlog_convert_partindices(t13, t26, t34, ((int*)(t11)), 2, t12, 32, 1, t27, 32, 1);
    t28 = (t13 + 4);
    t6 = *((unsigned int *)t28);
    t55 = (!(t6));
    t29 = (t26 + 4);
    t7 = *((unsigned int *)t29);
    t58 = (!(t7));
    t59 = (t55 && t58);
    t30 = (t34 + 4);
    t8 = *((unsigned int *)t30);
    t62 = (!(t8));
    t63 = (t59 && t62);
    if (t63 == 1)
        goto LAB32;

LAB33:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 8296U);
    t3 = *((char **)t2);
    t2 = (t0 + 9176);
    t4 = (t0 + 9176);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng15)));
    t27 = ((char*)((ng16)));
    xsi_vlog_convert_partindices(t13, t26, t34, ((int*)(t11)), 2, t12, 32, 1, t27, 32, 1);
    t28 = (t13 + 4);
    t6 = *((unsigned int *)t28);
    t55 = (!(t6));
    t29 = (t26 + 4);
    t7 = *((unsigned int *)t29);
    t58 = (!(t7));
    t59 = (t55 && t58);
    t30 = (t34 + 4);
    t8 = *((unsigned int *)t30);
    t62 = (!(t8));
    t63 = (t59 && t62);
    if (t63 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 9016);
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
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 7U);
    t12 = (t0 + 9176);
    t27 = (t0 + 9176);
    t28 = (t27 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng17)));
    t31 = ((char*)((ng18)));
    xsi_vlog_convert_partindices(t26, t34, t45, ((int*)(t29)), 2, t30, 32, 1, t31, 32, 1);
    t32 = (t26 + 4);
    t15 = *((unsigned int *)t32);
    t55 = (!(t15));
    t33 = (t34 + 4);
    t16 = *((unsigned int *)t33);
    t58 = (!(t16));
    t59 = (t55 && t58);
    t35 = (t45 + 4);
    t17 = *((unsigned int *)t35);
    t62 = (!(t17));
    t63 = (t59 && t62);
    if (t63 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 9016);
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
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 7U);
    t12 = (t0 + 9176);
    t27 = (t0 + 9176);
    t28 = (t27 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng19)));
    t31 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t26, t34, t45, ((int*)(t29)), 2, t30, 32, 1, t31, 32, 1);
    t32 = (t26 + 4);
    t15 = *((unsigned int *)t32);
    t55 = (!(t15));
    t33 = (t34 + 4);
    t16 = *((unsigned int *)t33);
    t58 = (!(t16));
    t59 = (t55 && t58);
    t35 = (t45 + 4);
    t17 = *((unsigned int *)t35);
    t62 = (!(t17));
    t63 = (t59 && t62);
    if (t63 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 9016);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 21);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 21);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 7U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 7U);
    t12 = (t0 + 9656);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 3, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(112, ng0);

LAB8:    xsi_set_current_line(113, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 9176);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 45, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 9656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB7;

LAB12:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(119, ng0);
    t27 = (t0 + 6856U);
    t28 = *((char **)t27);
    t27 = (t0 + 4136U);
    t29 = *((char **)t27);
    t27 = (t0 + 3976U);
    t30 = *((char **)t27);
    t27 = (t0 + 3816U);
    t31 = *((char **)t27);
    t27 = (t0 + 7016U);
    t32 = *((char **)t27);
    t27 = (t0 + 6696U);
    t33 = *((char **)t27);
    t27 = (t0 + 7656U);
    t35 = *((char **)t27);
    memset(t34, 0, 8);
    t27 = (t34 + 4);
    t36 = (t35 + 4);
    t37 = *((unsigned int *)t35);
    t38 = (t37 >> 0);
    *((unsigned int *)t34) = t38;
    t39 = *((unsigned int *)t36);
    t40 = (t39 >> 0);
    *((unsigned int *)t27) = t40;
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t41 & 3U);
    t42 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t42 & 3U);
    t43 = (t0 + 8616U);
    t44 = *((char **)t43);
    xsi_vlogtype_concat(t26, 9, 9, 8U, t44, 1, t34, 2, t33, 1, t32, 1, t31, 1, t30, 1, t29, 1, t28, 1);
    t43 = (t0 + 9176);
    t48 = (t0 + 9176);
    t49 = (t48 + 72U);
    t50 = *((char **)t49);
    t51 = ((char*)((ng7)));
    t52 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t45, t46, t47, ((int*)(t50)), 2, t51, 32, 1, t52, 32, 1);
    t53 = (t45 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (!(t54));
    t56 = (t46 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (!(t57));
    t59 = (t55 && t58);
    t60 = (t47 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (!(t61));
    t63 = (t59 && t62);
    if (t63 == 1)
        goto LAB17;

LAB18:    goto LAB16;

LAB17:    t64 = *((unsigned int *)t47);
    t65 = (t64 + 0);
    t66 = *((unsigned int *)t45);
    t67 = *((unsigned int *)t46);
    t68 = (t66 - t67);
    t69 = (t68 + 1);
    xsi_vlogvar_wait_assign_value(t43, t26, t65, *((unsigned int *)t46), t69, 0LL);
    goto LAB18;

LAB21:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(121, ng0);
    t27 = ((char*)((ng6)));
    t28 = (t0 + 9176);
    t29 = (t0 + 9176);
    t30 = (t29 + 72U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng7)));
    t33 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t26, t34, t45, ((int*)(t31)), 2, t32, 32, 1, t33, 32, 1);
    t35 = (t26 + 4);
    t37 = *((unsigned int *)t35);
    t55 = (!(t37));
    t36 = (t34 + 4);
    t38 = *((unsigned int *)t36);
    t58 = (!(t38));
    t59 = (t55 && t58);
    t43 = (t45 + 4);
    t39 = *((unsigned int *)t43);
    t62 = (!(t39));
    t63 = (t59 && t62);
    if (t63 == 1)
        goto LAB26;

LAB27:    goto LAB25;

LAB26:    t40 = *((unsigned int *)t45);
    t65 = (t40 + 0);
    t41 = *((unsigned int *)t26);
    t42 = *((unsigned int *)t34);
    t68 = (t41 - t42);
    t69 = (t68 + 1);
    xsi_vlogvar_wait_assign_value(t28, t27, t65, *((unsigned int *)t34), t69, 0LL);
    goto LAB27;

LAB28:    t18 = *((unsigned int *)t45);
    t65 = (t18 + 0);
    t19 = *((unsigned int *)t26);
    t20 = *((unsigned int *)t34);
    t68 = (t19 - t20);
    t69 = (t68 + 1);
    xsi_vlogvar_wait_assign_value(t27, t13, t65, *((unsigned int *)t34), t69, 0LL);
    goto LAB29;

LAB30:    t9 = *((unsigned int *)t34);
    t65 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t14 = *((unsigned int *)t26);
    t68 = (t10 - t14);
    t69 = (t68 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t65, *((unsigned int *)t26), t69, 0LL);
    goto LAB31;

LAB32:    t9 = *((unsigned int *)t34);
    t65 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t14 = *((unsigned int *)t26);
    t68 = (t10 - t14);
    t69 = (t68 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t65, *((unsigned int *)t26), t69, 0LL);
    goto LAB33;

LAB34:    t9 = *((unsigned int *)t34);
    t65 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t14 = *((unsigned int *)t26);
    t68 = (t10 - t14);
    t69 = (t68 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t65, *((unsigned int *)t26), t69, 0LL);
    goto LAB35;

LAB36:    t18 = *((unsigned int *)t45);
    t65 = (t18 + 0);
    t19 = *((unsigned int *)t26);
    t20 = *((unsigned int *)t34);
    t68 = (t19 - t20);
    t69 = (t68 + 1);
    xsi_vlogvar_wait_assign_value(t12, t13, t65, *((unsigned int *)t34), t69, 0LL);
    goto LAB37;

LAB38:    t18 = *((unsigned int *)t45);
    t65 = (t18 + 0);
    t19 = *((unsigned int *)t26);
    t20 = *((unsigned int *)t34);
    t68 = (t19 - t20);
    t69 = (t68 + 1);
    xsi_vlogvar_wait_assign_value(t12, t13, t65, *((unsigned int *)t34), t69, 0LL);
    goto LAB39;

}

static void Always_155_5(char *t0)
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

LAB0:    t1 = (t0 + 11816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 12464);
    *((int *)t2) = 1;
    t3 = (t0 + 11848);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(156, ng0);
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

LAB6:    xsi_set_current_line(159, ng0);

LAB8:    xsi_set_current_line(160, ng0);
    t2 = (t0 + 9176);
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
    t15 = (t0 + 9336);
    t19 = (t0 + 9336);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng10)));
    t23 = ((char*)((ng20)));
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

LAB10:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 6376U);
    t3 = *((char **)t2);
    t2 = (t0 + 9336);
    t4 = (t0 + 9336);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng21)));
    t15 = ((char*)((ng22)));
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

LAB12:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 6536U);
    t3 = *((char **)t2);
    t2 = (t0 + 9336);
    t4 = (t0 + 9336);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng23)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t26 = (!(t6));
    if (t26 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 4616U);
    t3 = *((char **)t2);
    t2 = (t0 + 9336);
    t4 = (t0 + 9336);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng24)));
    t15 = ((char*)((ng25)));
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

LAB16:    xsi_set_current_line(164, ng0);
    t2 = (t0 + 8456U);
    t3 = *((char **)t2);
    t2 = (t0 + 9336);
    t4 = (t0 + 9336);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng26)));
    t15 = ((char*)((ng18)));
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
        goto LAB17;

LAB18:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 8136U);
    t3 = *((char **)t2);
    t2 = (t0 + 9336);
    t4 = (t0 + 9336);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng19)));
    t15 = ((char*)((ng6)));
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

LAB5:    xsi_set_current_line(157, ng0);
    t11 = ((char*)((ng6)));
    t12 = (t0 + 9336);
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

LAB17:    t9 = *((unsigned int *)t17);
    t36 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t14 = *((unsigned int *)t16);
    t39 = (t10 - t14);
    t40 = (t39 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t36, *((unsigned int *)t16), t40, 0LL);
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

static void Always_178_6(char *t0)
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

LAB0:    t1 = (t0 + 12064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(178, ng0);
    t2 = (t0 + 12480);
    *((int *)t2) = 1;
    t3 = (t0 + 12096);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(179, ng0);
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

LAB6:    xsi_set_current_line(182, ng0);

LAB8:    xsi_set_current_line(183, ng0);
    t2 = (t0 + 9336);
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
    t12 = (t0 + 9496);
    t18 = (t0 + 9496);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng22)));
    t22 = ((char*)((ng23)));
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

LAB10:    xsi_set_current_line(184, ng0);
    t2 = (t0 + 4776U);
    t3 = *((char **)t2);
    t2 = (t0 + 9496);
    t4 = (t0 + 9496);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng24)));
    t18 = ((char*)((ng25)));
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

LAB12:    xsi_set_current_line(185, ng0);
    t2 = (t0 + 9336);
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
    t12 = (t0 + 9496);
    t18 = (t0 + 9496);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng26)));
    t22 = ((char*)((ng18)));
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

LAB14:    xsi_set_current_line(186, ng0);
    t2 = (t0 + 9336);
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
    t12 = (t0 + 9496);
    t18 = (t0 + 9496);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng19)));
    t22 = ((char*)((ng6)));
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

LAB5:    xsi_set_current_line(180, ng0);
    t11 = ((char*)((ng6)));
    t12 = (t0 + 9496);
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


extern void work_m_00000000000383329722_2269173280_init()
{
	static char *pe[] = {(void *)Always_77_0,(void *)Cont_86_1,(void *)Cont_87_2,(void *)Cont_88_3,(void *)Always_110_4,(void *)Always_155_5,(void *)Always_178_6};
	xsi_register_didat("work_m_00000000000383329722_2269173280", "isim/SocTB_isim_beh.exe.sim/work/m_00000000000383329722_2269173280.didat");
	xsi_register_executes(pe);
}
