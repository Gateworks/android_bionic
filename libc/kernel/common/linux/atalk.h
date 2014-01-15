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
#ifndef __LINUX_ATALK_H__
#define __LINUX_ATALK_H__
#include <net/sock.h>
#include <uapi/linux/atalk.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct atalk_route {
 struct net_device *dev;
 struct atalk_addr target;
 struct atalk_addr gateway;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int flags;
 struct atalk_route *next;
};
struct atalk_iface {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct net_device *dev;
 struct atalk_addr address;
 int status;
#define ATIF_PROBE 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ATIF_PROBE_FAIL 2
 struct atalk_netrange nets;
 struct atalk_iface *next;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct atalk_sock {
 struct sock sk;
 __be16 dest_net;
 __be16 src_net;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char dest_node;
 unsigned char src_node;
 unsigned char dest_port;
 unsigned char src_port;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct ddpehdr {
 __be16 deh_len_hops;
 __be16 deh_sum;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be16 deh_dnet;
 __be16 deh_snet;
 __u8 deh_dnode;
 __u8 deh_snode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 deh_dport;
 __u8 deh_sport;
};
struct elapaarp {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be16 hw_type;
#define AARP_HW_TYPE_ETHERNET 1
#define AARP_HW_TYPE_TOKENRING 2
 __be16 pa_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 hw_len;
 __u8 pa_len;
#define AARP_PA_ALEN 4
 __be16 function;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AARP_REQUEST 1
#define AARP_REPLY 2
#define AARP_PROBE 3
 __u8 hw_src[ETH_ALEN];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 pa_src_zero;
 __be16 pa_src_net;
 __u8 pa_src_node;
 __u8 hw_dst[ETH_ALEN];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 pa_dst_zero;
 __be16 pa_dst_net;
 __u8 pa_dst_node;
} __attribute__ ((packed));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AARP_EXPIRY_TIME (5 * 60 * HZ)
#define AARP_HASH_SIZE 16
#define AARP_TICK_TIME (HZ / 5)
#define AARP_RETRANSMIT_LIMIT 10
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AARP_RESOLVE_TIME (10 * HZ)
#define atalk_register_sysctl() do { } while(0)
#define atalk_unregister_sysctl() do { } while(0)
#define atalk_proc_init() ({ 0; })
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define atalk_proc_exit() do { } while(0)
#endif
