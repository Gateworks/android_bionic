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
#ifndef _NET_IPV6_H
#define _NET_IPV6_H
#include <linux/ipv6.h>
#include <linux/hardirq.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/jhash.h>
#include <net/if_inet6.h>
#include <net/ndisc.h>
#include <net/flow.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <net/snmp.h>
#define SIN6_LEN_RFC2133 24
#define IPV6_MAXPLEN 65535
#define NEXTHDR_HOP 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NEXTHDR_TCP 6
#define NEXTHDR_UDP 17
#define NEXTHDR_IPV6 41
#define NEXTHDR_ROUTING 43
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NEXTHDR_FRAGMENT 44
#define NEXTHDR_GRE 47
#define NEXTHDR_ESP 50
#define NEXTHDR_AUTH 51
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NEXTHDR_ICMP 58
#define NEXTHDR_NONE 59
#define NEXTHDR_DEST 60
#define NEXTHDR_MOBILITY 135
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NEXTHDR_MAX 255
#define IPV6_DEFAULT_HOPLIMIT 64
#define IPV6_DEFAULT_MCASTHOPS 1
#define IPV6_ADDR_ANY 0x0000U
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IPV6_ADDR_UNICAST 0x0001U
#define IPV6_ADDR_MULTICAST 0x0002U
#define IPV6_ADDR_LOOPBACK 0x0010U
#define IPV6_ADDR_LINKLOCAL 0x0020U
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IPV6_ADDR_SITELOCAL 0x0040U
#define IPV6_ADDR_COMPATv4 0x0080U
#define IPV6_ADDR_SCOPE_MASK 0x00f0U
#define IPV6_ADDR_MAPPED 0x1000U
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IPV6_ADDR_MC_SCOPE(a)   ((a)->s6_addr[1] & 0x0f)
#define __IPV6_ADDR_SCOPE_INVALID -1
#define IPV6_ADDR_SCOPE_NODELOCAL 0x01
#define IPV6_ADDR_SCOPE_LINKLOCAL 0x02
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IPV6_ADDR_SCOPE_SITELOCAL 0x05
#define IPV6_ADDR_SCOPE_ORGLOCAL 0x08
#define IPV6_ADDR_SCOPE_GLOBAL 0x0e
#define IPV6_ADDR_MC_FLAG_TRANSIENT(a)   ((a)->s6_addr[1] & 0x10)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IPV6_ADDR_MC_FLAG_PREFIX(a)   ((a)->s6_addr[1] & 0x20)
#define IPV6_ADDR_MC_FLAG_RENDEZVOUS(a)   ((a)->s6_addr[1] & 0x40)
struct frag_hdr {
 __u8 nexthdr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 reserved;
 __be16 frag_off;
 __be32 identification;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IP6_MF 0x0001
#include <net/sock.h>
#define _DEVINC(net, statname, modifier, idev, field)  ({   struct inet6_dev *_idev = (idev);   if (likely(_idev != NULL))   SNMP_INC_STATS##modifier((_idev)->stats.statname, (field));   SNMP_INC_STATS##modifier((net)->mib.statname##_statistics, (field)); })
#define _DEVINCATOMIC(net, statname, modifier, idev, field)  ({   struct inet6_dev *_idev = (idev);   if (likely(_idev != NULL))   SNMP_INC_STATS_ATOMIC_LONG((_idev)->stats.statname##dev, (field));   SNMP_INC_STATS##modifier((net)->mib.statname##_statistics, (field)); })
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define _DEVINC_ATOMIC_ATOMIC(net, statname, idev, field)  ({   struct inet6_dev *_idev = (idev);   if (likely(_idev != NULL))   SNMP_INC_STATS_ATOMIC_LONG((_idev)->stats.statname##dev, (field));   SNMP_INC_STATS_ATOMIC_LONG((net)->mib.statname##_statistics, (field)); })
#define _DEVADD(net, statname, modifier, idev, field, val)  ({   struct inet6_dev *_idev = (idev);   if (likely(_idev != NULL))   SNMP_ADD_STATS##modifier((_idev)->stats.statname, (field), (val));   SNMP_ADD_STATS##modifier((net)->mib.statname##_statistics, (field), (val)); })
#define _DEVUPD(net, statname, modifier, idev, field, val)  ({   struct inet6_dev *_idev = (idev);   if (likely(_idev != NULL))   SNMP_UPD_PO_STATS##modifier((_idev)->stats.statname, field, (val));   SNMP_UPD_PO_STATS##modifier((net)->mib.statname##_statistics, field, (val)); })
#define IP6_INC_STATS(net, idev,field)   _DEVINC(net, ipv6, 64, idev, field)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IP6_INC_STATS_BH(net, idev,field)   _DEVINC(net, ipv6, 64_BH, idev, field)
#define IP6_ADD_STATS(net, idev,field,val)   _DEVADD(net, ipv6, 64, idev, field, val)
#define IP6_ADD_STATS_BH(net, idev,field,val)   _DEVADD(net, ipv6, 64_BH, idev, field, val)
#define IP6_UPD_PO_STATS(net, idev,field,val)   _DEVUPD(net, ipv6, 64, idev, field, val)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IP6_UPD_PO_STATS_BH(net, idev,field,val)   _DEVUPD(net, ipv6, 64_BH, idev, field, val)
#define ICMP6_INC_STATS(net, idev, field)   _DEVINCATOMIC(net, icmpv6, , idev, field)
#define ICMP6_INC_STATS_BH(net, idev, field)   _DEVINCATOMIC(net, icmpv6, _BH, idev, field)
#define ICMP6MSGOUT_INC_STATS(net, idev, field)   _DEVINC_ATOMIC_ATOMIC(net, icmpv6msg, idev, field +256)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ICMP6MSGOUT_INC_STATS_BH(net, idev, field)   _DEVINC_ATOMIC_ATOMIC(net, icmpv6msg, idev, field +256)
#define ICMP6MSGIN_INC_STATS_BH(net, idev, field)   _DEVINC_ATOMIC_ATOMIC(net, icmpv6msg, idev, field)
struct ip6_ra_chain {
 struct ip6_ra_chain *next;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct sock *sk;
 int sel;
 void (*destructor)(struct sock *);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ipv6_txoptions {
 int tot_len;
 __u16 opt_flen;
 __u16 opt_nflen;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct ipv6_opt_hdr *hopopt;
 struct ipv6_opt_hdr *dst0opt;
 struct ipv6_rt_hdr *srcrt;
 struct ipv6_opt_hdr *dst1opt;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct ip6_flowlabel {
 struct ip6_flowlabel __rcu *next;
 __be32 label;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 atomic_t users;
 struct in6_addr dst;
 struct ipv6_txoptions *opt;
 unsigned long linger;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct rcu_head rcu;
 u8 share;
 union {
 struct pid *pid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 kuid_t uid;
 } owner;
 unsigned long lastuse;
 unsigned long expires;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct net *fl_net;
};
#define IPV6_FLOWINFO_MASK cpu_to_be32(0x0FFFFFFF)
#define IPV6_FLOWLABEL_MASK cpu_to_be32(0x000FFFFF)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ipv6_fl_socklist {
 struct ipv6_fl_socklist __rcu *next;
 struct ip6_flowlabel *fl;
 struct rcu_head rcu;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct ipv6_txoptions *ipv6_fixup_options(struct ipv6_txoptions *opt_space,
 struct ipv6_txoptions *opt);
#if ???
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define IPV6_FRAG_HIGH_THRESH (4 * 1024*1024)
#define IPV6_FRAG_LOW_THRESH (3 * 1024*1024)
#define IPV6_FRAG_TIMEOUT (60 * HZ)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct inet_frag_queue;
enum ip6_defrag_users {
 IP6_DEFRAG_LOCAL_DELIVER,
 IP6_DEFRAG_CONNTRACK_IN,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __IP6_DEFRAG_CONNTRACK_IN = IP6_DEFRAG_CONNTRACK_IN + USHRT_MAX,
 IP6_DEFRAG_CONNTRACK_OUT,
 __IP6_DEFRAG_CONNTRACK_OUT = IP6_DEFRAG_CONNTRACK_OUT + USHRT_MAX,
 IP6_DEFRAG_CONNTRACK_BRIDGE_IN,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __IP6_DEFRAG_CONNTRACK_BRIDGE_IN = IP6_DEFRAG_CONNTRACK_BRIDGE_IN + USHRT_MAX,
};
struct ip6_create_arg {
 __be32 id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 user;
 const struct in6_addr *src;
 const struct in6_addr *dst;
 u8 ecn;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct frag_queue {
 struct inet_frag_queue q;
 __be32 id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 user;
 struct in6_addr saddr;
 struct in6_addr daddr;
 int iif;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int csum;
 __u16 nhoffset;
 u8 ecn;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
 IP6_FH_F_FRAG = (1 << 0),
 IP6_FH_F_AUTH = (1 << 1),
 IP6_FH_F_SKIP_RH = (1 << 2),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct group_source_req;
struct group_filter;
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
