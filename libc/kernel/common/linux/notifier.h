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
#ifndef _LINUX_NOTIFIER_H
#define _LINUX_NOTIFIER_H
#include <linux/errno.h>
#include <linux/mutex.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/rwsem.h>
#include <linux/srcu.h>
typedef int (*notifier_fn_t)(struct notifier_block *nb,
 unsigned long action, void *data);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct notifier_block {
 notifier_fn_t notifier_call;
 struct notifier_block __rcu *next;
 int priority;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct atomic_notifier_head {
 spinlock_t lock;
 struct notifier_block __rcu *head;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct blocking_notifier_head {
 struct rw_semaphore rwsem;
 struct notifier_block __rcu *head;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct raw_notifier_head {
 struct notifier_block __rcu *head;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct srcu_notifier_head {
 struct mutex mutex;
 struct srcu_struct srcu;
 struct notifier_block __rcu *head;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define ATOMIC_INIT_NOTIFIER_HEAD(name) do {   spin_lock_init(&(name)->lock);   (name)->head = NULL;   } while (0)
#define BLOCKING_INIT_NOTIFIER_HEAD(name) do {   init_rwsem(&(name)->rwsem);   (name)->head = NULL;   } while (0)
#define RAW_INIT_NOTIFIER_HEAD(name) do {   (name)->head = NULL;   } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define srcu_cleanup_notifier_head(name)   cleanup_srcu_struct(&(name)->srcu);
#define ATOMIC_NOTIFIER_INIT(name) {   .lock = __SPIN_LOCK_UNLOCKED(name.lock),   .head = NULL }
#define BLOCKING_NOTIFIER_INIT(name) {   .rwsem = __RWSEM_INITIALIZER((name).rwsem),   .head = NULL }
#define RAW_NOTIFIER_INIT(name) {   .head = NULL }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ATOMIC_NOTIFIER_HEAD(name)   struct atomic_notifier_head name =   ATOMIC_NOTIFIER_INIT(name)
#define BLOCKING_NOTIFIER_HEAD(name)   struct blocking_notifier_head name =   BLOCKING_NOTIFIER_INIT(name)
#define RAW_NOTIFIER_HEAD(name)   struct raw_notifier_head name =   RAW_NOTIFIER_INIT(name)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
