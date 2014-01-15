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
#ifndef _LINUX_CONCAP_H
#define _LINUX_CONCAP_H
#include <linux/skbuff.h>
#include <linux/netdevice.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct concap_proto_ops;
struct concap_device_ops;
struct concap_proto{
 struct net_device *net_dev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct concap_device_ops *dops;
 struct concap_proto_ops *pops;
 spinlock_t lock;
 int flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *proto_data;
};
struct concap_device_ops{
 int (*data_req)(struct concap_proto *, struct sk_buff *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*connect_req)(struct concap_proto *);
 int (*disconn_req)(struct concap_proto *);
};
struct concap_proto_ops{
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct concap_proto * (*proto_new) (void);
 void (*proto_del)(struct concap_proto *cprot);
 int (*restart)(struct concap_proto *cprot,
 struct net_device *ndev,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct concap_device_ops *dops);
 int (*close)(struct concap_proto *cprot);
 int (*encap_and_xmit)(struct concap_proto *cprot, struct sk_buff *skb);
 int (*data_ind)(struct concap_proto *cprot, struct sk_buff *skb);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*connect_ind)(struct concap_proto *cprot);
 int (*disconn_ind)(struct concap_proto *cprot);
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
