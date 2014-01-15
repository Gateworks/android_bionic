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
#ifndef _NF_CONNTRACK_EXTEND_H
#define _NF_CONNTRACK_EXTEND_H
#include <linux/slab.h>
#include <net/netfilter/nf_conntrack.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum nf_ct_ext_id {
 NF_CT_EXT_HELPER,
 NF_CT_EXT_ACCT,
 NF_CT_EXT_NUM,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define NF_CT_EXT_HELPER_TYPE struct nf_conn_help
#define NF_CT_EXT_NAT_TYPE struct nf_conn_nat
#define NF_CT_EXT_ACCT_TYPE struct nf_conn_counter
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NF_CT_EXT_ECACHE_TYPE struct nf_conntrack_ecache
#define NF_CT_EXT_ZONE_TYPE struct nf_conntrack_zone
#define NF_CT_EXT_TSTAMP_TYPE struct nf_conn_tstamp
#define NF_CT_EXT_TIMEOUT_TYPE struct nf_conn_timeout
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NF_CT_EXT_LABELS_TYPE struct nf_conn_labels
struct nf_ct_ext {
 struct rcu_head rcu;
 u8 offset[NF_CT_EXT_NUM];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 len;
 char data[0];
};
#define nf_ct_ext_find(ext, id)   ((id##_TYPE *)__nf_ct_ext_find((ext), (id)))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define nf_ct_ext_add(ct, id, gfp)   ((id##_TYPE *)__nf_ct_ext_add_length((ct), (id), 0, (gfp)))
#define nf_ct_ext_add_length(ct, id, len, gfp)   ((id##_TYPE *)__nf_ct_ext_add_length((ct), (id), (len), (gfp)))
#define NF_CT_EXT_F_PREALLOC 0x0001
struct nf_ct_ext_type {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*destroy)(struct nf_conn *ct);
 void (*move)(void *new, void *old);
 enum nf_ct_ext_id id;
 unsigned int flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 len;
 u8 align;
 u8 alloc_size;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
