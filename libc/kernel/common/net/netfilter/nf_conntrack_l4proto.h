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
#ifndef _NF_CONNTRACK_L4PROTO_H
#define _NF_CONNTRACK_L4PROTO_H
#include <linux/netlink.h>
#include <net/netlink.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <net/netfilter/nf_conntrack.h>
#include <net/netns/generic.h>
struct seq_file;
struct nf_conntrack_l4proto {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u_int16_t l3proto;
 u_int8_t l4proto;
 bool (*pkt_to_tuple)(const struct sk_buff *skb, unsigned int dataoff,
 struct nf_conntrack_tuple *tuple);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 bool (*invert_tuple)(struct nf_conntrack_tuple *inverse,
 const struct nf_conntrack_tuple *orig);
 int (*packet)(struct nf_conn *ct,
 const struct sk_buff *skb,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int dataoff,
 enum ip_conntrack_info ctinfo,
 u_int8_t pf,
 unsigned int hooknum,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int *timeouts);
 bool (*new)(struct nf_conn *ct, const struct sk_buff *skb,
 unsigned int dataoff, unsigned int *timeouts);
 void (*destroy)(struct nf_conn *ct);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*error)(struct net *net, struct nf_conn *tmpl, struct sk_buff *skb,
 unsigned int dataoff, enum ip_conntrack_info *ctinfo,
 u_int8_t pf, unsigned int hooknum);
 int (*print_tuple)(struct seq_file *s,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct nf_conntrack_tuple *);
 int (*print_conntrack)(struct seq_file *s, struct nf_conn *);
 unsigned int *(*get_timeouts)(struct net *net);
 int (*to_nlattr)(struct sk_buff *skb, struct nlattr *nla,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct nf_conn *ct);
 int (*nlattr_size)(void);
 int (*from_nlattr)(struct nlattr *tb[], struct nf_conn *ct);
 int (*tuple_to_nlattr)(struct sk_buff *skb,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct nf_conntrack_tuple *t);
 int (*nlattr_tuple_size)(void);
 int (*nlattr_to_tuple)(struct nlattr *tb[],
 struct nf_conntrack_tuple *t);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct nla_policy *nla_policy;
 size_t nla_size;
#if ???
 struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 size_t obj_size;
 int (*nlattr_to_obj)(struct nlattr *tb[],
 struct net *net, void *data);
 int (*obj_to_nlattr)(struct sk_buff *skb, const void *data);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int nlattr_max;
 const struct nla_policy *nla_policy;
 } ctnl_timeout;
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int *net_id;
 int (*init_net)(struct net *net, u_int16_t proto);
 struct nf_proto_net *(*get_net_proto)(struct net *net);
 const char *name;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct module *me;
};
#define MAX_NF_CT_PROTO 256
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
