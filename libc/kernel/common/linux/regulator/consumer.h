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
#ifndef __LINUX_REGULATOR_CONSUMER_H_
#define __LINUX_REGULATOR_CONSUMER_H_
struct device;
struct notifier_block;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define REGULATOR_MODE_FAST 0x1
#define REGULATOR_MODE_NORMAL 0x2
#define REGULATOR_MODE_IDLE 0x4
#define REGULATOR_MODE_STANDBY 0x8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define REGULATOR_EVENT_UNDER_VOLTAGE 0x01
#define REGULATOR_EVENT_OVER_CURRENT 0x02
#define REGULATOR_EVENT_REGULATION_OUT 0x04
#define REGULATOR_EVENT_FAIL 0x08
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define REGULATOR_EVENT_OVER_TEMP 0x10
#define REGULATOR_EVENT_FORCE_DISABLE 0x20
#define REGULATOR_EVENT_VOLTAGE_CHANGE 0x40
#define REGULATOR_EVENT_DISABLE 0x80
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define REGULATOR_EVENT_PRE_DISABLE 0x100
#define REGULATOR_EVENT_ENABLE 0x200
struct regulator;
struct regulator_bulk_data {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const char *supply;
 struct regulator *consumer;
 int ret;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
