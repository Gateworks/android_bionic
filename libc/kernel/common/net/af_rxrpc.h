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
#ifndef _NET_RXRPC_H
#define _NET_RXRPC_H
#include <linux/rxrpc.h>
struct rxrpc_call;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
 RXRPC_SKB_MARK_DATA,
 RXRPC_SKB_MARK_FINAL_ACK,
 RXRPC_SKB_MARK_BUSY,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 RXRPC_SKB_MARK_REMOTE_ABORT,
 RXRPC_SKB_MARK_NET_ERROR,
 RXRPC_SKB_MARK_LOCAL_ERROR,
 RXRPC_SKB_MARK_NEW_CALL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
typedef void (*rxrpc_interceptor_t)(struct sock *, unsigned long,
 struct sk_buff *);
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
