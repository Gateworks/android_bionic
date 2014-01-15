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
#ifndef _NDISC_H
#define _NDISC_H
#define NDISC_ROUTER_SOLICITATION 133
#define NDISC_ROUTER_ADVERTISEMENT 134
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NDISC_NEIGHBOUR_SOLICITATION 135
#define NDISC_NEIGHBOUR_ADVERTISEMENT 136
#define NDISC_REDIRECT 137
#define NDISC_NODETYPE_UNSPEC 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NDISC_NODETYPE_HOST 1
#define NDISC_NODETYPE_NODEFAULT 2
#define NDISC_NODETYPE_DEFAULT 3
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __ND_OPT_PREFIX_INFO_END = 0,
 ND_OPT_SOURCE_LL_ADDR = 1,
 ND_OPT_TARGET_LL_ADDR = 2,
 ND_OPT_PREFIX_INFO = 3,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ND_OPT_REDIRECT_HDR = 4,
 ND_OPT_MTU = 5,
 __ND_OPT_ARRAY_MAX,
 ND_OPT_ROUTE_INFO = 24,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ND_OPT_RDNSS = 25,
 ND_OPT_DNSSL = 31,
 __ND_OPT_MAX
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MAX_RTR_SOLICITATION_DELAY HZ
#define ND_REACHABLE_TIME (30*HZ)
#define ND_RETRANS_TIMER HZ
#include <linux/compiler.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/icmpv6.h>
#include <linux/in6.h>
#include <linux/types.h>
#include <linux/if_arp.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/netdevice.h>
#include <linux/hash.h>
#include <net/neighbour.h>
struct ctl_table;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct inet6_dev;
struct net_device;
struct net_proto_family;
struct sk_buff;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct nd_msg {
 struct icmp6hdr icmph;
 struct in6_addr target;
 __u8 opt[0];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct rs_msg {
 struct icmp6hdr icmph;
 __u8 opt[0];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct ra_msg {
 struct icmp6hdr icmph;
 __be32 reachable_time;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be32 retrans_timer;
};
struct rd_msg {
 struct icmp6hdr icmph;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct in6_addr target;
 struct in6_addr dest;
 __u8 opt[0];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct nd_opt_hdr {
 __u8 nd_opt_type;
 __u8 nd_opt_len;
} __packed;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ndisc_options {
 struct nd_opt_hdr *nd_opt_array[__ND_OPT_ARRAY_MAX];
 struct nd_opt_hdr *nd_useropts;
 struct nd_opt_hdr *nd_useropts_end;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define nd_opts_src_lladdr nd_opt_array[ND_OPT_SOURCE_LL_ADDR]
#define nd_opts_tgt_lladdr nd_opt_array[ND_OPT_TARGET_LL_ADDR]
#define nd_opts_pi nd_opt_array[ND_OPT_PREFIX_INFO]
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define nd_opts_pi_end nd_opt_array[__ND_OPT_PREFIX_INFO_END]
#define nd_opts_rh nd_opt_array[ND_OPT_REDIRECT_HDR]
#define nd_opts_mtu nd_opt_array[ND_OPT_MTU]
#define NDISC_OPT_SPACE(len) (((len)+2+7)&~7)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
