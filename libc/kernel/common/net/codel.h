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
#ifndef __NET_SCHED_CODEL_H
#define __NET_SCHED_CODEL_H
#include <linux/types.h>
#include <linux/ktime.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/skbuff.h>
#include <net/pkt_sched.h>
#include <net/inet_ecn.h>
#include <linux/reciprocal_div.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef u32 codel_time_t;
typedef s32 codel_tdiff_t;
#define CODEL_SHIFT 10
#define MS2TIME(a) ((a * NSEC_PER_MSEC) >> CODEL_SHIFT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define codel_time_after(a, b) ((s32)(a) - (s32)(b) > 0)
#define codel_time_after_eq(a, b) ((s32)(a) - (s32)(b) >= 0)
#define codel_time_before(a, b) ((s32)(a) - (s32)(b) < 0)
#define codel_time_before_eq(a, b) ((s32)(a) - (s32)(b) <= 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct codel_skb_cb {
 codel_time_t enqueue_time;
};
struct codel_params {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 codel_time_t target;
 codel_time_t interval;
 bool ecn;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct codel_vars {
 u32 count;
 u32 lastcount;
 bool dropping;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 rec_inv_sqrt;
 codel_time_t first_above_time;
 codel_time_t drop_next;
 codel_time_t ldelay;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define REC_INV_SQRT_BITS (8 * sizeof(u16))
#define REC_INV_SQRT_SHIFT (32 - REC_INV_SQRT_BITS)
struct codel_stats {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 maxpacket;
 u32 drop_count;
 u32 ecn_mark;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef struct sk_buff * (*codel_skb_dequeue_t)(struct codel_vars *vars,
 struct Qdisc *sch);
#endif
