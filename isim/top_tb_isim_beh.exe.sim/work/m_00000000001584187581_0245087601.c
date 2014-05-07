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

/* This file is designed for use with ISim build 0x2f00eba5 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/FPGA/src/alu_inmax.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {16U, 0U};
static unsigned int ng4[] = {17U, 0U};
static unsigned int ng5[] = {18U, 0U};
static unsigned int ng6[] = {32U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {33U, 0U};
static unsigned int ng9[] = {34U, 0U};
static unsigned int ng10[] = {35U, 0U};
static unsigned int ng11[] = {3U, 0U};
static unsigned int ng12[] = {4U, 0U};
static unsigned int ng13[] = {5U, 0U};
static unsigned int ng14[] = {6U, 0U};
static unsigned int ng15[] = {7U, 0U};
static unsigned int ng16[] = {4294967295U, 4294967295U};



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
    int t10;
    int t11;
    int t12;
    char *t13;
    int t14;
    char *t15;
    char *t16;

LAB0:    t1 = (t0 + 1812U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 2152);
    *((int *)t2) = 1;
    t3 = (t0 + 1840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t4, 8);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB9;

LAB10:    t3 = ((char*)((ng3)));
    t9 = xsi_vlog_unsigned_case_compare(t5, 8, t3, 8);
    if (t9 == 1)
        goto LAB11;

LAB12:    t4 = ((char*)((ng4)));
    t10 = xsi_vlog_unsigned_case_compare(t5, 8, t4, 8);
    if (t10 == 1)
        goto LAB13;

LAB14:    t7 = ((char*)((ng5)));
    t11 = xsi_vlog_unsigned_case_compare(t5, 8, t7, 8);
    if (t11 == 1)
        goto LAB15;

LAB16:    t8 = ((char*)((ng6)));
    t12 = xsi_vlog_unsigned_case_compare(t5, 8, t8, 8);
    if (t12 == 1)
        goto LAB17;

LAB18:    t13 = ((char*)((ng7)));
    t14 = xsi_vlog_unsigned_case_compare(t5, 8, t13, 8);
    if (t14 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB21;

LAB22:    t3 = ((char*)((ng9)));
    t9 = xsi_vlog_unsigned_case_compare(t5, 8, t3, 8);
    if (t9 == 1)
        goto LAB23;

LAB24:    t4 = ((char*)((ng10)));
    t10 = xsi_vlog_unsigned_case_compare(t5, 8, t4, 8);
    if (t10 == 1)
        goto LAB25;

LAB26:    t7 = ((char*)((ng11)));
    t11 = xsi_vlog_unsigned_case_compare(t5, 8, t7, 8);
    if (t11 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB35;

LAB36:
LAB38:
LAB37:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB39:    goto LAB2;

LAB7:    xsi_set_current_line(31, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t0 + 1104);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
    goto LAB39;

LAB9:    goto LAB7;

LAB11:    goto LAB7;

LAB13:    goto LAB7;

LAB15:    goto LAB7;

LAB17:    goto LAB7;

LAB19:    xsi_set_current_line(33, ng0);
    t15 = ((char*)((ng2)));
    t16 = (t0 + 1104);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 4);
    goto LAB39;

LAB21:    goto LAB19;

LAB23:    goto LAB19;

LAB25:    goto LAB19;

LAB27:    xsi_set_current_line(34, ng0);
    t8 = ((char*)((ng7)));
    t13 = (t0 + 1104);
    xsi_vlogvar_assign_value(t13, t8, 0, 0, 4);
    goto LAB39;

LAB29:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB39;

LAB31:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB39;

LAB33:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB39;

LAB35:    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB39;

}

static void Always_45_1(char *t0)
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
    int t10;
    int t11;
    int t12;
    char *t13;
    int t14;
    char *t15;
    int t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 1956U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2160);
    *((int *)t2) = 1;
    t3 = (t0 + 1984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t4, 8);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB9;

LAB10:    t3 = ((char*)((ng11)));
    t9 = xsi_vlog_unsigned_case_compare(t5, 8, t3, 8);
    if (t9 == 1)
        goto LAB11;

LAB12:    t4 = ((char*)((ng12)));
    t10 = xsi_vlog_unsigned_case_compare(t5, 8, t4, 8);
    if (t10 == 1)
        goto LAB13;

LAB14:    t7 = ((char*)((ng13)));
    t11 = xsi_vlog_unsigned_case_compare(t5, 8, t7, 8);
    if (t11 == 1)
        goto LAB15;

LAB16:    t8 = ((char*)((ng14)));
    t12 = xsi_vlog_unsigned_case_compare(t5, 8, t8, 8);
    if (t12 == 1)
        goto LAB17;

LAB18:    t13 = ((char*)((ng15)));
    t14 = xsi_vlog_unsigned_case_compare(t5, 8, t13, 8);
    if (t14 == 1)
        goto LAB19;

LAB20:    t15 = ((char*)((ng8)));
    t16 = xsi_vlog_unsigned_case_compare(t5, 8, t15, 8);
    if (t16 == 1)
        goto LAB21;

LAB22:    t17 = ((char*)((ng10)));
    t18 = xsi_vlog_unsigned_case_compare(t5, 8, t17, 8);
    if (t18 == 1)
        goto LAB23;

LAB24:    t19 = ((char*)((ng9)));
    t20 = xsi_vlog_unsigned_case_compare(t5, 8, t19, 8);
    if (t20 == 1)
        goto LAB25;

LAB26:    t21 = ((char*)((ng2)));
    t22 = xsi_vlog_unsigned_case_compare(t5, 8, t21, 8);
    if (t22 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB29;

LAB30:    t3 = ((char*)((ng4)));
    t9 = xsi_vlog_unsigned_case_compare(t5, 8, t3, 8);
    if (t9 == 1)
        goto LAB31;

LAB32:    t4 = ((char*)((ng5)));
    t10 = xsi_vlog_unsigned_case_compare(t5, 8, t4, 8);
    if (t10 == 1)
        goto LAB33;

LAB34:    t7 = ((char*)((ng6)));
    t11 = xsi_vlog_unsigned_case_compare(t5, 8, t7, 8);
    if (t11 == 1)
        goto LAB35;

LAB36:
LAB38:
LAB37:    xsi_set_current_line(59, ng0);

LAB42:    xsi_set_current_line(60, ng0);
    t8 = ((char*)((ng16)));
    t13 = (t0 + 1196);
    xsi_vlogvar_assign_value(t13, t8, 0, 0, 32);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB39:    goto LAB2;

LAB7:    xsi_set_current_line(49, ng0);

LAB40:    xsi_set_current_line(50, ng0);
    t7 = (t0 + 692U);
    t8 = *((char **)t7);
    t7 = (t0 + 1196);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t0 + 1288);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB39;

LAB9:    goto LAB7;

LAB11:    goto LAB7;

LAB13:    goto LAB7;

LAB15:    goto LAB7;

LAB17:    goto LAB7;

LAB19:    goto LAB7;

LAB21:    goto LAB7;

LAB23:    goto LAB7;

LAB25:    goto LAB7;

LAB27:    xsi_set_current_line(54, ng0);

LAB41:    xsi_set_current_line(55, ng0);
    t23 = (t0 + 692U);
    t24 = *((char **)t23);
    t23 = (t0 + 1196);
    xsi_vlogvar_assign_value(t23, t24, 0, 0, 32);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = (t0 + 1288);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB39;

LAB29:    goto LAB27;

LAB31:    goto LAB27;

LAB33:    goto LAB27;

LAB35:    goto LAB27;

}


extern void work_m_00000000001584187581_0245087601_init()
{
	static char *pe[] = {(void *)Always_27_0,(void *)Always_45_1};
	xsi_register_didat("work_m_00000000001584187581_0245087601", "isim/top_tb_isim_beh.exe.sim/work/m_00000000001584187581_0245087601.didat");
	xsi_register_executes(pe);
}
