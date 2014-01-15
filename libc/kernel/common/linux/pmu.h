/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _LINUX_PMU_H
#define _LINUX_PMU_H
#include <uapi/linux/pmu.h>
#define PMU_MAX_BATTERIES 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PMU_PWR_AC_PRESENT 0x00000001
#define PMU_BATT_PRESENT 0x00000001
#define PMU_BATT_CHARGING 0x00000002
#define PMU_BATT_TYPE_MASK 0x000000f0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PMU_BATT_TYPE_SMART 0x00000010
#define PMU_BATT_TYPE_HOOPER 0x00000020
#define PMU_BATT_TYPE_COMET 0x00000030
struct pmu_battery_info
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
{
 unsigned int flags;
 unsigned int charge;
 unsigned int max_charge;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 signed int amperage;
 unsigned int voltage;
 unsigned int time_remaining;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define pmu_sys_suspended 0
#endif
