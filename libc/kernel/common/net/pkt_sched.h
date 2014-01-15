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
#ifndef __NET_PKT_SCHED_H
#define __NET_PKT_SCHED_H
#include <linux/jiffies.h>
#include <linux/ktime.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <net/sch_generic.h>
struct qdisc_walker {
 int stop;
 int skip;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int count;
 int (*fn)(struct Qdisc *, unsigned long cl, struct qdisc_walker *);
};
#define QDISC_ALIGNTO 64
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define QDISC_ALIGN(len) (((len) + QDISC_ALIGNTO-1) & ~(QDISC_ALIGNTO-1))
typedef u64 psched_time_t;
typedef long psched_tdiff_t;
#define PSCHED_SHIFT 6
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PSCHED_TICKS2NS(x) ((s64)(x) << PSCHED_SHIFT)
#define PSCHED_NS2TICKS(x) ((x) >> PSCHED_SHIFT)
#define PSCHED_TICKS_PER_SEC PSCHED_NS2TICKS(NSEC_PER_SEC)
#define PSCHED_PASTPERFECT 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct qdisc_watchdog {
 struct hrtimer timer;
 struct Qdisc *qdisc;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
