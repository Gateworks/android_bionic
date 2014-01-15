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
#ifndef _REQUEST_SOCK_H
#define _REQUEST_SOCK_H
#include <linux/slab.h>
#include <linux/spinlock.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/types.h>
#include <linux/bug.h>
#include <net/sock.h>
struct request_sock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct sk_buff;
struct dst_entry;
struct proto;
struct request_sock_ops {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int family;
 int obj_size;
 struct kmem_cache *slab;
 char *slab_name;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*rtx_syn_ack)(struct sock *sk,
 struct request_sock *req);
 void (*send_ack)(struct sock *sk, struct sk_buff *skb,
 struct request_sock *req);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*send_reset)(struct sock *sk,
 struct sk_buff *skb);
 void (*destructor)(struct request_sock *req);
 void (*syn_ack_timeout)(struct sock *sk,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct request_sock *req);
};
struct request_sock {
 struct request_sock *dl_next;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 mss;
 u8 num_retrans;
 u8 cookie_ts:1;
 u8 num_timeout:7;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 window_clamp;
 u32 rcv_wnd;
 u32 ts_recent;
 unsigned long expires;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct request_sock_ops *rsk_ops;
 struct sock *sk;
 u32 secid;
 u32 peer_secid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct listen_sock {
 u8 max_qlen_log;
 u8 synflood_warned;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int qlen;
 int qlen_young;
 int clock_hand;
 u32 hash_rnd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 nr_table_entries;
 struct request_sock *syn_table[0];
};
struct fastopen_queue {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct request_sock *rskq_rst_head;
 struct request_sock *rskq_rst_tail;
 spinlock_t lock;
 int qlen;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int max_qlen;
};
struct request_sock_queue {
 struct request_sock *rskq_accept_head;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct request_sock *rskq_accept_tail;
 rwlock_t syn_wait_lock;
 u8 rskq_defer_accept;
 struct listen_sock *listen_opt;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct fastopen_queue *fastopenq;
};
#endif
