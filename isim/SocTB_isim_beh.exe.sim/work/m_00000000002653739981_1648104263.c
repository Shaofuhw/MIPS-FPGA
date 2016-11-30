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
static const char *ng0 = "C:/Users/Shao.Surface/Documents/Digital/Lab3v1/ID.v";
static int ng1[] = {1, 0};



static void Cont_81_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t33[8];
    char t47[8];
    char *t1;
    char *t2;
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
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t34;
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
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;

LAB0:    t1 = (t0 + 6312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 5152U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
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
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t43 = *((unsigned int *)t4);
    t44 = (~(t43));
    t45 = *((unsigned int *)t29);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t47, 8);

LAB20:    t57 = (t0 + 6712);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    memset(t61, 0, 8);
    t62 = 7U;
    t63 = t62;
    t64 = (t3 + 4);
    t65 = *((unsigned int *)t3);
    t62 = (t62 & t65);
    t66 = *((unsigned int *)t64);
    t63 = (t63 & t66);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t68 | t62);
    t69 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t69 | t63);
    xsi_driver_vfirst_trans(t57, 0, 2);
    t70 = (t0 + 6632);
    *((int *)t70) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t34 = (t0 + 2912U);
    t35 = *((char **)t34);
    memset(t33, 0, 8);
    t34 = (t33 + 4);
    t36 = (t35 + 4);
    t37 = *((unsigned int *)t35);
    t38 = (t37 >> 11);
    *((unsigned int *)t33) = t38;
    t39 = *((unsigned int *)t36);
    t40 = (t39 >> 11);
    *((unsigned int *)t34) = t40;
    t41 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t41 & 15U);
    t42 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t42 & 15U);
    goto LAB13;

LAB14:    t48 = (t0 + 2912U);
    t49 = *((char **)t48);
    memset(t47, 0, 8);
    t48 = (t47 + 4);
    t50 = (t49 + 4);
    t51 = *((unsigned int *)t49);
    t52 = (t51 >> 16);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t50);
    t54 = (t53 >> 16);
    *((unsigned int *)t48) = t54;
    t55 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t55 & 15U);
    t56 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t56 & 15U);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 4, t33, 4, t47, 4);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

}


extern void work_m_00000000002653739981_1648104263_init()
{
	static char *pe[] = {(void *)Cont_81_0};
	xsi_register_didat("work_m_00000000002653739981_1648104263", "isim/SocTB_isim_beh.exe.sim/work/m_00000000002653739981_1648104263.didat");
	xsi_register_executes(pe);
}
