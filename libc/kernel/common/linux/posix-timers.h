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
#ifndef _linux_POSIX_TIMERS_H
#define _linux_POSIX_TIMERS_H
#include <linux/spinlock.h>
#include <linux/list.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/sched.h>
#include <linux/timex.h>
#include <linux/alarmtimer.h>
union cpu_time_count {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 cputime_t cpu;
 unsigned long long sched;
};
struct cpu_timer_list {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 union cpu_time_count expires, incr;
 struct task_struct *task;
 int firing;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CPUCLOCK_PID(clock) ((pid_t) ~((clock) >> 3))
#define CPUCLOCK_PERTHREAD(clock)   (((clock) & (clockid_t) CPUCLOCK_PERTHREAD_MASK) != 0)
#define CPUCLOCK_PERTHREAD_MASK 4
#define CPUCLOCK_WHICH(clock) ((clock) & (clockid_t) CPUCLOCK_CLOCK_MASK)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CPUCLOCK_CLOCK_MASK 3
#define CPUCLOCK_PROF 0
#define CPUCLOCK_VIRT 1
#define CPUCLOCK_SCHED 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CPUCLOCK_MAX 3
#define CLOCKFD CPUCLOCK_MAX
#define CLOCKFD_MASK (CPUCLOCK_PERTHREAD_MASK|CPUCLOCK_CLOCK_MASK)
#define MAKE_PROCESS_CPUCLOCK(pid, clock)   ((~(clockid_t) (pid) << 3) | (clockid_t) (clock))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MAKE_THREAD_CPUCLOCK(tid, clock)   MAKE_PROCESS_CPUCLOCK((tid), (clock) | CPUCLOCK_PERTHREAD_MASK)
#define FD_TO_CLOCKID(fd) ((~(clockid_t) (fd) << 3) | CLOCKFD)
#define CLOCKID_TO_FD(clk) ((unsigned int) ~((clk) >> 3))
struct k_itimer {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 spinlock_t it_lock;
 clockid_t it_clock;
 timer_t it_id;
 int it_overrun;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int it_overrun_last;
 int it_requeue_pending;
#define REQUEUE_PENDING 1
 int it_sigev_notify;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct signal_struct *it_signal;
 union {
 struct pid *it_pid;
 struct task_struct *it_process;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 };
 struct sigqueue *sigq;
 union {
 struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct hrtimer timer;
 ktime_t interval;
 } real;
 struct cpu_timer_list cpu;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct {
 unsigned int clock;
 unsigned int node;
 unsigned long incr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long expires;
 } mmtimer;
 struct {
 struct alarm alarmtimer;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ktime_t interval;
 } alarm;
 struct rcu_head rcu;
 } it;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct k_clock {
 int (*clock_getres) (const clockid_t which_clock, struct timespec *tp);
 int (*clock_set) (const clockid_t which_clock,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct timespec *tp);
 int (*clock_get) (const clockid_t which_clock, struct timespec * tp);
 int (*clock_adj) (const clockid_t which_clock, struct timex *tx);
 int (*timer_create) (struct k_itimer *timer);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*nsleep) (const clockid_t which_clock, int flags,
 struct timespec *, struct timespec __user *);
 long (*nsleep_restart) (struct restart_block *restart_block);
 int (*timer_set) (struct k_itimer * timr, int flags,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct itimerspec * new_setting,
 struct itimerspec * old_setting);
 int (*timer_del) (struct k_itimer * timr);
#define TIMER_RETRY 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*timer_get) (struct k_itimer * timr,
 struct itimerspec * cur_setting);
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
