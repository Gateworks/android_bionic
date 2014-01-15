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
#ifndef _NET_DN_FIB_H
#define _NET_DN_FIB_H
#include <linux/netlink.h>
struct dn_fib_res {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct fib_rule *r;
 struct dn_fib_info *fi;
 unsigned char prefixlen;
 unsigned char nh_sel;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char type;
 unsigned char scope;
};
struct dn_fib_nh {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct net_device *nh_dev;
 unsigned int nh_flags;
 unsigned char nh_scope;
 int nh_weight;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int nh_power;
 int nh_oif;
 __le16 nh_gw;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct dn_fib_info {
 struct dn_fib_info *fib_next;
 struct dn_fib_info *fib_prev;
 int fib_treeref;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 atomic_t fib_clntref;
 int fib_dead;
 unsigned int fib_flags;
 int fib_protocol;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 fib_prefsrc;
 __u32 fib_priority;
 __u32 fib_metrics[RTAX_MAX];
 int fib_nhs;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int fib_power;
 struct dn_fib_nh fib_nh[0];
#define dn_fib_dev fib_nh[0].nh_dev
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DN_FIB_RES_RESET(res) ((res).nh_sel = 0)
#define DN_FIB_RES_NH(res) ((res).fi->fib_nh[(res).nh_sel])
#define DN_FIB_RES_PREFSRC(res) ((res).fi->fib_prefsrc ? : __dn_fib_res_prefsrc(&res))
#define DN_FIB_RES_GW(res) (DN_FIB_RES_NH(res).nh_gw)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DN_FIB_RES_DEV(res) (DN_FIB_RES_NH(res).nh_dev)
#define DN_FIB_RES_OIF(res) (DN_FIB_RES_NH(res).nh_oif)
typedef struct {
 __le16 datum;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} dn_fib_key_t;
typedef struct {
 __le16 datum;
} dn_fib_hash_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef struct {
 __u16 datum;
} dn_fib_idx_t;
struct dn_fib_node {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct dn_fib_node *fn_next;
 struct dn_fib_info *fn_info;
#define DN_FIB_INFO(f) ((f)->fn_info)
 dn_fib_key_t fn_key;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 fn_type;
 u8 fn_scope;
 u8 fn_state;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct dn_fib_table {
 u32 n;
 int (*insert)(struct dn_fib_table *t, struct rtmsg *r,
 struct nlattr *attrs[], struct nlmsghdr *n,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct netlink_skb_parms *req);
 int (*delete)(struct dn_fib_table *t, struct rtmsg *r,
 struct nlattr *attrs[], struct nlmsghdr *n,
 struct netlink_skb_parms *req);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*lookup)(struct dn_fib_table *t, const struct flowidn *fld,
 struct dn_fib_res *res);
 int (*flush)(struct dn_fib_table *t);
 int (*dump)(struct dn_fib_table *t, struct sk_buff *skb, struct netlink_callback *cb);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char data[0];
};
#define dn_fib_init() do { } while(0)
#define dn_fib_cleanup() do { } while(0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define dn_fib_lookup(fl, res) (-ESRCH)
#define dn_fib_info_put(fi) do { } while(0)
#define dn_fib_select_multipath(fl, res) do { } while(0)
#define dn_fib_rules_policy(saddr,res,flags) (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define dn_fib_res_put(res) do { } while(0)
#endif
