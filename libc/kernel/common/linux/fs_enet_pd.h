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
#ifndef FS_ENET_PD_H
#define FS_ENET_PD_H
#include <linux/string.h>
#include <linux/of_mdio.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <asm/types.h>
#define FS_ENET_NAME "fs_enet"
enum fs_id {
 fsid_fec1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 fsid_fec2,
 fsid_fcc1,
 fsid_fcc2,
 fsid_fcc3,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 fsid_scc1,
 fsid_scc2,
 fsid_scc3,
 fsid_scc4,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define FS_MAX_INDEX 9
enum fs_mii_method {
 fsmii_fixed,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 fsmii_fec,
 fsmii_bitbang,
};
enum fs_ioport {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 fsiop_porta,
 fsiop_portb,
 fsiop_portc,
 fsiop_portd,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 fsiop_porte,
};
struct fs_mii_bit {
 u32 offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 bit;
 u8 polarity;
};
struct fs_mii_bb_platform_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct fs_mii_bit mdio_dir;
 struct fs_mii_bit mdio_dat;
 struct fs_mii_bit mdc_dat;
 int delay;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int irq[32];
};
struct fs_platform_info {
 void(*init_ioports)(struct fs_platform_info *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int fs_no;
 char fs_type[4];
 u32 cp_page;
 u32 cp_block;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 cp_command;
 u32 clk_trx;
 u32 clk_rx;
 u32 clk_tx;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 clk_route;
 u32 clk_mask;
 u32 mem_offset;
 u32 dpram_offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 fcc_regs_c;
 u32 device_flags;
 struct device_node *phy_node;
 const struct fs_mii_bus_info *bus_info;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int rx_ring, tx_ring;
 __u8 macaddr[6];
 int rx_copybreak;
 int use_napi;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int napi_weight;
 int use_rmii;
 int has_phy;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct fs_mii_fec_platform_info {
 u32 irq[32];
 u32 mii_speed;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
