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
#ifndef _NET_MIP6_H
#define _NET_MIP6_H
#include <linux/skbuff.h>
#include <net/sock.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ip6_mh {
 __u8 ip6mh_proto;
 __u8 ip6mh_hdrlen;
 __u8 ip6mh_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 ip6mh_reserved;
 __u16 ip6mh_cksum;
 __u8 data[0];
} __packed;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IP6_MH_TYPE_BRR 0
#define IP6_MH_TYPE_HOTI 1
#define IP6_MH_TYPE_COTI 2
#define IP6_MH_TYPE_HOT 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IP6_MH_TYPE_COT 4
#define IP6_MH_TYPE_BU 5
#define IP6_MH_TYPE_BACK 6
#define IP6_MH_TYPE_BERROR 7
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IP6_MH_TYPE_MAX IP6_MH_TYPE_BERROR
#endif
