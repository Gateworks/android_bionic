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
#ifndef _LINUX__INIT_TASK_H
#define _LINUX__INIT_TASK_H
#include <linux/rcupdate.h>
#include <linux/irqflags.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/utsname.h>
#include <linux/lockdep.h>
#include <linux/ftrace.h>
#include <linux/ipc.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/pid_namespace.h>
#include <linux/user_namespace.h>
#include <linux/securebits.h>
#include <linux/seqlock.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <net/net_namespace.h>
#include <linux/sched/rt.h>
#define INIT_PUSHABLE_TASKS(tsk)
#define INIT_GROUP_RWSEM(sig)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define INIT_CPUSET_SEQ
#define INIT_SIGNALS(sig) {   .nr_threads = 1,   .wait_chldexit = __WAIT_QUEUE_HEAD_INITIALIZER(sig.wait_chldexit),  .shared_pending = {   .list = LIST_HEAD_INIT(sig.shared_pending.list),   .signal = {{0}}},   .posix_timers = LIST_HEAD_INIT(sig.posix_timers),   .cpu_timers = INIT_CPU_TIMERS(sig.cpu_timers),   .rlim = INIT_RLIMITS,   .cputimer = {   .cputime = INIT_CPUTIME,   .running = 0,   .lock = __RAW_SPIN_LOCK_UNLOCKED(sig.cputimer.lock),   },   .cred_guard_mutex =   __MUTEX_INITIALIZER(sig.cred_guard_mutex),   INIT_GROUP_RWSEM(sig)  }
#define INIT_SIGHAND(sighand) {   .count = ATOMIC_INIT(1),   .action = { { { .sa_handler = SIG_DFL, } }, },   .siglock = __SPIN_LOCK_UNLOCKED(sighand.siglock),   .signalfd_wqh = __WAIT_QUEUE_HEAD_INITIALIZER(sighand.signalfd_wqh),  }
#define INIT_STRUCT_PID {   .count = ATOMIC_INIT(1),   .tasks = {   { .first = NULL },   { .first = NULL },   { .first = NULL },   },   .level = 0,   .numbers = { {   .nr = 0,   .ns = &init_pid_ns,   .pid_chain = { .next = NULL, .pprev = NULL },   }, }  }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define INIT_PID_LINK(type)  {   .node = {   .next = NULL,   .pprev = NULL,   },   .pid = &init_struct_pid,  }
#define INIT_IDS
#define INIT_TASK_RCU_BOOST()
#define INIT_TASK_RCU_TREE_PREEMPT(tsk)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define INIT_TASK_RCU_PREEMPT(tsk)
#define INIT_CGROUP_SCHED(tsk)
#define INIT_PERF_EVENTS(tsk)
#define INIT_VTIME(tsk)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define INIT_TASK_COMM "swapper"
#define INIT_TASK(tsk)  {   .state = 0,   .stack = &init_thread_info,   .usage = ATOMIC_INIT(2),   .flags = PF_KTHREAD,   .prio = MAX_PRIO-20,   .static_prio = MAX_PRIO-20,   .normal_prio = MAX_PRIO-20,   .policy = SCHED_NORMAL,   .cpus_allowed = CPU_MASK_ALL,   .nr_cpus_allowed= NR_CPUS,   .mm = NULL,   .active_mm = &init_mm,   .se = {   .group_node = LIST_HEAD_INIT(tsk.se.group_node),   },   .rt = {   .run_list = LIST_HEAD_INIT(tsk.rt.run_list),   .time_slice = RR_TIMESLICE,   },   .tasks = LIST_HEAD_INIT(tsk.tasks),   INIT_PUSHABLE_TASKS(tsk)   INIT_CGROUP_SCHED(tsk)   .ptraced = LIST_HEAD_INIT(tsk.ptraced),   .ptrace_entry = LIST_HEAD_INIT(tsk.ptrace_entry),   .real_parent = &tsk,   .parent = &tsk,   .children = LIST_HEAD_INIT(tsk.children),   .sibling = LIST_HEAD_INIT(tsk.sibling),   .group_leader = &tsk,   RCU_POINTER_INITIALIZER(real_cred, &init_cred),   RCU_POINTER_INITIALIZER(cred, &init_cred),   .comm = INIT_TASK_COMM,   .thread = INIT_THREAD,   .fs = &init_fs,   .files = &init_files,   .signal = &init_signals,   .sighand = &init_sighand,   .nsproxy = &init_nsproxy,   .pending = {   .list = LIST_HEAD_INIT(tsk.pending.list),   .signal = {{0}}},   .blocked = {{0}},   .alloc_lock = __SPIN_LOCK_UNLOCKED(tsk.alloc_lock),   .journal_info = NULL,   .cpu_timers = INIT_CPU_TIMERS(tsk.cpu_timers),   .pi_lock = __RAW_SPIN_LOCK_UNLOCKED(tsk.pi_lock),   .timer_slack_ns = 50000,     .pids = {   [PIDTYPE_PID] = INIT_PID_LINK(PIDTYPE_PID),   [PIDTYPE_PGID] = INIT_PID_LINK(PIDTYPE_PGID),   [PIDTYPE_SID] = INIT_PID_LINK(PIDTYPE_SID),   },   .thread_group = LIST_HEAD_INIT(tsk.thread_group),   INIT_IDS   INIT_PERF_EVENTS(tsk)   INIT_TRACE_IRQFLAGS   INIT_LOCKDEP   INIT_FTRACE_GRAPH   INIT_TRACE_RECURSION   INIT_TASK_RCU_PREEMPT(tsk)   INIT_CPUSET_SEQ   INIT_VTIME(tsk)  }
#define INIT_CPU_TIMERS(cpu_timers)  {   LIST_HEAD_INIT(cpu_timers[0]),   LIST_HEAD_INIT(cpu_timers[1]),   LIST_HEAD_INIT(cpu_timers[2]),  }
#define __init_task_data __attribute__((__section__(".data..init_task")))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
