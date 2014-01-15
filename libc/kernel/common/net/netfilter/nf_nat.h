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
#ifndef _NF_NAT_H
#define _NF_NAT_H
#include <linux/netfilter_ipv4.h>
#include <linux/netfilter/nf_nat.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <net/netfilter/nf_conntrack_tuple.h>
enum nf_nat_manip_type {
 NF_NAT_MANIP_SRC,
 NF_NAT_MANIP_DST
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define HOOK2MANIP(hooknum) ((hooknum) != NF_INET_POST_ROUTING &&   (hooknum) != NF_INET_LOCAL_IN)
struct nf_nat_seq {
 u_int32_t correction_pos;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int16_t offset_before, offset_after;
};
#include <linux/list.h>
#include <linux/netfilter/nf_conntrack_pptp.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <net/netfilter/nf_conntrack_extend.h>
union nf_conntrack_nat_help {
};
struct nf_conn;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct nf_conn_nat {
 struct nf_nat_seq seq[IP_CT_DIR_MAX];
 struct nf_conn *ct;
 union nf_conntrack_nat_help help;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#if ??? || ???
#else
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
