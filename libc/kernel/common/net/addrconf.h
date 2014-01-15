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
#ifndef _ADDRCONF_H
#define _ADDRCONF_H
#define MAX_RTR_SOLICITATIONS 3
#define RTR_SOLICITATION_INTERVAL (4*HZ)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MIN_VALID_LIFETIME (2*3600)
#define TEMP_VALID_LIFETIME (7*86400)
#define TEMP_PREFERRED_LIFETIME (86400)
#define REGEN_MAX_RETRY (3)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MAX_DESYNC_FACTOR (600)
#define ADDR_CHECK_FREQUENCY (120*HZ)
#define IPV6_MAX_ADDRESSES 16
#define ADDRCONF_TIMER_FUZZ_MINUS (HZ > 50 ? HZ / 50 : 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ADDRCONF_TIMER_FUZZ (HZ / 4)
#define ADDRCONF_TIMER_FUZZ_MAX (HZ)
#include <linux/in.h>
#include <linux/in6.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct prefix_info {
 __u8 type;
 __u8 length;
 __u8 prefix_len;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifdef __BIG_ENDIAN_BITFIELD
 __u8 onlink : 1,
 autoconf : 1,
 reserved : 6;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#elif defined(__LITTLE_ENDIAN_BITFIELD)
 __u8 reserved : 6,
 autoconf : 1,
 onlink : 1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#else
#error "Please fix <asm/byteorder.h>"
#endif
 __be32 valid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be32 prefered;
 __be32 reserved2;
 struct in6_addr prefix;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/netdevice.h>
#include <net/if_inet6.h>
#include <net/ipv6.h>
#define IN6_ADDR_HSIZE_SHIFT 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IN6_ADDR_HSIZE (1 << IN6_ADDR_HSIZE_SHIFT)
#endif
