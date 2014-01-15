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
#ifndef _INET_ECN_H_
#define _INET_ECN_H_
#include <linux/ip.h>
#include <linux/skbuff.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <net/inet_sock.h>
#include <net/dsfield.h>
enum {
 INET_ECN_NOT_ECT = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 INET_ECN_ECT_1 = 1,
 INET_ECN_ECT_0 = 2,
 INET_ECN_CE = 3,
 INET_ECN_MASK = 3,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define IP6_ECN_flow_init(label) do {   (label) &= ~htonl(INET_ECN_MASK << 20);   } while (0)
#define IP6_ECN_flow_xmit(sk, label) do {   if (INET_ECN_is_capable(inet6_sk(sk)->tclass))   (label) |= htonl(INET_ECN_ECT_0 << 20);   } while (0)
struct ipv6hdr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
