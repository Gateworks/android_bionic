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
#ifndef __INET_LRO_H_
#define __INET_LRO_H_
#include <net/ip.h>
#include <net/tcp.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct net_lro_stats {
 unsigned long aggregated;
 unsigned long flushed;
 unsigned long no_desc;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct net_lro_desc {
 struct sk_buff *parent;
 struct sk_buff *last_skb;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct skb_frag_struct *next_frag;
 struct iphdr *iph;
 struct tcphdr *tcph;
 __wsum data_csum;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be32 tcp_rcv_tsecr;
 __be32 tcp_rcv_tsval;
 __be32 tcp_ack;
 u32 tcp_next_seq;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 skb_tot_frags_len;
 u16 ip_tot_len;
 u16 tcp_saw_tstamp;
 __be16 tcp_window;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int pkt_aggr_cnt;
 int vlan_packet;
 int mss;
 int active;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct net_lro_mgr {
 struct net_device *dev;
 struct net_lro_stats stats;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long features;
#define LRO_F_NAPI 1
#define LRO_F_EXTRACT_VLAN_ID 2
 u32 ip_summed;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 ip_summed_aggr;
 int max_desc;
 int max_aggr;
 int frag_align_pad;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct net_lro_desc *lro_arr;
 int (*get_skb_header)(struct sk_buff *skb, void **ip_hdr,
 void **tcpudp_hdr, u64 *hdr_flags, void *priv);
#define LRO_IPV4 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LRO_TCP 2
 int (*get_frag_header)(struct skb_frag_struct *frag, void **mac_hdr,
 void **ip_hdr, void **tcpudp_hdr, u64 *hdr_flags,
 void *priv);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
