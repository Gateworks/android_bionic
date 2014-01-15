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
#ifndef _INET_DIAG_H_
#define _INET_DIAG_H_ 1
#include <uapi/linux/inet_diag.h>
struct sock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct inet_hashinfo;
struct nlattr;
struct nlmsghdr;
struct sk_buff;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct netlink_callback;
struct inet_diag_handler {
 void (*dump)(struct sk_buff *skb,
 struct netlink_callback *cb,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct inet_diag_req_v2 *r,
 struct nlattr *bc);
 int (*dump_one)(struct sk_buff *in_skb,
 const struct nlmsghdr *nlh,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct inet_diag_req_v2 *req);
 void (*idiag_get_info)(struct sock *sk,
 struct inet_diag_msg *r,
 void *info);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 idiag_type;
};
struct inet_connection_sock;
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
