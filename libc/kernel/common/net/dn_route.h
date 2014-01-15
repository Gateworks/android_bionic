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
#ifndef _NET_DN_ROUTE_H
#define _NET_DN_ROUTE_H
#define DN_RT_F_PID 0x07
#define DN_RT_F_PF 0x80
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DN_RT_F_VER 0x40
#define DN_RT_F_IE 0x20
#define DN_RT_F_RTS 0x10
#define DN_RT_F_RQR 0x08
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DN_RT_PKT_MSK 0x06
#define DN_RT_PKT_SHORT 0x02
#define DN_RT_PKT_LONG 0x06
#define DN_RT_PKT_CNTL 0x01
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DN_RT_CNTL_MSK 0x0f
#define DN_RT_PKT_INIT 0x01
#define DN_RT_PKT_VERI 0x03
#define DN_RT_PKT_HELO 0x05
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DN_RT_PKT_L1RT 0x07
#define DN_RT_PKT_L2RT 0x09
#define DN_RT_PKT_ERTH 0x0b
#define DN_RT_PKT_EEDH 0x0d
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DN_RT_INFO_TYPE 0x03
#define DN_RT_INFO_L1RT 0x02
#define DN_RT_INFO_L2RT 0x01
#define DN_RT_INFO_ENDN 0x03
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DN_RT_INFO_VERI 0x04
#define DN_RT_INFO_RJCT 0x08
#define DN_RT_INFO_VFLD 0x10
#define DN_RT_INFO_NOML 0x20
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DN_RT_INFO_BLKR 0x40
struct dn_route {
 struct dst_entry dst;
 struct neighbour *n;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct flowidn fld;
 __le16 rt_saddr;
 __le16 rt_daddr;
 __le16 rt_gateway;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 rt_local_src;
 __le16 rt_src_map;
 __le16 rt_dst_map;
 unsigned int rt_flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int rt_type;
};
#include <net/sock.h>
#include <linux/if_arp.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
