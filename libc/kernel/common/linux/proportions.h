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
#ifndef _LINUX_PROPORTIONS_H
#define _LINUX_PROPORTIONS_H
#include <linux/percpu_counter.h>
#include <linux/spinlock.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/mutex.h>
struct prop_global {
 int shift;
 struct percpu_counter events;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct prop_descriptor {
 int index;
 struct prop_global pg[2];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct mutex mutex;
};
struct prop_local_percpu {
 struct percpu_counter events;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int shift;
 unsigned long period;
 raw_spinlock_t lock;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#if BITS_PER_LONG == 32
#define PROP_MAX_SHIFT (3*BITS_PER_LONG/4)
#else
#define PROP_MAX_SHIFT (BITS_PER_LONG/2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define PROP_FRAC_SHIFT (BITS_PER_LONG - PROP_MAX_SHIFT - 1)
#define PROP_FRAC_BASE (1UL << PROP_FRAC_SHIFT)
struct prop_local_single {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long events;
 unsigned long period;
 int shift;
 raw_spinlock_t lock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define INIT_PROP_LOCAL_SINGLE(name)  { .lock = __RAW_SPIN_LOCK_UNLOCKED(name.lock),  }
#endif
