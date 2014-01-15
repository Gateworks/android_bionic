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
#ifndef _ICMP_H
#define _ICMP_H
#include <linux/icmp.h>
#include <net/inet_sock.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <net/snmp.h>
struct icmp_err {
 int errno;
 unsigned int fatal:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define ICMP_INC_STATS(net, field) SNMP_INC_STATS((net)->mib.icmp_statistics, field)
#define ICMP_INC_STATS_BH(net, field) SNMP_INC_STATS_BH((net)->mib.icmp_statistics, field)
#define ICMPMSGOUT_INC_STATS(net, field) SNMP_INC_STATS_ATOMIC_LONG((net)->mib.icmpmsg_statistics, field+256)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ICMPMSGIN_INC_STATS_BH(net, field) SNMP_INC_STATS_ATOMIC_LONG((net)->mib.icmpmsg_statistics, field)
struct dst_entry;
struct net_proto_family;
struct sk_buff;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct net;
#endif
