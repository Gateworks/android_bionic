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
#ifndef _LINUX_LGUEST_H
#define _LINUX_LGUEST_H
#ifndef __ASSEMBLY__
#include <linux/time.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <asm/irq.h>
#include <asm/lguest_hcall.h>
#define LG_CLOCK_MIN_DELTA 100UL
#define LG_CLOCK_MAX_DELTA ULONG_MAX
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct lguest_data {
 unsigned int irq_enabled;
 DECLARE_BITMAP(blocked_interrupts, LGUEST_IRQS);
 unsigned long cr2;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct timespec time;
 int irq_pending;
 u8 hcall_status[LHCALL_RING_SIZE];
 struct hcall_args hcalls[LHCALL_RING_SIZE];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long reserve_mem;
 u32 tsc_khz;
 unsigned long noirq_start, noirq_end;
 unsigned long kernel_address;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int syscall_vec;
};
#endif
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
