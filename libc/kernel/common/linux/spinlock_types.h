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
#ifndef __LINUX_SPINLOCK_TYPES_H
#define __LINUX_SPINLOCK_TYPES_H
#include <linux/spinlock_types_up.h>
#include <linux/lockdep.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef struct raw_spinlock {
 arch_spinlock_t raw_lock;
} raw_spinlock_t;
#define SPINLOCK_MAGIC 0xdead4ead
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SPINLOCK_OWNER_INIT ((void *)-1L)
#define SPIN_DEP_MAP_INIT(lockname)
#define SPIN_DEBUG_INIT(lockname)
#define __RAW_SPIN_LOCK_INITIALIZER(lockname)   {   .raw_lock = __ARCH_SPIN_LOCK_UNLOCKED,   SPIN_DEBUG_INIT(lockname)   SPIN_DEP_MAP_INIT(lockname) }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __RAW_SPIN_LOCK_UNLOCKED(lockname)   (raw_spinlock_t) __RAW_SPIN_LOCK_INITIALIZER(lockname)
#define DEFINE_RAW_SPINLOCK(x) raw_spinlock_t x = __RAW_SPIN_LOCK_UNLOCKED(x)
typedef struct spinlock {
 union {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct raw_spinlock rlock;
 };
} spinlock_t;
#define __SPIN_LOCK_INITIALIZER(lockname)   { { .rlock = __RAW_SPIN_LOCK_INITIALIZER(lockname) } }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __SPIN_LOCK_UNLOCKED(lockname)   (spinlock_t ) __SPIN_LOCK_INITIALIZER(lockname)
#define DEFINE_SPINLOCK(x) spinlock_t x = __SPIN_LOCK_UNLOCKED(x)
#include <linux/rwlock_types.h>
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
