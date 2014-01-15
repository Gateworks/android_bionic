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
#ifndef PADATA_H
#define PADATA_H
#include <linux/workqueue.h>
#include <linux/spinlock.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/list.h>
#include <linux/timer.h>
#include <linux/notifier.h>
#include <linux/kobject.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PADATA_CPU_SERIAL 0x01
#define PADATA_CPU_PARALLEL 0x02
struct padata_priv {
 struct parallel_data *pd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int cb_cpu;
 int info;
 void (*parallel)(struct padata_priv *padata);
 void (*serial)(struct padata_priv *padata);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct padata_list {
 spinlock_t lock;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct padata_serial_queue {
 struct padata_list serial;
 struct parallel_data *pd;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct padata_parallel_queue {
 struct padata_list parallel;
 struct padata_list reorder;
 struct parallel_data *pd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 atomic_t num_obj;
 int cpu_index;
};
struct padata_cpumask {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 cpumask_var_t pcpu;
 cpumask_var_t cbcpu;
};
struct parallel_data {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct padata_instance *pinst;
 struct padata_parallel_queue __percpu *pqueue;
 struct padata_serial_queue __percpu *squeue;
 atomic_t reorder_objects;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 atomic_t refcnt;
 struct padata_cpumask cpumask;
 spinlock_t lock ____cacheline_aligned;
 spinlock_t seq_lock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int seq_nr;
 unsigned int processed;
 struct timer_list timer;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct padata_instance {
 struct notifier_block cpu_notifier;
 struct workqueue_struct *wq;
 struct parallel_data *pd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct padata_cpumask cpumask;
 struct blocking_notifier_head cpumask_change_notifier;
 struct kobject kobj;
 struct mutex lock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 flags;
#define PADATA_INIT 1
#define PADATA_RESET 2
#define PADATA_INVALID 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
