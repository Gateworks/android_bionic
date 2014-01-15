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
#ifndef _NF_NAT_L3PROTO_H
#define _NF_NAT_L3PROTO_H
struct nf_nat_l4proto;
struct nf_nat_l3proto {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 l3proto;
 bool (*in_range)(const struct nf_conntrack_tuple *t,
 const struct nf_nat_range *range);
 u32 (*secure_port)(const struct nf_conntrack_tuple *t, __be16);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 bool (*manip_pkt)(struct sk_buff *skb,
 unsigned int iphdroff,
 const struct nf_nat_l4proto *l4proto,
 const struct nf_conntrack_tuple *target,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum nf_nat_manip_type maniptype);
 void (*csum_update)(struct sk_buff *skb, unsigned int iphdroff,
 __sum16 *check,
 const struct nf_conntrack_tuple *t,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum nf_nat_manip_type maniptype);
 void (*csum_recalc)(struct sk_buff *skb, u8 proto,
 void *data, __sum16 *check,
 int datalen, int oldlen);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*decode_session)(struct sk_buff *skb,
 const struct nf_conn *ct,
 enum ip_conntrack_dir dir,
 unsigned long statusbit,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct flowi *fl);
 int (*nlattr_to_range)(struct nlattr *tb[],
 struct nf_nat_range *range);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
