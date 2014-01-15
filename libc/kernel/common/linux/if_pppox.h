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
#ifndef __LINUX_IF_PPPOX_H
#define __LINUX_IF_PPPOX_H
#include <linux/if.h>
#include <linux/netdevice.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/ppp_channel.h>
#include <linux/skbuff.h>
#include <uapi/linux/if_pppox.h>
struct pppoe_opt {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct net_device *dev;
 int ifindex;
 struct pppoe_addr pa;
 struct sockaddr_pppox relay;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct pptp_opt {
 struct pptp_addr src_addr;
 struct pptp_addr dst_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 ack_sent, ack_recv;
 u32 seq_sent, seq_recv;
 int ppp_flags;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct pppolac_opt {
 __u32 local;
 __u32 remote;
 __u32 recv_sequence;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 xmit_sequence;
 atomic_t sequencing;
 int (*backlog_rcv)(struct sock *sk_udp, struct sk_buff *skb);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct pppopns_opt {
 __u16 local;
 __u16 remote;
 __u32 recv_sequence;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 xmit_sequence;
 void (*data_ready)(struct sock *sk_raw, int length);
 int (*backlog_rcv)(struct sock *sk_raw, struct sk_buff *skb);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <net/sock.h>
struct pppox_sock {
 struct ppp_channel chan;
 struct pppox_sock *next;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 union {
 struct pppoe_opt pppoe;
 struct pptp_opt pptp;
 struct pppolac_opt lac;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct pppopns_opt pns;
 } proto;
 __be16 num;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define pppoe_dev proto.pppoe.dev
#define pppoe_ifindex proto.pppoe.ifindex
#define pppoe_pa proto.pppoe.pa
#define pppoe_relay proto.pppoe.relay
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct module;
struct pppox_proto {
 int (*create)(struct net *net, struct socket *sock);
 int (*ioctl)(struct socket *sock, unsigned int cmd,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long arg);
 struct module *owner;
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PPPOX_NONE = 0,
 PPPOX_CONNECTED = 1,
 PPPOX_BOUND = 2,
 PPPOX_RELAY = 4,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PPPOX_ZOMBIE = 8,
 PPPOX_DEAD = 16
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
