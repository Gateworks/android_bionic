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
#ifndef __ASM_THERM_H
#define __ASM_THERM_H
#define CMD_SET_THERMOSTATE 0x53
#define CMD_GET_THERMOSTATE 0x54
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CMD_GET_STATUS 0x56
#define CMD_GET_TEMPERATURE 0x57
#define CMD_SET_THERMOSTATE2 0x58
#define CMD_GET_THERMOSTATE2 0x59
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CMD_GET_TEMPERATURE2 0x5a
#define CMD_GET_FAN 0x5b
#define CMD_SET_FAN 0x5c
#define FAN_OFF 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FAN_ON 1
#define FAN_ALWAYS_ON 2
struct therm {
 int hi;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int lo;
};
#endif
