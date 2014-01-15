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
#ifndef _LINUX_RATELIMIT_H
#define _LINUX_RATELIMIT_H
#include <linux/param.h>
#include <linux/spinlock.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DEFAULT_RATELIMIT_INTERVAL (5 * HZ)
#define DEFAULT_RATELIMIT_BURST 10
struct ratelimit_state {
 raw_spinlock_t lock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int interval;
 int burst;
 int printed;
 int missed;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long begin;
};
#define DEFINE_RATELIMIT_STATE(name, interval_init, burst_init)     struct ratelimit_state name = {   .lock = __RAW_SPIN_LOCK_UNLOCKED(name.lock),   .interval = interval_init,   .burst = burst_init,   }
#define __ratelimit(state) ___ratelimit(state, __func__)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WARN_ON_RATELIMIT(condition, state)   WARN_ON(condition)
#define WARN_RATELIMIT(condition, format, ...)  ({   int rtn = WARN(condition, format, ##__VA_ARGS__);   rtn;  })
#endif
