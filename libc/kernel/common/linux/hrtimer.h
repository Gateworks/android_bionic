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
#ifndef _LINUX_HRTIMER_H
#define _LINUX_HRTIMER_H
#include <linux/ktime.h>
#include <linux/init.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/list.h>
#include <linux/wait.h>
#include <linux/percpu.h>
#include <linux/timer.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/timerqueue.h>
struct hrtimer_clock_base;
struct hrtimer_cpu_base;
enum hrtimer_mode {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 HRTIMER_MODE_ABS = 0x0,
 HRTIMER_MODE_REL = 0x1,
 HRTIMER_MODE_PINNED = 0x02,
 HRTIMER_MODE_ABS_PINNED = 0x02,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 HRTIMER_MODE_REL_PINNED = 0x03,
};
enum hrtimer_restart {
 HRTIMER_NORESTART,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 HRTIMER_RESTART,
};
#define HRTIMER_STATE_INACTIVE 0x00
#define HRTIMER_STATE_ENQUEUED 0x01
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HRTIMER_STATE_CALLBACK 0x02
#define HRTIMER_STATE_MIGRATE 0x04
struct hrtimer {
 struct timerqueue_node node;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ktime_t _softexpires;
 enum hrtimer_restart (*function)(struct hrtimer *);
 struct hrtimer_clock_base *base;
 unsigned long state;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct hrtimer_sleeper {
 struct hrtimer timer;
 struct task_struct *task;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct hrtimer_clock_base {
 struct hrtimer_cpu_base *cpu_base;
 int index;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 clockid_t clockid;
 struct timerqueue_head active;
 ktime_t resolution;
 ktime_t (*get_time)(void);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ktime_t softirq_time;
 ktime_t offset;
};
enum hrtimer_base_type {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 HRTIMER_BASE_MONOTONIC,
 HRTIMER_BASE_REALTIME,
 HRTIMER_BASE_BOOTTIME,
 HRTIMER_BASE_TAI,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 HRTIMER_MAX_CLOCK_BASES,
};
struct hrtimer_cpu_base {
 raw_spinlock_t lock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int active_bases;
 unsigned int clock_was_set;
 struct hrtimer_clock_base clock_base[HRTIMER_MAX_CLOCK_BASES];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MONOTONIC_RES_NSEC LOW_RES_NSEC
#define KTIME_MONOTONIC_RES KTIME_LOW_RES
#if BITS_PER_LONG < 64
#else
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ktime_divns(kt, div) (u64)((kt).tv64 / (div))
#endif
#endif
