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
#ifndef _LINUX_KTHREAD_H
#define _LINUX_KTHREAD_H
#include <linux/err.h>
#include <linux/sched.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define kthread_create(threadfn, data, namefmt, arg...)   kthread_create_on_node(threadfn, data, -1, namefmt, ##arg)
struct task_struct *kthread_create_on_cpu(int (*threadfn)(void *data),
 void *data,
 unsigned int cpu,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const char *namefmt);
#define kthread_run(threadfn, data, namefmt, ...)  ({   struct task_struct *__k   = kthread_create(threadfn, data, namefmt, ## __VA_ARGS__);   if (!IS_ERR(__k))   wake_up_process(__k);   __k;  })
struct kthread_work;
typedef void (*kthread_work_func_t)(struct kthread_work *work);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kthread_worker {
 spinlock_t lock;
 struct task_struct *task;
 struct kthread_work *current_work;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct kthread_work {
 kthread_work_func_t func;
 wait_queue_head_t done;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct kthread_worker *worker;
};
#define KTHREAD_WORKER_INIT(worker) {   .lock = __SPIN_LOCK_UNLOCKED((worker).lock),   .work_list = LIST_HEAD_INIT((worker).work_list),   }
#define KTHREAD_WORK_INIT(work, fn) {   .node = LIST_HEAD_INIT((work).node),   .func = (fn),   .done = __WAIT_QUEUE_HEAD_INITIALIZER((work).done),   }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DEFINE_KTHREAD_WORKER(worker)   struct kthread_worker worker = KTHREAD_WORKER_INIT(worker)
#define DEFINE_KTHREAD_WORK(work, fn)   struct kthread_work work = KTHREAD_WORK_INIT(work, fn)
#define DEFINE_KTHREAD_WORKER_ONSTACK(worker) DEFINE_KTHREAD_WORKER(worker)
#define DEFINE_KTHREAD_WORK_ONSTACK(work, fn) DEFINE_KTHREAD_WORK(work, fn)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define init_kthread_worker(worker)   do {   static struct lock_class_key __key;   __init_kthread_worker((worker), "("#worker")->lock", &__key);   } while (0)
#define init_kthread_work(work, fn)   do {   memset((work), 0, sizeof(struct kthread_work));   INIT_LIST_HEAD(&(work)->node);   (work)->func = (fn);   init_waitqueue_head(&(work)->done);   } while (0)
#endif
