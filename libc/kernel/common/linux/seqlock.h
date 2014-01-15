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
#ifndef __LINUX_SEQLOCK_H
#define __LINUX_SEQLOCK_H
#include <linux/spinlock.h>
#include <linux/preempt.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <asm/processor.h>
typedef struct seqcount {
 unsigned sequence;
} seqcount_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SEQCNT_ZERO { 0 }
#define seqcount_init(x) do { *(x) = (seqcount_t) SEQCNT_ZERO; } while (0)
typedef struct {
 struct seqcount seqcount;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 spinlock_t lock;
} seqlock_t;
#define __SEQLOCK_UNLOCKED(lockname)   {   .seqcount = SEQCNT_ZERO,   .lock = __SPIN_LOCK_UNLOCKED(lockname)   }
#define seqlock_init(x)   do {   seqcount_init(&(x)->seqcount);   spin_lock_init(&(x)->lock);   } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DEFINE_SEQLOCK(x)   seqlock_t x = __SEQLOCK_UNLOCKED(x)
#define write_seqlock_irqsave(lock, flags)   do { flags = __write_seqlock_irqsave(lock); } while (0)
#endif
