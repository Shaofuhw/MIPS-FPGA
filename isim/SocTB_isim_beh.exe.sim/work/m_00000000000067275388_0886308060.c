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
static const char *ng0 = "C:/Users/Shao.Surface/Documents/Digital/Lab3v5/ALU.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {6, 0};
static int ng5[] = {7, 0};



static void Always_29_0(char *t0)
{
    char t10[8];
    char t42[8];
    char t43[8];
    char t44[8];
    char t56[8];
    char t67[8];
    char t76[8];
    char t92[8];
    char t100[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;

LAB0:    t1 = (t0 + 2984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3304);
    *((int *)t2) = 1;
    t3 = (t0 + 3016);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(32, ng0);
    t7 = (t0 + 1184U);
    t8 = *((char **)t7);
    t7 = (t0 + 1344U);
    t9 = *((char **)t7);
    t11 = *((unsigned int *)t8);
    t12 = *((unsigned int *)t9);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t7 = (t8 + 4);
    t14 = (t9 + 4);
    t15 = (t10 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t14);
    t18 = (t16 | t17);
    *((unsigned int *)t15) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB20;

LAB21:
LAB22:    t41 = (t0 + 1904);
    xsi_vlogvar_assign_value(t41, t10, 0, 0, 8);
    goto LAB19;

LAB9:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 1184U);
    t4 = *((char **)t3);
    t3 = (t0 + 1344U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t9);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB23;

LAB24:
LAB25:    t23 = (t0 + 1904);
    xsi_vlogvar_assign_value(t23, t10, 0, 0, 8);
    goto LAB19;

LAB11:    xsi_set_current_line(34, ng0);

LAB26:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1184U);
    t4 = *((char **)t3);
    t3 = (t0 + 1344U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 8, t4, 8, t7, 8);
    t3 = (t0 + 1904);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 8);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 7);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 7);
    t18 = (t17 & 1);
    *((unsigned int *)t2) = t18;
    t7 = (t0 + 1344U);
    t8 = *((char **)t7);
    memset(t42, 0, 8);
    t7 = (t42 + 4);
    t9 = (t8 + 4);
    t19 = *((unsigned int *)t8);
    t20 = (t19 >> 7);
    t21 = (t20 & 1);
    *((unsigned int *)t42) = t21;
    t22 = *((unsigned int *)t9);
    t25 = (t22 >> 7);
    t26 = (t25 & 1);
    *((unsigned int *)t7) = t26;
    memset(t43, 0, 8);
    t14 = (t10 + 4);
    t15 = (t42 + 4);
    t27 = *((unsigned int *)t10);
    t28 = *((unsigned int *)t42);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t14);
    t31 = *((unsigned int *)t15);
    t32 = (t30 ^ t31);
    t35 = (t29 | t32);
    t36 = *((unsigned int *)t14);
    t37 = *((unsigned int *)t15);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB30;

LAB27:    if (t38 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t43) = 1;

LAB30:    memset(t44, 0, 8);
    t24 = (t43 + 4);
    t45 = *((unsigned int *)t24);
    t46 = (~(t45));
    t47 = *((unsigned int *)t43);
    t48 = (t47 & t46);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t24) != 0)
        goto LAB33;

LAB34:    t50 = (t44 + 4);
    t51 = *((unsigned int *)t44);
    t52 = *((unsigned int *)t50);
    t53 = (t51 || t52);
    if (t53 > 0)
        goto LAB35;

LAB36:    memcpy(t100, t44, 8);

