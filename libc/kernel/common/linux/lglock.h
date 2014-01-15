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
#ifndef __LINUX_LGLOCK_H
#define __LINUX_LGLOCK_H
#include <linux/spinlock.h>
#include <linux/lockdep.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/percpu.h>
#include <linux/cpu.h>
#include <linux/notifier.h>
#define br_lock_init(name) lg_lock_init(name, #name)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define br_read_lock(name) lg_local_lock(name)
#define br_read_unlock(name) lg_local_unlock(name)
#define br_write_lock(name) lg_global_lock(name)
#define br_write_unlock(name) lg_global_unlock(name)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DEFINE_BRLOCK(name) DEFINE_LGLOCK(name)
#define DEFINE_STATIC_BRLOCK(name) DEFINE_STATIC_LGLOCK(name)
#define LOCKDEP_INIT_MAP(a, b, c, d)
struct lglock {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 arch_spinlock_t __percpu *lock;
};
#define DEFINE_LGLOCK(name)   static DEFINE_PER_CPU(arch_spinlock_t, name ## _lock)   = __ARCH_SPIN_LOCK_UNLOCKED;   struct lglock name = { .lock = &name ## _lock }
#define DEFINE_STATIC_LGLOCK(name)   static DEFINE_PER_CPU(arch_spinlock_t, name ## _lock)   = __ARCH_SPIN_LOCK_UNLOCKED;   static struct lglock name = { .lock = &name ## _lock }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
