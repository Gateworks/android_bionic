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
#ifndef __ASM_ARM_FIRMWARE_H
#define __ASM_ARM_FIRMWARE_H
#include <linux/bug.h>
struct firmware_ops {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*do_idle)(void);
 int (*set_cpu_boot_addr)(int cpu, unsigned long boot_addr);
 int (*cpu_boot)(int cpu);
 int (*l2x0_init)(void);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define call_firmware_op(op, ...)   ((firmware_ops->op) ? firmware_ops->op(__VA_ARGS__) : (-ENOSYS))
#endif
