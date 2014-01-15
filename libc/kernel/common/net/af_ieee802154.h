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
#ifndef _AF_IEEE802154_H
#define _AF_IEEE802154_H
#include <linux/socket.h>
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IEEE802154_ADDR_NONE = 0x0,
 IEEE802154_ADDR_SHORT = 0x2,
 IEEE802154_ADDR_LONG = 0x3,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IEEE802154_ADDR_LEN 8
struct ieee802154_addr {
 int addr_type;
 u16 pan_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 union {
 u8 hwaddr[IEEE802154_ADDR_LEN];
 u16 short_addr;
 };
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define IEEE802154_PANID_BROADCAST 0xffff
#define IEEE802154_ADDR_BROADCAST 0xffff
#define IEEE802154_ADDR_UNDEF 0xfffe
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct sockaddr_ieee802154 {
 sa_family_t family;
 struct ieee802154_addr addr;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SOL_IEEE802154 0
#define WPAN_WANTACK 0
#endif
