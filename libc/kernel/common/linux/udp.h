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
#ifndef _LINUX_UDP_H
#define _LINUX_UDP_H
#include <uapi/linux/udp.h>
#define UDP_HTABLE_SIZE_MIN (CONFIG_BASE_SMALL ? 128 : 256)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct udp_sock {
#define udp_port_hash inet.sk.__sk_common.skc_u16hashes[0]
#define udp_portaddr_hash inet.sk.__sk_common.skc_u16hashes[1]
#define udp_portaddr_node inet.sk.__sk_common.skc_portaddr_node
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int pending;
 unsigned int corkflag;
 __u16 encap_type;
 __u16 len;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 pcslen;
 __u16 pcrlen;
#define UDPLITE_BIT 0x1
#define UDPLITE_SEND_CC 0x2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define UDPLITE_RECV_CC 0x4
 __u8 pcflag;
 __u8 unused[3];
 int (*encap_rcv)(struct sock *sk, struct sk_buff *skb);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*encap_destroy)(struct sock *sk);
};
#define udp_portaddr_for_each_entry(__sk, node, list)   hlist_nulls_for_each_entry(__sk, node, list, __sk_common.skc_portaddr_node)
#define udp_portaddr_for_each_entry_rcu(__sk, node, list)   hlist_nulls_for_each_entry_rcu(__sk, node, list, __sk_common.skc_portaddr_node)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IS_UDPLITE(__sk) (udp_sk(__sk)->pcflag)
#endif