LAB37:    t130 = (t100 + 4);
    t131 = *((unsigned int *)t130);
    t132 = (~(t131));
    t133 = *((unsigned int *)t100);
    t134 = (t133 & t132);
    t135 = (t134 != 0);
    if (t135 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB51:    goto LAB19;

LAB13:    xsi_set_current_line(41, ng0);

LAB52:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1184U);
    t4 = *((char **)t3);
    t3 = (t0 + 1344U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 8, t4, 8, t7, 8);
    t3 = (t0 + 1904);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 8);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 7);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 7);
    t18 = (t17 & 1);
    *((unsigned int *)t2) = t18;
    t7 = (t0 + 1344U);
    t8 = *((char **)t7);
    memset(t42, 0, 8);
    t7 = (t42 + 4);
    t9 = (t8 + 4);
    t19 = *((unsigned int *)t8);
    t20 = (t19 >> 7);
    t21 = (t20 & 1);
    *((unsigned int *)t42) = t21;
    t22 = *((unsigned int *)t9);
    t25 = (t22 >> 7);
    t26 = (t25 & 1);
    *((unsigned int *)t7) = t26;
    memset(t43, 0, 8);
    t14 = (t10 + 4);
    t15 = (t42 + 4);
    t27 = *((unsigned int *)t10);
    t28 = *((unsigned int *)t42);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t14);
    t31 = *((unsigned int *)t15);
    t32 = (t30 ^ t31);
    t35 = (t29 | t32);
    t36 = *((unsigned int *)t14);
    t37 = *((unsigned int *)t15);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB54;

LAB53:    if (t38 != 0)
        goto LAB55;

LAB56:    memset(t44, 0, 8);
    t24 = (t43 + 4);
    t45 = *((unsigned int *)t24);
    t46 = (~(t45));
    t47 = *((unsigned int *)t43);
    t48 = (t47 & t46);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t24) != 0)
        goto LAB59;

LAB60:    t50 = (t44 + 4);
    t51 = *((unsigned int *)t44);
    t52 = *((unsigned int *)t50);
    t53 = (t51 || t52);
    if (t53 > 0)
        goto LAB61;

LAB62:    memcpy(t100, t44, 8);

LAB63:    t130 = (t100 + 4);
    t131 = *((unsigned int *)t130);
    t132 = (~(t131));
    t133 = *((unsigned int *)t100);
    t134 = (t133 & t132);
    t135 = (t134 != 0);
    if (t135 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB77:    goto LAB19;

LAB15:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 1184U);
    t4 = *((char **)t3);
    t3 = (t0 + 1344U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB79;

LAB78:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB79;

LAB82:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB80;

LAB81:    t14 = (t10 + 4);
    t11 = *((unsigned int *)t14);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t16 = (t13 & t12);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB85:    goto LAB19;

LAB20:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t10) = (t21 | t22);
    t23 = (t8 + 4);
    t24 = (t9 + 4);
    t25 = *((unsigned int *)t8);
    t26 = (~(t25));
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (~(t31));
    t33 = (t26 & t28);
    t34 = (t30 & t32);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t37 & t35);
    t38 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t38 & t36);
    t39 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t39 & t35);
    t40 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t40 & t36);
    goto LAB22;

LAB23:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t21 | t22);
    t14 = (t4 + 4);
    t15 = (t7 + 4);
    t25 = *((unsigned int *)t14);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t33 = (t27 & t26);
    t28 = *((unsigned int *)t15);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t34 = (t30 & t29);
    t31 = (~(t33));
    t32 = (~(t34));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t31);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t32);
    goto LAB25;

LAB29:    t23 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB30;

LAB31:    *((unsigned int *)t44) = 1;
    goto LAB34;

LAB33:    t41 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB34;

