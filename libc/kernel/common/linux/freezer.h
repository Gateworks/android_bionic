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
#ifndef FREEZER_H_INCLUDED
#define FREEZER_H_INCLUDED
#include <linux/debug_locks.h>
#include <linux/sched.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/wait.h>
#include <linux/atomic.h>
#define freezable_schedule() schedule()
#define freezable_schedule_unsafe() schedule()
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define freezable_schedule_timeout(timeout) schedule_timeout(timeout)
#define freezable_schedule_timeout_interruptible(timeout)   schedule_timeout_interruptible(timeout)
#define freezable_schedule_timeout_killable(timeout)   schedule_timeout_killable(timeout)
#define freezable_schedule_timeout_killable_unsafe(timeout)   schedule_timeout_killable(timeout)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define freezable_schedule_hrtimeout_range(expires, delta, mode)   schedule_hrtimeout_range(expires, delta, mode)
#define wait_event_freezable(wq, condition)   wait_event_interruptible(wq, condition)
#define wait_event_freezable_timeout(wq, condition, timeout)   wait_event_interruptible_timeout(wq, condition, timeout)
#define wait_event_freezable_exclusive(wq, condition)   wait_event_interruptible_exclusive(wq, condition)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define wait_event_freezekillable(wq, condition)   wait_event_killable(wq, condition)
#define wait_event_freezekillable_unsafe(wq, condition)   wait_event_killable(wq, condition)
#endif
