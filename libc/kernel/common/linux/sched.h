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
#ifndef _LINUX_SCHED_H
#define _LINUX_SCHED_H
#include <uapi/linux/sched.h>
#include <asm/param.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/capability.h>
#include <linux/threads.h>
#include <linux/kernel.h>
#include <linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/timex.h>
#include <linux/jiffies.h>
#include <linux/thread_info.h>
#include <linux/cpumask.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/errno.h>
#include <linux/nodemask.h>
#include <linux/mm_types.h>
#include <asm/page.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <asm/ptrace.h>
#include <asm/cputime.h>
#include <linux/smp.h>
#include <linux/sem.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/signal.h>
#include <linux/compiler.h>
#include <linux/completion.h>
#include <linux/pid.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/percpu.h>
#include <linux/topology.h>
#include <linux/proportions.h>
#include <linux/seccomp.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/rcupdate.h>
#include <linux/rculist.h>
#include <linux/rtmutex.h>
#include <linux/time.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/param.h>
#include <linux/resource.h>
#include <linux/timer.h>
#include <linux/hrtimer.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/task_io_accounting.h>
#include <linux/latencytop.h>
#include <linux/cred.h>
#include <linux/llist.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/uidgid.h>
#include <linux/gfp.h>
#include <asm/processor.h>
struct exec_domain;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct futex_pi_state;
struct robust_list_head;
struct bio_list;
struct fs_struct;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct perf_event_context;
struct blk_plug;
#define CLONE_KERNEL (CLONE_FS | CLONE_FILES | CLONE_SIGHAND)
#define FSHIFT 11
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FIXED_1 (1<<FSHIFT)
#define LOAD_FREQ (5*HZ+1)
#define EXP_1 1884
#define EXP_5 2014
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EXP_15 2037
#define CALC_LOAD(load,exp,n)   load *= exp;   load += n*(FIXED_1-exp);   load >>= FSHIFT;
struct task_migration_notifier {
 struct task_struct *task;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int from_cpu;
 int to_cpu;
};
struct seq_file;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct cfs_rq;
struct task_group;
#define TASK_RUNNING 0
#define TASK_INTERRUPTIBLE 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TASK_UNINTERRUPTIBLE 2
#define __TASK_STOPPED 4
#define __TASK_TRACED 8
#define EXIT_ZOMBIE 16
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EXIT_DEAD 32
#define TASK_DEAD 64
#define TASK_WAKEKILL 128
#define TASK_WAKING 256
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TASK_PARKED 512
#define TASK_STATE_MAX 1024
#define TASK_KILLABLE (TASK_WAKEKILL | TASK_UNINTERRUPTIBLE)
#define TASK_STOPPED (TASK_WAKEKILL | __TASK_STOPPED)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TASK_TRACED (TASK_WAKEKILL | __TASK_TRACED)
#define TASK_NORMAL (TASK_INTERRUPTIBLE | TASK_UNINTERRUPTIBLE)
#define TASK_ALL (TASK_NORMAL | __TASK_STOPPED | __TASK_TRACED)
#define TASK_REPORT (TASK_RUNNING | TASK_INTERRUPTIBLE |   TASK_UNINTERRUPTIBLE | __TASK_STOPPED |   __TASK_TRACED)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define task_is_traced(task) ((task->state & __TASK_TRACED) != 0)
#define task_is_stopped(task) ((task->state & __TASK_STOPPED) != 0)
#define task_is_dead(task) ((task)->exit_state != 0)
#define task_is_stopped_or_traced(task)   ((task->state & (__TASK_STOPPED | __TASK_TRACED)) != 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define task_contributes_to_load(task)   ((task->state & TASK_UNINTERRUPTIBLE) != 0 &&   (task->flags & PF_FROZEN) == 0)
#define __set_task_state(tsk, state_value)   do { (tsk)->state = (state_value); } while (0)
#define set_task_state(tsk, state_value)   set_mb((tsk)->state, (state_value))
#define __set_current_state(state_value)   do { current->state = (state_value); } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define set_current_state(state_value)   set_mb(current->state, (state_value))
#define TASK_COMM_LEN 16
#include <linux/spinlock.h>
struct task_struct;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
