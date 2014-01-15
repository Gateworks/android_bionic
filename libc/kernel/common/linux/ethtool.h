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
#ifndef _LINUX_ETHTOOL_H
#define _LINUX_ETHTOOL_H
#include <linux/compat.h>
#include <uapi/linux/ethtool.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/rculist.h>
enum ethtool_phys_id_state {
 ETHTOOL_ID_INACTIVE,
 ETHTOOL_ID_ACTIVE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ETHTOOL_ID_ON,
 ETHTOOL_ID_OFF
};
struct net_device;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ethtool_ops {
 int (*get_settings)(struct net_device *, struct ethtool_cmd *);
 int (*set_settings)(struct net_device *, struct ethtool_cmd *);
 void (*get_drvinfo)(struct net_device *, struct ethtool_drvinfo *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*get_regs_len)(struct net_device *);
 void (*get_regs)(struct net_device *, struct ethtool_regs *, void *);
 void (*get_wol)(struct net_device *, struct ethtool_wolinfo *);
 int (*set_wol)(struct net_device *, struct ethtool_wolinfo *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 (*get_msglevel)(struct net_device *);
 void (*set_msglevel)(struct net_device *, u32);
 int (*nway_reset)(struct net_device *);
 u32 (*get_link)(struct net_device *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*get_eeprom_len)(struct net_device *);
 int (*get_eeprom)(struct net_device *,
 struct ethtool_eeprom *, u8 *);
 int (*set_eeprom)(struct net_device *,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct ethtool_eeprom *, u8 *);
 int (*get_coalesce)(struct net_device *, struct ethtool_coalesce *);
 int (*set_coalesce)(struct net_device *, struct ethtool_coalesce *);
 void (*get_ringparam)(struct net_device *,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct ethtool_ringparam *);
 int (*set_ringparam)(struct net_device *,
 struct ethtool_ringparam *);
 void (*get_pauseparam)(struct net_device *,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct ethtool_pauseparam*);
 int (*set_pauseparam)(struct net_device *,
 struct ethtool_pauseparam*);
 void (*self_test)(struct net_device *, struct ethtool_test *, u64 *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*get_strings)(struct net_device *, u32 stringset, u8 *);
 int (*set_phys_id)(struct net_device *, enum ethtool_phys_id_state);
 void (*get_ethtool_stats)(struct net_device *,
 struct ethtool_stats *, u64 *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*begin)(struct net_device *);
 void (*complete)(struct net_device *);
 u32 (*get_priv_flags)(struct net_device *);
 int (*set_priv_flags)(struct net_device *, u32);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*get_sset_count)(struct net_device *, int);
 int (*get_rxnfc)(struct net_device *,
 struct ethtool_rxnfc *, u32 *rule_locs);
 int (*set_rxnfc)(struct net_device *, struct ethtool_rxnfc *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*flash_device)(struct net_device *, struct ethtool_flash *);
 int (*reset)(struct net_device *, u32 *);
 u32 (*get_rxfh_indir_size)(struct net_device *);
 int (*get_rxfh_indir)(struct net_device *, u32 *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*set_rxfh_indir)(struct net_device *, const u32 *);
 void (*get_channels)(struct net_device *, struct ethtool_channels *);
 int (*set_channels)(struct net_device *, struct ethtool_channels *);
 int (*get_dump_flag)(struct net_device *, struct ethtool_dump *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*get_dump_data)(struct net_device *,
 struct ethtool_dump *, void *);
 int (*set_dump)(struct net_device *, struct ethtool_dump *);
 int (*get_ts_info)(struct net_device *, struct ethtool_ts_info *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*get_module_info)(struct net_device *,
 struct ethtool_modinfo *);
 int (*get_module_eeprom)(struct net_device *,
 struct ethtool_eeprom *, u8 *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*get_eee)(struct net_device *, struct ethtool_eee *);
 int (*set_eee)(struct net_device *, struct ethtool_eee *);
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
