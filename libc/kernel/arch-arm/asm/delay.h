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
#ifndef __ASM_ARM_DELAY_H
#define __ASM_ARM_DELAY_H
#include <asm/memory.h>
#include <asm/param.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MAX_UDELAY_MS 2
#define UDELAY_MULT ((UL(2199023) * HZ) >> 11)
#define UDELAY_SHIFT 30
#ifndef __ASSEMBLY__
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct delay_timer {
 unsigned long (*read_current_timer)(void);
 unsigned long freq;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __delay(n) arm_delay_ops.delay(n)
#define __udelay(n) arm_delay_ops.udelay(n)
#define __const_udelay(n) arm_delay_ops.const_udelay(n)
#define udelay(n)   (__builtin_constant_p(n) ?   ((n) > (MAX_UDELAY_MS * 1000) ? __bad_udelay() :   __const_udelay((n) * UDELAY_MULT)) :   __udelay(n))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ARCH_HAS_READ_CURRENT_TIMER
#endif
#endif
