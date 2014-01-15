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
#ifndef __CONNECTOR_H
#define __CONNECTOR_H
#include <linux/atomic.h>
#include <linux/list.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/workqueue.h>
#include <net/sock.h>
#include <uapi/linux/connector.h>
#define CN_CBQ_NAMELEN 32
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct cn_queue_dev {
 atomic_t refcnt;
 unsigned char name[CN_CBQ_NAMELEN];
 spinlock_t queue_lock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct sock *nls;
};
struct cn_callback_id {
 unsigned char name[CN_CBQ_NAMELEN];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct cb_id id;
};
struct cn_callback_entry {
 atomic_t refcnt;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct cn_queue_dev *pdev;
 struct cn_callback_id id;
 void (*callback) (struct cn_msg *, struct netlink_skb_parms *);
 u32 seq, group;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct cn_dev {
 struct cb_id id;
 u32 seq, groups;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct sock *nls;
 void (*input) (struct sk_buff *skb);
 struct cn_queue_dev *cbdev;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct cn_queue_dev *cn_queue_alloc_dev(const char *name, struct sock *);
#endif
