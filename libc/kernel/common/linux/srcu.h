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
#ifndef _LINUX_SRCU_H
#define _LINUX_SRCU_H
#include <linux/mutex.h>
#include <linux/rcupdate.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/workqueue.h>
struct srcu_struct_array {
 unsigned long c[2];
 unsigned long seq[2];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct rcu_batch {
 struct rcu_head *head, **tail;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RCU_BATCH_INIT(name) { NULL, &(name.head) }
struct srcu_struct {
 unsigned completed;
 struct srcu_struct_array __percpu *per_cpu_ref;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 spinlock_t queue_lock;
 struct rcu_batch batch_queue;
 struct rcu_batch batch_check0;
 struct rcu_batch batch_check1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct rcu_batch batch_done;
};
#define __SRCU_DEP_MAP_INIT(srcu_name)
#define __SRCU_STRUCT_INIT(name)   {   .completed = -300,   .per_cpu_ref = &name##_srcu_array,   .queue_lock = __SPIN_LOCK_UNLOCKED(name.queue_lock),   .running = false,   .batch_queue = RCU_BATCH_INIT(name.batch_queue),   .batch_check0 = RCU_BATCH_INIT(name.batch_check0),   .batch_check1 = RCU_BATCH_INIT(name.batch_check1),   .batch_done = RCU_BATCH_INIT(name.batch_done),   .work = __DELAYED_WORK_INITIALIZER(name.work, process_srcu, 0),  __SRCU_DEP_MAP_INIT(name)   }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DEFINE_SRCU(name)   static DEFINE_PER_CPU(struct srcu_struct_array, name##_srcu_array);  struct srcu_struct name = __SRCU_STRUCT_INIT(name);
#define DEFINE_STATIC_SRCU(name)   static DEFINE_PER_CPU(struct srcu_struct_array, name##_srcu_array);  static struct srcu_struct name = __SRCU_STRUCT_INIT(name);
#define srcu_dereference_check(p, sp, c)   __rcu_dereference_check((p), srcu_read_lock_held(sp) || (c), __rcu)
#define srcu_dereference(p, sp) srcu_dereference_check((p), (sp), 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
