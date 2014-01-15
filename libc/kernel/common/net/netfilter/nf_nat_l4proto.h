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
#ifndef _NF_NAT_L4PROTO_H
#define _NF_NAT_L4PROTO_H
#include <net/netfilter/nf_nat.h>
#include <linux/netfilter/nfnetlink_conntrack.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct nf_nat_range;
struct nf_nat_l3proto;
struct nf_nat_l4proto {
 u8 l4proto;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 bool (*manip_pkt)(struct sk_buff *skb,
 const struct nf_nat_l3proto *l3proto,
 unsigned int iphdroff, unsigned int hdroff,
 const struct nf_conntrack_tuple *tuple,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum nf_nat_manip_type maniptype);
 bool (*in_range)(const struct nf_conntrack_tuple *tuple,
 enum nf_nat_manip_type maniptype,
 const union nf_conntrack_man_proto *min,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const union nf_conntrack_man_proto *max);
 void (*unique_tuple)(const struct nf_nat_l3proto *l3proto,
 struct nf_conntrack_tuple *tuple,
 const struct nf_nat_range *range,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum nf_nat_manip_type maniptype,
 const struct nf_conn *ct);
 int (*nlattr_to_range)(struct nlattr *tb[],
 struct nf_nat_range *range);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