LAB35:    t54 = (t0 + 1184U);
    t55 = *((char **)t54);
    memset(t56, 0, 8);
    t54 = (t56 + 4);
    t57 = (t55 + 4);
    t58 = *((unsigned int *)t55);
    t59 = (t58 >> 7);
    t60 = (t59 & 1);
    *((unsigned int *)t56) = t60;
    t61 = *((unsigned int *)t57);
    t62 = (t61 >> 7);
    t63 = (t62 & 1);
    *((unsigned int *)t54) = t63;
    t64 = (t0 + 1904);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    memset(t67, 0, 8);
    t68 = (t67 + 4);
    t69 = (t66 + 4);
    t70 = *((unsigned int *)t66);
    t71 = (t70 >> 7);
    t72 = (t71 & 1);
    *((unsigned int *)t67) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 >> 7);
    t75 = (t74 & 1);
    *((unsigned int *)t68) = t75;
    memset(t76, 0, 8);
    t77 = (t56 + 4);
    t78 = (t67 + 4);
    t79 = *((unsigned int *)t56);
    t80 = *((unsigned int *)t67);
    t81 = (t79 ^ t80);
    t82 = *((unsigned int *)t77);
    t83 = *((unsigned int *)t78);
    t84 = (t82 ^ t83);
    t85 = (t81 | t84);
    t86 = *((unsigned int *)t77);
    t87 = *((unsigned int *)t78);
    t88 = (t86 | t87);
    t89 = (~(t88));
    t90 = (t85 & t89);
    if (t90 != 0)
        goto LAB39;

LAB38:    if (t88 != 0)
        goto LAB40;

LAB41:    memset(t92, 0, 8);
    t93 = (t76 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t76);
    t97 = (t96 & t95);
    t98 = (t97 & 1U);
    if (t98 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t93) != 0)
        goto LAB44;

LAB45:    t101 = *((unsigned int *)t44);
    t102 = *((unsigned int *)t92);
    t103 = (t101 & t102);
    *((unsigned int *)t100) = t103;
    t104 = (t44 + 4);
    t105 = (t92 + 4);
    t106 = (t100 + 4);
    t107 = *((unsigned int *)t104);
    t108 = *((unsigned int *)t105);
    t109 = (t107 | t108);
    *((unsigned int *)t106) = t109;
    t110 = *((unsigned int *)t106);
    t111 = (t110 != 0);
    if (t111 == 1)
        goto LAB46;

LAB47:
LAB48:    goto LAB37;

LAB39:    *((unsigned int *)t76) = 1;
    goto LAB41;

LAB40:    t91 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t91) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t92) = 1;
    goto LAB45;

LAB44:    t99 = (t92 + 4);
    *((unsigned int *)t92) = 1;
    *((unsigned int *)t99) = 1;
    goto LAB45;

LAB46:    t112 = *((unsigned int *)t100);
    t113 = *((unsigned int *)t106);
    *((unsigned int *)t100) = (t112 | t113);
    t114 = (t44 + 4);
    t115 = (t92 + 4);
    t116 = *((unsigned int *)t44);
    t117 = (~(t116));
    t118 = *((unsigned int *)t114);
    t119 = (~(t118));
    t120 = *((unsigned int *)t92);
    t121 = (~(t120));
    t122 = *((unsigned int *)t115);
    t123 = (~(t122));
    t6 = (t117 & t119);
    t33 = (t121 & t123);
    t124 = (~(t6));
    t125 = (~(t33));
    t126 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t126 & t124);
    t127 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t127 & t125);
    t128 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t128 & t124);
    t129 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t129 & t125);
    goto LAB48;

LAB49:    xsi_set_current_line(37, ng0);
    t136 = ((char*)((ng2)));
    t137 = (t0 + 2064);
    xsi_vlogvar_assign_value(t137, t136, 0, 0, 1);
    goto LAB51;

LAB54:    *((unsigned int *)t43) = 1;
    goto LAB56;

LAB55:    t23 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB56;

LAB57:    *((unsigned int *)t44) = 1;
    goto LAB60;

LAB59:    t41 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB60;

