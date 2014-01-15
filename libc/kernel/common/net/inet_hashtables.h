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
#ifndef _INET_HASHTABLES_H
#define _INET_HASHTABLES_H
#include <linux/interrupt.h>
#include <linux/ip.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/ipv6.h>
#include <linux/list.h>
#include <linux/slab.h>
#include <linux/socket.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/spinlock.h>
#include <linux/types.h>
#include <linux/wait.h>
#include <linux/vmalloc.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <net/inet_connection_sock.h>
#include <net/inet_sock.h>
#include <net/sock.h>
#include <net/route.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <net/tcp_states.h>
#include <net/netns/hash.h>
#include <linux/atomic.h>
#include <asm/byteorder.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct inet_ehash_bucket {
 struct hlist_nulls_head chain;
 struct hlist_nulls_head twchain;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct inet_bind_bucket {
 unsigned short port;
 signed char fastreuse;
 signed char fastreuseport;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 kuid_t fastuid;
 int num_owners;
};
#define inet_bind_bucket_for_each(tb, head)   hlist_for_each_entry(tb, head, node)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct inet_bind_hashbucket {
 spinlock_t lock;
 struct hlist_head chain;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LISTENING_NULLS_BASE (1U << 29)
struct inet_listen_hashbucket {
 spinlock_t lock;
 struct hlist_nulls_head head;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define INET_LHTABLE_SIZE 32
struct inet_hashinfo {
 struct inet_ehash_bucket *ehash;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 spinlock_t *ehash_locks;
 unsigned int ehash_mask;
 unsigned int ehash_locks_mask;
 struct inet_bind_hashbucket *bhash;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int bhash_size;
 struct kmem_cache *bind_bucket_cachep;
 struct inet_listen_hashbucket listening_hash[INET_LHTABLE_SIZE]
 ____cacheline_aligned_in_smp;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 atomic_t bsockets;
};
#ifdef __BIG_ENDIAN
#define INET_COMBINED_PORTS(__sport, __dport)   ((__force __portpair)(((__force __u32)(__be16)(__sport) << 16) | (__u32)(__dport)))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#else
#define INET_COMBINED_PORTS(__sport, __dport)   ((__force __portpair)(((__u32)(__dport) << 16) | (__force __u32)(__be16)(__sport)))
#endif
#if BITS_PER_LONG == 64
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifdef __BIG_ENDIAN
#define INET_ADDR_COOKIE(__name, __saddr, __daddr)   const __addrpair __name = (__force __addrpair) (   (((__force __u64)(__be32)(__saddr)) << 32) |   ((__force __u64)(__be32)(__daddr)));
#else
#define INET_ADDR_COOKIE(__name, __saddr, __daddr)   const __addrpair __name = (__force __addrpair) (   (((__force __u64)(__be32)(__daddr)) << 32) |   ((__force __u64)(__be32)(__saddr)));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define INET_MATCH(__sk, __net, __cookie, __saddr, __daddr, __ports, __dif)   ((inet_sk(__sk)->inet_portpair == (__ports)) &&   (inet_sk(__sk)->inet_addrpair == (__cookie)) &&   (!(__sk)->sk_bound_dev_if ||   ((__sk)->sk_bound_dev_if == (__dif))) &&   net_eq(sock_net(__sk), (__net)))
#define INET_TW_MATCH(__sk, __net, __cookie, __saddr, __daddr, __ports, __dif)  ((inet_twsk(__sk)->tw_portpair == (__ports)) &&   (inet_twsk(__sk)->tw_addrpair == (__cookie)) &&   (!(__sk)->sk_bound_dev_if ||   ((__sk)->sk_bound_dev_if == (__dif))) &&   net_eq(sock_net(__sk), (__net)))
#else
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define INET_ADDR_COOKIE(__name, __saddr, __daddr)
#define INET_MATCH(__sk, __net, __cookie, __saddr, __daddr, __ports, __dif)   ((inet_sk(__sk)->inet_portpair == (__ports)) &&   (inet_sk(__sk)->inet_daddr == (__saddr)) &&   (inet_sk(__sk)->inet_rcv_saddr == (__daddr)) &&   (!(__sk)->sk_bound_dev_if ||   ((__sk)->sk_bound_dev_if == (__dif))) &&   net_eq(sock_net(__sk), (__net)))
#define INET_TW_MATCH(__sk, __net, __cookie, __saddr, __daddr, __ports, __dif)   ((inet_twsk(__sk)->tw_portpair == (__ports)) &&   (inet_twsk(__sk)->tw_daddr == (__saddr)) &&   (inet_twsk(__sk)->tw_rcv_saddr == (__daddr)) &&   (!(__sk)->sk_bound_dev_if ||   ((__sk)->sk_bound_dev_if == (__dif))) &&   net_eq(sock_net(__sk), (__net)))
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
