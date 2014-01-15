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
#ifndef __NET_ACT_API_H
#define __NET_ACT_API_H
#include <net/sch_generic.h>
#include <net/pkt_sched.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct tcf_common {
 struct tcf_common *tcfc_next;
 u32 tcfc_index;
 int tcfc_refcnt;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int tcfc_bindcnt;
 u32 tcfc_capab;
 int tcfc_action;
 struct tcf_t tcfc_tm;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct gnet_stats_basic_packed tcfc_bstats;
 struct gnet_stats_queue tcfc_qstats;
 struct gnet_stats_rate_est tcfc_rate_est;
 spinlock_t tcfc_lock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct rcu_head tcfc_rcu;
};
#define tcf_next common.tcfc_next
#define tcf_index common.tcfc_index
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define tcf_refcnt common.tcfc_refcnt
#define tcf_bindcnt common.tcfc_bindcnt
#define tcf_capab common.tcfc_capab
#define tcf_action common.tcfc_action
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define tcf_tm common.tcfc_tm
#define tcf_bstats common.tcfc_bstats
#define tcf_qstats common.tcfc_qstats
#define tcf_rate_est common.tcfc_rate_est
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define tcf_lock common.tcfc_lock
#define tcf_rcu common.tcfc_rcu
struct tcf_hashinfo {
 struct tcf_common **htab;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int hmask;
 rwlock_t *lock;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
