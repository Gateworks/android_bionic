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
#ifndef _NETROM_H
#define _NETROM_H
#include <linux/netrom.h>
#include <linux/list.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/slab.h>
#include <net/sock.h>
#define NR_NETWORK_LEN 15
#define NR_TRANSPORT_LEN 5
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NR_PROTO_IP 0x0C
#define NR_PROTOEXT 0x00
#define NR_CONNREQ 0x01
#define NR_CONNACK 0x02
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NR_DISCREQ 0x03
#define NR_DISCACK 0x04
#define NR_INFO 0x05
#define NR_INFOACK 0x06
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NR_RESET 0x07
#define NR_CHOKE_FLAG 0x80
#define NR_NAK_FLAG 0x40
#define NR_MORE_FLAG 0x20
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
 NR_STATE_0,
 NR_STATE_1,
 NR_STATE_2,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NR_STATE_3
};
#define NR_COND_ACK_PENDING 0x01
#define NR_COND_REJECT 0x02
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NR_COND_PEER_RX_BUSY 0x04
#define NR_COND_OWN_RX_BUSY 0x08
#define NR_DEFAULT_T1 120000
#define NR_DEFAULT_T2 5000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NR_DEFAULT_N2 3
#define NR_DEFAULT_T4 180000
#define NR_DEFAULT_IDLE 0
#define NR_DEFAULT_WINDOW 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NR_DEFAULT_OBS 6
#define NR_DEFAULT_QUAL 10
#define NR_DEFAULT_TTL 16
#define NR_DEFAULT_ROUTING 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NR_DEFAULT_FAILS 2
#define NR_DEFAULT_RESET 0
#define NR_MODULUS 256
#define NR_MAX_WINDOW_SIZE 127
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NR_MAX_PACKET_SIZE 236
struct nr_sock {
 struct sock sock;
 ax25_address user_addr, source_addr, dest_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct net_device *device;
 unsigned char my_index, my_id;
 unsigned char your_index, your_id;
 unsigned char state, condition, bpqext, window;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned short vs, vr, va, vl;
 unsigned char n2, n2count;
 unsigned long t1, t2, t4, idle;
 unsigned short fraglen;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct timer_list t1timer;
 struct timer_list t2timer;
 struct timer_list t4timer;
 struct timer_list idletimer;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct sk_buff_head ack_queue;
 struct sk_buff_head reseq_queue;
 struct sk_buff_head frag_queue;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define nr_sk(sk) ((struct nr_sock *)(sk))
struct nr_neigh {
 ax25_address callsign;
 ax25_digi *digipeat;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ax25_cb *ax25;
 struct net_device *dev;
 unsigned char quality;
 unsigned char locked;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned short count;
 unsigned int number;
 unsigned char failed;
 atomic_t refcount;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct nr_route {
 unsigned char quality;
 unsigned char obs_count;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct nr_neigh *neighbour;
};
struct nr_node {
 ax25_address callsign;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char mnemonic[7];
 unsigned char which;
 unsigned char count;
 struct nr_route routes[3];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 atomic_t refcount;
 spinlock_t node_lock;
};
#define nr_node_hold(__nr_node)   atomic_inc(&((__nr_node)->refcount))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define nr_neigh_hold(__nr_neigh)   atomic_inc(&((__nr_neigh)->refcount))
#define nr_neigh_for_each(__nr_neigh, list)   hlist_for_each_entry(__nr_neigh, list, neigh_node)
#define nr_neigh_for_each_safe(__nr_neigh, node2, list)   hlist_for_each_entry_safe(__nr_neigh, node2, list, neigh_node)
#define nr_node_for_each(__nr_node, list)   hlist_for_each_entry(__nr_node, list, node_node)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define nr_node_for_each_safe(__nr_node, node2, list)   hlist_for_each_entry_safe(__nr_node, node2, list, node_node)
#define nr_transmit_refusal(skb, mine)  do {   __nr_transmit_reply((skb), (mine), NR_CONNACK | NR_CHOKE_FLAG);  } while (0)
#define nr_transmit_reset(skb, mine)  do {   __nr_transmit_reply((skb), (mine), NR_RESET);  } while (0)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
