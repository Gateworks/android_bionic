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
#ifndef _LINUX_SYSRQ_H
#define _LINUX_SYSRQ_H
#include <linux/errno.h>
#include <linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SYSRQ_DEFAULT_ENABLE 1
#define SYSRQ_ENABLE_LOG 0x0002
#define SYSRQ_ENABLE_KEYBOARD 0x0004
#define SYSRQ_ENABLE_DUMP 0x0008
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SYSRQ_ENABLE_SYNC 0x0010
#define SYSRQ_ENABLE_REMOUNT 0x0020
#define SYSRQ_ENABLE_SIGNAL 0x0040
#define SYSRQ_ENABLE_BOOT 0x0080
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SYSRQ_ENABLE_RTNICE 0x0100
struct sysrq_key_op {
 void (*handler)(int);
 char *help_msg;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char *action_msg;
 int enable_mask;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
