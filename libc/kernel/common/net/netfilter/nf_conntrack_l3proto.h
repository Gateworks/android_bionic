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
#ifndef _NF_CONNTRACK_L3PROTO_H
#define _NF_CONNTRACK_L3PROTO_H
#include <linux/netlink.h>
#include <net/netlink.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/seq_file.h>
#include <net/netfilter/nf_conntrack.h>
struct nf_conntrack_l3proto {
 u_int16_t l3proto;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const char *name;
 bool (*pkt_to_tuple)(const struct sk_buff *skb, unsigned int nhoff,
 struct nf_conntrack_tuple *tuple);
 bool (*invert_tuple)(struct nf_conntrack_tuple *inverse,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct nf_conntrack_tuple *orig);
 int (*print_tuple)(struct seq_file *s,
 const struct nf_conntrack_tuple *);
 int (*get_l4proto)(const struct sk_buff *skb, unsigned int nhoff,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int *dataoff, u_int8_t *protonum);
 int (*tuple_to_nlattr)(struct sk_buff *skb,
 const struct nf_conntrack_tuple *t);
 int (*nlattr_tuple_size)(void);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*nlattr_to_tuple)(struct nlattr *tb[],
 struct nf_conntrack_tuple *t);
 const struct nla_policy *nla_policy;
 size_t nla_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*init_net)(struct net *net);
 struct module *me;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
