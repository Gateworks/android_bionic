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
#ifndef _NET_IP6_ROUTE_H
#define _NET_IP6_ROUTE_H
struct route_info {
 __u8 type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 length;
 __u8 prefix_len;
#ifdef __BIG_ENDIAN_BITFIELD
 __u8 reserved_h:3,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 route_pref:2,
 reserved_l:3;
#elif defined(__LITTLE_ENDIAN_BITFIELD)
 __u8 reserved_l:3,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 route_pref:2,
 reserved_h:3;
#endif
 __be32 lifetime;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 prefix[0];
};
#include <net/flow.h>
#include <net/ip6_fib.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <net/sock.h>
#include <linux/ip.h>
#include <linux/ipv6.h>
#include <linux/route.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RT6_LOOKUP_F_IFACE 0x00000001
#define RT6_LOOKUP_F_REACHABLE 0x00000002
#define RT6_LOOKUP_F_HAS_SADDR 0x00000004
#define RT6_LOOKUP_F_SRCPREF_TMP 0x00000008
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RT6_LOOKUP_F_SRCPREF_PUBLIC 0x00000010
#define RT6_LOOKUP_F_SRCPREF_COA 0x00000020
struct netlink_callback;
struct rt6_rtnl_dump_arg {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct sk_buff *skb;
 struct netlink_callback *cb;
 struct net *net;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
