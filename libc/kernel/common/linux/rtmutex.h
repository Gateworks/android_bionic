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
#ifndef __LINUX_RT_MUTEX_H
#define __LINUX_RT_MUTEX_H
#include <linux/linkage.h>
#include <linux/plist.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/spinlock_types.h>
struct rt_mutex {
 raw_spinlock_t wait_lock;
 struct task_struct *owner;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct rt_mutex_waiter;
struct hrtimer_sleeper;
#define rt_mutex_debug_check_no_locks_held(task) do { } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __DEBUG_RT_MUTEX_INITIALIZER(mutexname)
#define rt_mutex_init(mutex) __rt_mutex_init(mutex, NULL)
#define rt_mutex_debug_task_free(t) do { } while (0)
#define __RT_MUTEX_INITIALIZER(mutexname)   { .wait_lock = __RAW_SPIN_LOCK_UNLOCKED(mutexname.wait_lock)   , .wait_list = PLIST_HEAD_INIT(mutexname.wait_list)   , .owner = NULL   __DEBUG_RT_MUTEX_INITIALIZER(mutexname)}
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DEFINE_RT_MUTEX(mutexname)   struct rt_mutex mutexname = __RT_MUTEX_INITIALIZER(mutexname)
#define INIT_RT_MUTEXES(tsk)
#endif
