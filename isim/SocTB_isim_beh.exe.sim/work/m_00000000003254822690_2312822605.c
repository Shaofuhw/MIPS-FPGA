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
static const char *ng0 = "C:/Users/Shao.Surface/Documents/Digital/Lab3v4/Soc_Mips.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Cont_76_0(char *t0)
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

LAB0:    t1 = (t0 + 12432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 8952);
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
    t14 = (t0 + 14152);
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
    t27 = (t0 + 13992);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_77_1(char *t0)
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

LAB0:    t1 = (t0 + 12680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 8952);
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
    t14 = (t0 + 14216);
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
    t27 = (t0 + 14008);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_123_2(char *t0)
{
    char t13[8];
    char t21[8];
    char t34[8];
    char t50[8];
    char t58[8];
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
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
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
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;

LAB0:    t1 = (t0 + 12928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 14024);
    *((int *)t2) = 1;
    t3 = (t0 + 12960);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(124, ng0);
    t4 = (t0 + 3112U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 6952U);
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
        goto LAB12;

LAB9:    if (t18 != 0)
        goto LAB11;

LAB10:    *((unsigned int *)t13) = 1;

LAB12:    memset(t21, 0, 8);
    t12 = (t13 + 4);
    t22 = *((unsigned int *)t12);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t12) != 0)
        goto LAB15;

LAB16:    t28 = (t21 + 4);
    t29 = *((unsigned int *)t21);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB17;

LAB18:    memcpy(t58, t21, 8);

LAB19:    t90 = (t58 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t58);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 7432U);
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
        goto LAB38;

LAB35:    if (t18 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t13) = 1;

LAB38:    t12 = (t13 + 4);
    t22 = *((unsigned int *)t12);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB39;

LAB40:
LAB41:
LAB33:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(125, ng0);

LAB8:    xsi_set_current_line(126, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 8952);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    goto LAB7;

LAB11:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB12;

LAB13:    *((unsigned int *)t21) = 1;
    goto LAB16;

LAB15:    t27 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB16;

LAB17:    t32 = (t0 + 7432U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng1)));
    memset(t34, 0, 8);
    t35 = (t33 + 4);
    t36 = (t32 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB23;

LAB20:    if (t46 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t34) = 1;

LAB23:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t51) != 0)
        goto LAB26;

LAB27:    t59 = *((unsigned int *)t21);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t21 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB28;

LAB29:
LAB30:    goto LAB19;

LAB22:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB23;

LAB24:    *((unsigned int *)t50) = 1;
    goto LAB27;

LAB26:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB27;

LAB28:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t21 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t21);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB30;

LAB31:    xsi_set_current_line(130, ng0);

LAB34:    xsi_set_current_line(131, ng0);
    t96 = (t0 + 5992U);
    t97 = *((char **)t96);
    t96 = (t0 + 9112);
    xsi_vlogvar_wait_assign_value(t96, t97, 0, 0, 6, 0LL);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 5832U);
    t3 = *((char **)t2);
    t2 = (t0 + 8952);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB33;

LAB37:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(135, ng0);

LAB42:    xsi_set_current_line(136, ng0);
    t27 = ((char*)((ng1)));
    t28 = (t0 + 8952);
    xsi_vlogvar_wait_assign_value(t28, t27, 0, 0, 32, 0LL);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    goto LAB41;

}

static void Always_169_3(char *t0)
{
    char t13[8];
    char t26[8];
    char t33[8];
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
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;

LAB0:    t1 = (t0 + 13176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 14040);
    *((int *)t2) = 1;
    t3 = (t0 + 13208);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(170, ng0);
    t4 = (t0 + 3112U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(181, ng0);

LAB9:    xsi_set_current_line(182, ng0);
    t2 = (t0 + 7112U);
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

LAB15:    xsi_set_current_line(184, ng0);
    t2 = (t0 + 7112U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
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
        goto LAB20;

LAB17:    if (t18 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t13) = 1;

LAB20:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB21;

LAB22:
LAB23:
LAB16:    xsi_set_current_line(187, ng0);
    t2 = (t0 + 4552U);
    t3 = *((char **)t2);
    t2 = (t0 + 9432);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(188, ng0);
    t2 = (t0 + 4712U);
    t3 = *((char **)t2);
    t2 = (t0 + 9592);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(189, ng0);
    t2 = (t0 + 8392U);
    t3 = *((char **)t2);
    t2 = (t0 + 9752);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(190, ng0);
    t2 = (t0 + 8952);
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
    t12 = (t0 + 9912);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 3, 0LL);
    xsi_set_current_line(191, ng0);
    t2 = (t0 + 8952);
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
    t12 = (t0 + 10072);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 3, 0LL);
    xsi_set_current_line(192, ng0);
    t2 = (t0 + 8952);
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
    t12 = (t0 + 10232);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 3, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(171, ng0);

LAB8:    xsi_set_current_line(172, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 9272);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10072);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10232);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB7;

