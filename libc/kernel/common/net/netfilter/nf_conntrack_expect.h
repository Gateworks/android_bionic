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
#ifndef _NF_CONNTRACK_EXPECT_H
#define _NF_CONNTRACK_EXPECT_H
#include <net/netfilter/nf_conntrack.h>
struct nf_conntrack_expect {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct nf_conntrack_tuple tuple;
 struct nf_conntrack_tuple_mask mask;
 void (*expectfn)(struct nf_conn *new,
 struct nf_conntrack_expect *this);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct nf_conntrack_helper *helper;
 struct nf_conn *master;
 struct timer_list timeout;
 atomic_t use;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int flags;
 unsigned int class;
 struct rcu_head rcu;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NF_CT_EXP_POLICY_NAME_LEN 16
struct nf_conntrack_expect_policy {
 unsigned int max_expected;
 unsigned int timeout;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char name[NF_CT_EXP_POLICY_NAME_LEN];
};
#define NF_CT_EXPECT_CLASS_DEFAULT 0
struct nf_conntrack_expect *
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
__nf_ct_expect_find(struct net *net, u16 zone,
 const struct nf_conntrack_tuple *tuple);
struct nf_conntrack_expect *
nf_ct_expect_find_get(struct net *net, u16 zone,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct nf_conntrack_tuple *tuple);
struct nf_conntrack_expect *
nf_ct_find_expectation(struct net *net, u16 zone,
 const struct nf_conntrack_tuple *tuple);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct nf_conntrack_expect *nf_ct_expect_alloc(struct nf_conn *me);
#endif
