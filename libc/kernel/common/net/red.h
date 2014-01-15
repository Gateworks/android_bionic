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
#ifndef __NET_SCHED_RED_H
#define __NET_SCHED_RED_H
#include <linux/types.h>
#include <linux/bug.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <net/pkt_sched.h>
#include <net/inet_ecn.h>
#include <net/dsfield.h>
#include <linux/reciprocal_div.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RED_ONE_PERCENT ((u32)DIV_ROUND_CLOSEST(1ULL<<32, 100))
#define MAX_P_MIN (1 * RED_ONE_PERCENT)
#define MAX_P_MAX (50 * RED_ONE_PERCENT)
#define MAX_P_ALPHA(val) min(MAX_P_MIN, val / 4)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RED_STAB_SIZE 256
#define RED_STAB_MASK (RED_STAB_SIZE - 1)
struct red_stats {
 u32 prob_drop;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 prob_mark;
 u32 forced_drop;
 u32 forced_mark;
 u32 pdrop;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 other;
};
struct red_parms {
 u32 qth_min;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 qth_max;
 u32 Scell_max;
 u32 max_P;
 u32 max_P_reciprocal;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 qth_delta;
 u32 target_min;
 u32 target_max;
 u8 Scell_log;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 Wlog;
 u8 Plog;
 u8 Stab[RED_STAB_SIZE];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct red_vars {
 int qcount;
 u32 qR;
 unsigned long qavg;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ktime_t qidlestart;
};
enum {
 RED_BELOW_MIN_THRESH,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 RED_BETWEEN_TRESH,
 RED_ABOVE_MAX_TRESH,
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 RED_DONT_MARK,
 RED_PROB_MARK,
 RED_HARD_MARK,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
