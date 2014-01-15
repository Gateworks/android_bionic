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
#ifndef __LINUX_MROUTE6_H
#define __LINUX_MROUTE6_H
#include <linux/pim.h>
#include <linux/skbuff.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <net/net_namespace.h>
#include <uapi/linux/mroute6.h>
struct sock;
struct mif_device {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct net_device *dev;
 unsigned long bytes_in,bytes_out;
 unsigned long pkt_in,pkt_out;
 unsigned long rate_limit;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char threshold;
 unsigned short flags;
 int link;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VIFF_STATIC 0x8000
struct mfc6_cache {
 struct in6_addr mf6c_mcastgrp;
 struct in6_addr mf6c_origin;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 mifi_t mf6c_parent;
 int mfc_flags;
 union {
 struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long expires;
 struct sk_buff_head unresolved;
 } unres;
 struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long last_assert;
 int minvif;
 int maxvif;
 unsigned long bytes;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long pkt;
 unsigned long wrong_if;
 unsigned char ttls[MAXMIFS];
 } res;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } mfc_un;
};
#define MFC_STATIC 1
#define MFC_NOTIFY 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MFC6_LINES 64
#define MFC6_HASH(a, g) (((__force u32)(a)->s6_addr32[0] ^   (__force u32)(a)->s6_addr32[1] ^   (__force u32)(a)->s6_addr32[2] ^   (__force u32)(a)->s6_addr32[3] ^   (__force u32)(g)->s6_addr32[0] ^   (__force u32)(g)->s6_addr32[1] ^   (__force u32)(g)->s6_addr32[2] ^   (__force u32)(g)->s6_addr32[3]) % MFC6_LINES)
#define MFC_ASSERT_THRESH (3*HZ)
struct rtmsg;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
