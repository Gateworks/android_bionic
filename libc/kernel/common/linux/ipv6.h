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
#ifndef _IPV6_H
#define _IPV6_H
#include <uapi/linux/ipv6.h>
#define ipv6_optlen(p) (((p)->hdrlen+1) << 3)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ipv6_devconf {
 __s32 forwarding;
 __s32 hop_limit;
 __s32 mtu6;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __s32 accept_ra;
 __s32 accept_redirects;
 __s32 autoconf;
 __s32 dad_transmits;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __s32 rtr_solicits;
 __s32 rtr_solicit_interval;
 __s32 rtr_solicit_delay;
 __s32 force_mld_version;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __s32 max_addresses;
 __s32 accept_ra_defrtr;
 __s32 accept_ra_pinfo;
 __s32 proxy_ndp;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __s32 accept_source_route;
 __s32 disable_ipv6;
 __s32 accept_dad;
 __s32 force_tllao;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __s32 ndisc_notify;
 void *sysctl;
};
struct ipv6_params {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __s32 disable_ipv6;
 __s32 autoconf;
};
struct inet6_skb_parm {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int iif;
 __be16 ra;
 __u16 hop;
 __u16 dst0;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 srcrt;
 __u16 dst1;
 __u16 lastopt;
 __u16 nhoff;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 flags;
 __u16 frag_max_size;
#define IP6SKB_XFRM_TRANSFORMED 1
#define IP6SKB_FORWARDED 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IP6SKB_REROUTED 4
#define IP6SKB_ROUTERALERT 8
#define IP6SKB_FRAGMENTED 16
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IP6CB(skb) ((struct inet6_skb_parm*)((skb)->cb))
#define IP6CBMTU(skb) ((struct ip6_mtuinfo *)((skb)->cb))
struct inet6_request_sock {
 struct in6_addr loc_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct in6_addr rmt_addr;
 struct sk_buff *pktopts;
 int iif;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct tcp6_request_sock {
};
struct ipv6_mc_socklist;
struct ipv6_ac_socklist;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ipv6_fl_socklist;
struct ipv6_pinfo {
 struct in6_addr saddr;
 struct in6_addr rcv_saddr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct in6_addr daddr;
 struct in6_pktinfo sticky_pktinfo;
 const struct in6_addr *daddr_cache;
 __be32 flow_label;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 frag_size;
#ifdef __BIG_ENDIAN_BITFIELD
 __s16 hop_limit:9;
 __u16 __unused_1:7;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#else
 __u16 __unused_1:7;
 __s16 hop_limit:9;
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifdef __BIG_ENDIAN_BITFIELD
 __s16 mcast_hops:9;
 __u16 __unused_2:6,
 mc_loop:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#else
 __u16 mc_loop:1,
 __unused_2:6;
 __s16 mcast_hops:9;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
 int ucast_oif;
 int mcast_oif;
 union {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct {
 __u16 srcrt:1,
 osrcrt:1,
 rxinfo:1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 rxoinfo:1,
 rxhlim:1,
 rxohlim:1,
 hopopts:1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ohopopts:1,
 dstopts:1,
 odstopts:1,
 rxflow:1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 rxtclass:1,
 rxpmtu:1,
 rxorigdstaddr:1;
 } bits;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 all;
 } rxopt;
 __u16 recverr:1,
 sndflow:1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 pmtudisc:2,
 ipv6only:1,
 srcprefs:3,
 dontfrag:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 min_hopcount;
 __u8 tclass;
 __u8 rcv_tclass;
 __u32 dst_cookie;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 rx_dst_cookie;
 struct ipv6_mc_socklist __rcu *ipv6_mc_list;
 struct ipv6_ac_socklist *ipv6_ac_list;
 struct ipv6_fl_socklist __rcu *ipv6_fl_list;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct ipv6_txoptions *opt;
 struct sk_buff *pktoptions;
 struct sk_buff *rxpmtu;
 struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct ipv6_txoptions *opt;
 u8 hop_limit;
 u8 tclass;
 } cork;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct raw6_sock {
 __u32 checksum;
 __u32 offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 ip6mr_table;
 struct ipv6_pinfo inet6;
};
struct inet6_timewait_sock {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct tcp6_timewait_sock {
};
#define INET6_MATCH(__sk, __net, __saddr, __daddr, __ports, __dif)   ((inet_sk(__sk)->inet_portpair == (__ports)) &&   ((__sk)->sk_family == AF_INET6) &&   ipv6_addr_equal(&inet6_sk(__sk)->daddr, (__saddr)) &&   ipv6_addr_equal(&inet6_sk(__sk)->rcv_saddr, (__daddr)) &&   (!(__sk)->sk_bound_dev_if ||   ((__sk)->sk_bound_dev_if == (__dif))) &&   net_eq(sock_net(__sk), (__net)))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define INET6_TW_MATCH(__sk, __net, __saddr, __daddr, __ports, __dif)   ((inet_twsk(__sk)->tw_portpair == (__ports)) &&   ((__sk)->sk_family == AF_INET6) &&   ipv6_addr_equal(&inet6_twsk(__sk)->tw_v6_daddr, (__saddr)) &&   ipv6_addr_equal(&inet6_twsk(__sk)->tw_v6_rcv_saddr, (__daddr)) &&   (!(__sk)->sk_bound_dev_if ||   ((__sk)->sk_bound_dev_if == (__dif))) &&   net_eq(sock_net(__sk), (__net)))
#endif
