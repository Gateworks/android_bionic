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
#ifndef __ASM_SH_ETH_H__
#define __ASM_SH_ETH_H__
#include <linux/phy.h>
enum {EDMAC_LITTLE_ENDIAN, EDMAC_BIG_ENDIAN};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
 SH_ETH_REG_GIGABIT,
 SH_ETH_REG_FAST_RCAR,
 SH_ETH_REG_FAST_SH4,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SH_ETH_REG_FAST_SH3_SH2
};
struct sh_eth_plat_data {
 int phy;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int edmac_endian;
 int register_type;
 phy_interface_t phy_interface;
 void (*set_mdio_gate)(void *addr);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char mac_addr[6];
 unsigned no_ether_link:1;
 unsigned ether_link_active_low:1;
 unsigned needs_init:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
