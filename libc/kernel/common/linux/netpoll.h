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
#ifndef _LINUX_NETPOLL_H
#define _LINUX_NETPOLL_H
#include <linux/netdevice.h>
#include <linux/interrupt.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/rcupdate.h>
#include <linux/list.h>
union inet_addr {
 __u32 all[4];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be32 ip;
 __be32 ip6[4];
 struct in_addr in;
 struct in6_addr in6;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct netpoll {
 struct net_device *dev;
 char dev_name[IFNAMSIZ];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const char *name;
 void (*rx_hook)(struct netpoll *, int, char *, int);
 union inet_addr local_ip, remote_ip;
 bool ipv6;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 local_port, remote_port;
 u8 remote_mac[ETH_ALEN];
};
struct netpoll_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 atomic_t refcnt;
 unsigned long rx_flags;
 spinlock_t rx_lock;
 struct semaphore dev_lock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct sk_buff_head neigh_tx;
 struct sk_buff_head txq;
 struct delayed_work tx_work;
 struct netpoll *netpoll;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct rcu_head rcu;
};
#endif
