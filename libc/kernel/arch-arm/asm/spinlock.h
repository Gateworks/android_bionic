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
#ifndef __ASM_SPINLOCK_H
#define __ASM_SPINLOCK_H
#if __LINUX_ARM_ARCH__ < 6
#error SMP not supported on pre-ARMv6 CPUs
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#include <asm/processor.h>
#define ALT_SMP(smp, up)   "9998:	" smp "\n"   "	.pushsection \".alt.smp.init\", \"a\"\n"   "	.long	9998b\n"   "	" up "\n"   "	.popsection\n"
#define SEV ALT_SMP("sev", "nop")
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WFE(cond) ALT_SMP("wfe" cond, "nop")
#if __LINUX_ARM_ARCH__ >= 7
#else
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define arch_spin_unlock_wait(lock)   do { while (arch_spin_is_locked(lock)) cpu_relax(); } while (0)
#define arch_spin_lock_flags(lock, flags) arch_spin_lock(lock)
#define arch_spin_is_contended arch_spin_is_contended
#define arch_write_can_lock(x) ((x)->lock == 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define arch_read_can_lock(x) ((x)->lock < 0x80000000)
#define arch_read_lock_flags(lock, flags) arch_read_lock(lock)
#define arch_write_lock_flags(lock, flags) arch_write_lock(lock)
#define arch_spin_relax(lock) cpu_relax()
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define arch_read_relax(lock) cpu_relax()
#define arch_write_relax(lock) cpu_relax()
#endif
