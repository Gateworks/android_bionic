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
#ifndef _UDP_H
#define _UDP_H
#include <linux/list.h>
#include <linux/bug.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <net/inet_sock.h>
#include <net/sock.h>
#include <net/snmp.h>
#include <net/ip.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/ipv6.h>
#include <linux/seq_file.h>
#include <linux/poll.h>
struct udp_skb_cb {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 union {
 struct inet_skb_parm h4;
#if ???
 struct inet6_skb_parm h6;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
 } header;
 __u16 cscov;
 __u8 partial_cov;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define UDP_SKB_CB(__skb) ((struct udp_skb_cb *)((__skb)->cb))
struct udp_hslot {
 struct hlist_nulls_head head;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int count;
 spinlock_t lock;
} __attribute__((aligned(2 * sizeof(long))));
struct udp_table {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct udp_hslot *hash;
 struct udp_hslot *hash2;
 unsigned int mask;
 unsigned int log;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define UDP_CSUM_NOXMIT 1
#define UDP_CSUM_NORCV 2
#define UDP_CSUM_DEFAULT 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct sk_buff;
#define UDP_INC_STATS_USER(net, field, is_udplite) do {   if (is_udplite) SNMP_INC_STATS_USER((net)->mib.udplite_statistics, field);   else SNMP_INC_STATS_USER((net)->mib.udp_statistics, field); } while(0)
#define UDP_INC_STATS_BH(net, field, is_udplite) do {   if (is_udplite) SNMP_INC_STATS_BH((net)->mib.udplite_statistics, field);   else SNMP_INC_STATS_BH((net)->mib.udp_statistics, field); } while(0)
#define UDP6_INC_STATS_BH(net, field, is_udplite) do {   if (is_udplite) SNMP_INC_STATS_BH((net)->mib.udplite_stats_in6, field);  else SNMP_INC_STATS_BH((net)->mib.udp_stats_in6, field);  } while(0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define UDP6_INC_STATS_USER(net, field, __lite) do {   if (__lite) SNMP_INC_STATS_USER((net)->mib.udplite_stats_in6, field);   else SNMP_INC_STATS_USER((net)->mib.udp_stats_in6, field);  } while(0)
#if ???
#define UDPX_INC_STATS_BH(sk, field)   do {   if ((sk)->sk_family == AF_INET)   UDP_INC_STATS_BH(sock_net(sk), field, 0);   else   UDP6_INC_STATS_BH(sock_net(sk), field, 0);   } while (0);
#else
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define UDPX_INC_STATS_BH(sk, field) UDP_INC_STATS_BH(sock_net(sk), field, 0)
#endif
struct udp_seq_afinfo {
 char *name;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 sa_family_t family;
 struct udp_table *udp_table;
 const struct file_operations *seq_fops;
 struct seq_operations seq_ops;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct udp_iter_state {
 struct seq_net_private p;
 sa_family_t family;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int bucket;
 struct udp_table *udp_table;
};
#if ???
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#endif
