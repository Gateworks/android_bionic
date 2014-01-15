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
#ifndef _LINUX_IF_MACVLAN_H
#define _LINUX_IF_MACVLAN_H
#include <linux/if_link.h>
#include <linux/list.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/netdevice.h>
#include <linux/netlink.h>
#include <net/netlink.h>
#include <linux/u64_stats_sync.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/err.h>
#include <linux/errno.h>
struct file;
struct socket;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct macvlan_port;
struct macvtap_queue;
struct macvlan_pcpu_stats {
 u64 rx_packets;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u64 rx_bytes;
 u64 rx_multicast;
 u64 tx_packets;
 u64 tx_bytes;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct u64_stats_sync syncp;
 u32 rx_errors;
 u32 tx_dropped;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MAX_MACVTAP_QUEUES (NR_CPUS < 16 ? NR_CPUS : 16)
#define MACVLAN_MC_FILTER_BITS 8
#define MACVLAN_MC_FILTER_SZ (1 << MACVLAN_MC_FILTER_BITS)
struct macvlan_dev {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct net_device *dev;
 struct macvlan_port *port;
 struct net_device *lowerdev;
 struct macvlan_pcpu_stats __percpu *pcpu_stats;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DECLARE_BITMAP(mc_filter, MACVLAN_MC_FILTER_SZ);
 enum macvlan_mode mode;
 u16 flags;
 int (*receive)(struct sk_buff *skb);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*forward)(struct net_device *dev, struct sk_buff *skb);
 struct macvtap_queue *taps[MAX_MACVTAP_QUEUES];
 int numvtaps;
 int minor;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
