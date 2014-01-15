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
#ifndef _NET_IP6_TUNNEL_H
#define _NET_IP6_TUNNEL_H
#include <linux/ipv6.h>
#include <linux/netdevice.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/if_tunnel.h>
#include <linux/ip6_tunnel.h>
#define IP6TUNNEL_ERR_TIMEO (30*HZ)
#define IP6_TNL_F_CAP_XMIT 0x10000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IP6_TNL_F_CAP_RCV 0x20000
#define IP6_TNL_F_CAP_PER_PACKET 0x40000
struct __ip6_tnl_parm {
 char name[IFNAMSIZ];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int link;
 __u8 proto;
 __u8 encap_limit;
 __u8 hop_limit;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be32 flowinfo;
 __u32 flags;
 struct in6_addr laddr;
 struct in6_addr raddr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be16 i_flags;
 __be16 o_flags;
 __be32 i_key;
 __be32 o_key;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct ip6_tnl {
 struct ip6_tnl __rcu *next;
 struct net_device *dev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct __ip6_tnl_parm parms;
 struct flowi fl;
 struct dst_entry *dst_cache;
 u32 dst_cookie;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int err_count;
 unsigned long err_time;
 __u32 i_seqno;
 __u32 o_seqno;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int hlen;
 int mlink;
};
struct ipv6_tlv_tnl_enc_lim {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 type;
 __u8 length;
 __u8 encap_limit;
} __packed;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct dst_entry *ip6_tnl_dst_check(struct ip6_tnl *t);
#endif