LAB12:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(183, ng0);
    t27 = (t0 + 6472U);
    t28 = *((char **)t27);
    t27 = (t0 + 7912U);
    t29 = *((char **)t27);
    t27 = (t0 + 7752U);
    t30 = *((char **)t27);
    t27 = (t0 + 7592U);
    t31 = *((char **)t27);
    t27 = (t0 + 6312U);
    t32 = *((char **)t27);
    t27 = (t0 + 8072U);
    t34 = *((char **)t27);
    memset(t33, 0, 8);
    t27 = (t33 + 4);
    t35 = (t34 + 4);
    t36 = *((unsigned int *)t34);
    t37 = (t36 >> 0);
    *((unsigned int *)t33) = t37;
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t27) = t39;
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 & 3U);
    t41 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t41 & 3U);
    t42 = (t0 + 8552U);
    t43 = *((char **)t42);
    xsi_vlogtype_concat(t26, 8, 8, 7U, t43, 1, t33, 2, t32, 1, t31, 1, t30, 1, t29, 1, t28, 1);
    t42 = (t0 + 9272);
    xsi_vlogvar_wait_assign_value(t42, t26, 0, 0, 8, 0LL);
    goto LAB16;

LAB19:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(185, ng0);
    t27 = ((char*)((ng1)));
    t28 = (t0 + 9272);
    xsi_vlogvar_wait_assign_value(t28, t27, 0, 0, 8, 0LL);
    goto LAB23;

}

static void Always_217_4(char *t0)
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

LAB0:    t1 = (t0 + 13424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(217, ng0);
    t2 = (t0 + 14056);
    *((int *)t2) = 1;
    t3 = (t0 + 13456);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(218, ng0);
    t4 = (t0 + 3112U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(226, ng0);

LAB9:    xsi_set_current_line(227, ng0);
    t2 = (t0 + 9272);
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
    *((unsigned int *)t13) = (t10 & 15U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 15U);
    t12 = (t0 + 10392);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 4, 0LL);
    xsi_set_current_line(228, ng0);
    t2 = (t0 + 4232U);
    t3 = *((char **)t2);
    t2 = (t0 + 10552);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(229, ng0);
    t2 = (t0 + 5672U);
    t3 = *((char **)t2);
    t2 = (t0 + 10712);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(230, ng0);
    t2 = (t0 + 8232U);
    t3 = *((char **)t2);
    t2 = (t0 + 10872);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(219, ng0);

LAB8:    xsi_set_current_line(220, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 10392);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    xsi_set_current_line(221, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10552);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(222, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10712);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(223, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10872);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB7;

}

static void Always_243_5(char *t0)
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

LAB0:    t1 = (t0 + 13672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(243, ng0);
    t2 = (t0 + 14072);
    *((int *)t2) = 1;
    t3 = (t0 + 13704);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(244, ng0);
    t4 = (t0 + 3112U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(252, ng0);

LAB9:    xsi_set_current_line(253, ng0);
    t2 = (t0 + 10392);
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
    *((unsigned int *)t13) = (t10 & 3U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 3U);
    t12 = (t0 + 11032);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 2, 0LL);
    xsi_set_current_line(254, ng0);
    t2 = (t0 + 5512U);
    t3 = *((char **)t2);
    t2 = (t0 + 11192);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(255, ng0);
    t2 = (t0 + 10552);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 11352);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(256, ng0);
    t2 = (t0 + 10872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 11512);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(245, ng0);

LAB8:    xsi_set_current_line(246, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 11032);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    xsi_set_current_line(247, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11192);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(248, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11352);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(249, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11512);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB7;

}


extern void work_m_00000000003254822690_2312822605_init()
{
	static char *pe[] = {(void *)Cont_76_0,(void *)Cont_77_1,(void *)Always_123_2,(void *)Always_169_3,(void *)Always_217_4,(void *)Always_243_5};
	xsi_register_didat("work_m_00000000003254822690_2312822605", "isim/SocTB_isim_beh.exe.sim/work/m_00000000003254822690_2312822605.didat");
	xsi_register_executes(pe);
}