LAB61:    t54 = (t0 + 1344U);
    t55 = *((char **)t54);
    memset(t56, 0, 8);
    t54 = (t56 + 4);
    t57 = (t55 + 4);
    t58 = *((unsigned int *)t55);
    t59 = (t58 >> 7);
    t60 = (t59 & 1);
    *((unsigned int *)t56) = t60;
    t61 = *((unsigned int *)t57);
    t62 = (t61 >> 7);
    t63 = (t62 & 1);
    *((unsigned int *)t54) = t63;
    t64 = (t0 + 1904);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    memset(t67, 0, 8);
    t68 = (t67 + 4);
    t69 = (t66 + 4);
    t70 = *((unsigned int *)t66);
    t71 = (t70 >> 7);
    t72 = (t71 & 1);
    *((unsigned int *)t67) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 >> 7);
    t75 = (t74 & 1);
    *((unsigned int *)t68) = t75;
    memset(t76, 0, 8);
    t77 = (t56 + 4);
    t78 = (t67 + 4);
    t79 = *((unsigned int *)t56);
    t80 = *((unsigned int *)t67);
    t81 = (t79 ^ t80);
    t82 = *((unsigned int *)t77);
    t83 = *((unsigned int *)t78);
    t84 = (t82 ^ t83);
    t85 = (t81 | t84);
    t86 = *((unsigned int *)t77);
    t87 = *((unsigned int *)t78);
    t88 = (t86 | t87);
    t89 = (~(t88));
    t90 = (t85 & t89);
    if (t90 != 0)
        goto LAB67;

LAB64:    if (t88 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t76) = 1;

LAB67:    memset(t92, 0, 8);
    t93 = (t76 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t76);
    t97 = (t96 & t95);
    t98 = (t97 & 1U);
    if (t98 != 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t93) != 0)
        goto LAB70;

LAB71:    t101 = *((unsigned int *)t44);
    t102 = *((unsigned int *)t92);
    t103 = (t101 & t102);
    *((unsigned int *)t100) = t103;
    t104 = (t44 + 4);
    t105 = (t92 + 4);
    t106 = (t100 + 4);
    t107 = *((unsigned int *)t104);
    t108 = *((unsigned int *)t105);
    t109 = (t107 | t108);
    *((unsigned int *)t106) = t109;
    t110 = *((unsigned int *)t106);
    t111 = (t110 != 0);
    if (t111 == 1)
        goto LAB72;

LAB73:
LAB74:    goto LAB63;

LAB66:    t91 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t91) = 1;
    goto LAB67;

LAB68:    *((unsigned int *)t92) = 1;
    goto LAB71;

LAB70:    t99 = (t92 + 4);
    *((unsigned int *)t92) = 1;
    *((unsigned int *)t99) = 1;
    goto LAB71;

LAB72:    t112 = *((unsigned int *)t100);
    t113 = *((unsigned int *)t106);
    *((unsigned int *)t100) = (t112 | t113);
    t114 = (t44 + 4);
    t115 = (t92 + 4);
    t116 = *((unsigned int *)t44);
    t117 = (~(t116));
    t118 = *((unsigned int *)t114);
    t119 = (~(t118));
    t120 = *((unsigned int *)t92);
    t121 = (~(t120));
    t122 = *((unsigned int *)t115);
    t123 = (~(t122));
    t6 = (t117 & t119);
    t33 = (t121 & t123);
    t124 = (~(t6));
    t125 = (~(t33));
    t126 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t126 & t124);
    t127 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t127 & t125);
    t128 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t128 & t124);
    t129 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t129 & t125);
    goto LAB74;

LAB75:    xsi_set_current_line(44, ng0);
    t136 = ((char*)((ng2)));
    t137 = (t0 + 2064);
    xsi_vlogvar_assign_value(t137, t136, 0, 0, 1);
    goto LAB77;

LAB79:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB81;

LAB80:    *((unsigned int *)t10) = 1;
    goto LAB81;

LAB83:    xsi_set_current_line(49, ng0);
    t15 = ((char*)((ng2)));
    t23 = (t0 + 1904);
    xsi_vlogvar_assign_value(t23, t15, 0, 0, 8);
    goto LAB85;

}


extern void work_m_00000000000067275388_0886308060_init()
{
	static char *pe[] = {(void *)Always_29_0};
	xsi_register_didat("work_m_00000000000067275388_0886308060", "isim/SocTB_isim_beh.exe.sim/work/m_00000000000067275388_0886308060.didat");
	xsi_register_executes(pe);
}
