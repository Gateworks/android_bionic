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
#ifndef _LINUX_SKBUFF_H
#define _LINUX_SKBUFF_H
#include <linux/kernel.h>
#include <linux/kmemcheck.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/compiler.h>
#include <linux/time.h>
#include <linux/bug.h>
#include <linux/cache.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/atomic.h>
#include <asm/types.h>
#include <linux/spinlock.h>
#include <linux/net.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/textsearch.h>
#include <net/checksum.h>
#include <linux/rcupdate.h>
#include <linux/dmaengine.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/hrtimer.h>
#include <linux/dma-mapping.h>
#include <linux/netdev_features.h>
#include <net/flow_keys.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CHECKSUM_NONE 0
#define CHECKSUM_UNNECESSARY 1
#define CHECKSUM_COMPLETE 2
#define CHECKSUM_PARTIAL 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SKB_DATA_ALIGN(X) (((X) + (SMP_CACHE_BYTES - 1)) &   ~(SMP_CACHE_BYTES - 1))
#define SKB_WITH_OVERHEAD(X)   ((X) - SKB_DATA_ALIGN(sizeof(struct skb_shared_info)))
#define SKB_MAX_ORDER(X, ORDER)   SKB_WITH_OVERHEAD((PAGE_SIZE << (ORDER)) - (X))
#define SKB_MAX_HEAD(X) (SKB_MAX_ORDER((X), 0))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SKB_MAX_ALLOC (SKB_MAX_ORDER(0, 2))
#define SKB_TRUESIZE(X) ((X) +   SKB_DATA_ALIGN(sizeof(struct sk_buff)) +   SKB_DATA_ALIGN(sizeof(struct skb_shared_info)))
struct net_device;
struct scatterlist;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct pipe_inode_info;
struct sk_buff_head {
 struct sk_buff *next;
 struct sk_buff *prev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 qlen;
 spinlock_t lock;
};
struct sk_buff;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#if 65536 / (PAGE_SIZE + 1) < 16
#define MAX_SKB_FRAGS 16UL
#else
#define MAX_SKB_FRAGS (65536/PAGE_SIZE + 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
typedef struct skb_frag_struct skb_frag_t;
struct skb_frag_struct {
 struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct page *p;
 } page;
#if BITS_PER_LONG > 32 || PAGE_SIZE >= 65536
 __u32 page_offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 size;
#else
 __u16 page_offset;
 __u16 size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
};
#define HAVE_HW_TIME_STAMP
struct skb_shared_hwtstamps {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ktime_t hwtstamp;
 ktime_t syststamp;
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SKBTX_HW_TSTAMP = 1 << 0,
 SKBTX_SW_TSTAMP = 1 << 1,
 SKBTX_IN_PROGRESS = 1 << 2,
 SKBTX_DEV_ZEROCOPY = 1 << 3,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SKBTX_WIFI_STATUS = 1 << 4,
 SKBTX_SHARED_FRAG = 1 << 5,
};
struct ubuf_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *ctx;
 unsigned long desc;
};
struct skb_shared_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char nr_frags;
 __u8 tx_flags;
 unsigned short gso_size;
 unsigned short gso_segs;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned short gso_type;
 struct sk_buff *frag_list;
 struct skb_shared_hwtstamps hwtstamps;
 __be32 ip6_frag_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 atomic_t dataref;
 void * destructor_arg;
 skb_frag_t frags[MAX_SKB_FRAGS];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SKB_DATAREF_SHIFT 16
#define SKB_DATAREF_MASK ((1 << SKB_DATAREF_SHIFT) - 1)
enum {
 SKB_FCLONE_UNAVAILABLE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SKB_FCLONE_ORIG,
 SKB_FCLONE_CLONE,
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SKB_GSO_TCPV4 = 1 << 0,
 SKB_GSO_UDP = 1 << 1,
 SKB_GSO_DODGY = 1 << 2,
 SKB_GSO_TCP_ECN = 1 << 3,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SKB_GSO_TCPV6 = 1 << 4,
 SKB_GSO_FCOE = 1 << 5,
 SKB_GSO_GRE = 1 << 6,
 SKB_GSO_UDP_TUNNEL = 1 << 7,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#if BITS_PER_LONG > 32
#define NET_SKBUFF_DATA_USES_OFFSET 1
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifdef NET_SKBUFF_DATA_USES_OFFSET
typedef unsigned int sk_buff_data_t;
#else
typedef unsigned char *sk_buff_data_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
struct sk_buff {
 struct sk_buff *next;
 struct sk_buff *prev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ktime_t tstamp;
 struct sock *sk;
 struct net_device *dev;
 char cb[48] __aligned(8);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long _skb_refdst;
 unsigned int len,
 data_len;
 __u16 mac_len,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 hdr_len;
 union {
 __wsum csum;
 struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 csum_start;
 __u16 csum_offset;
 };
 };
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 priority;
 kmemcheck_bitfield_begin(flags1);
 __u8 local_df:1,
 cloned:1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ip_summed:2,
 nohdr:1,
 nfctinfo:3;
 __u8 pkt_type:3,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 fclone:2,
 ipvs_property:1,
 peeked:1,
 nf_trace:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 kmemcheck_bitfield_end(flags1);
 __be16 protocol;
 void (*destructor)(struct sk_buff *skb);
#ifdef NET_SKBUFF_NF_DEFRAG_NEEDED
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct sk_buff *nfct_reasm;
#endif
 int skb_iif;
 __u32 rxhash;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be16 vlan_proto;
 __u16 vlan_tci;
 __u16 queue_mapping;
 kmemcheck_bitfield_begin(flags2);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 pfmemalloc:1;
 __u8 ooo_okay:1;
 __u8 l4_rxhash:1;
 __u8 wifi_acked_valid:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 wifi_acked:1;
 __u8 no_fcs:1;
 __u8 head_frag:1;
 __u8 encapsulation:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 kmemcheck_bitfield_end(flags2);
 union {
 __u32 mark;
 __u32 dropcount;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 reserved_tailroom;
 };
 sk_buff_data_t inner_transport_header;
 sk_buff_data_t inner_network_header;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 sk_buff_data_t inner_mac_header;
 sk_buff_data_t transport_header;
 sk_buff_data_t network_header;
 sk_buff_data_t mac_header;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 sk_buff_data_t tail;
 sk_buff_data_t end;
 unsigned char *head,
 *data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int truesize;
 atomic_t users;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
