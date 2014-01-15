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
#ifndef _NF_CONNTRACK_H
#define _NF_CONNTRACK_H
#include <linux/netfilter/nf_conntrack_common.h>
#include <linux/bitops.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/compiler.h>
#include <linux/atomic.h>
#include <linux/netfilter/nf_conntrack_tcp.h>
#include <linux/netfilter/nf_conntrack_dccp.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/netfilter/nf_conntrack_sctp.h>
#include <linux/netfilter/nf_conntrack_proto_gre.h>
#include <net/netfilter/ipv6/nf_conntrack_icmpv6.h>
#include <net/netfilter/nf_conntrack_tuple.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
union nf_conntrack_proto {
 struct nf_ct_dccp dccp;
 struct ip_ct_sctp sctp;
 struct ip_ct_tcp tcp;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct nf_ct_gre gre;
};
union nf_conntrack_expect_proto {
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/types.h>
#include <linux/skbuff.h>
#include <linux/timer.h>
#define NF_CT_ASSERT(x)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct nf_conntrack_helper;
#define NF_CT_MAX_EXPECT_CLASSES 4
struct nf_conn_help {
 struct nf_conntrack_helper __rcu *helper;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct hlist_head expectations;
 u8 expecting[NF_CT_MAX_EXPECT_CLASSES];
 char data[];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <net/netfilter/ipv4/nf_conntrack_ipv4.h>
#include <net/netfilter/ipv6/nf_conntrack_ipv6.h>
struct nf_conn {
 struct nf_conntrack ct_general;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 spinlock_t lock;
 struct nf_conntrack_tuple_hash tuplehash[IP_CT_DIR_MAX];
 unsigned long status;
 struct nf_conn *master;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct timer_list timeout;
 struct nf_ct_ext *ext;
 union nf_conntrack_proto proto;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define nf_ct_tuple(ct, dir) (&(ct)->tuplehash[dir].tuple)
#define master_ct(conntr) (conntr->master)
struct kernel_param;
#define NF_CT_STAT_INC(net, count) __this_cpu_inc((net)->ct.stat->count)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NF_CT_STAT_INC_ATOMIC(net, count) this_cpu_inc((net)->ct.stat->count)
#define MODULE_ALIAS_NFCT_HELPER(helper)   MODULE_ALIAS("nfct-helper-" helper)
#endif
