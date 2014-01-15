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
#ifndef LINUX_MMC_CARD_H
#define LINUX_MMC_CARD_H
#include <linux/device.h>
#include <linux/mmc/core.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/mod_devicetable.h>
struct mmc_cid {
 unsigned int manfid;
 char prod_name[8];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char prv;
 unsigned int serial;
 unsigned short oemid;
 unsigned short year;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char hwrev;
 unsigned char fwrev;
 unsigned char month;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct mmc_csd {
 unsigned char structure;
 unsigned char mmca_vsn;
 unsigned short cmdclass;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned short tacc_clks;
 unsigned int tacc_ns;
 unsigned int c_size;
 unsigned int r2w_factor;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int max_dtr;
 unsigned int erase_size;
 unsigned int read_blkbits;
 unsigned int write_blkbits;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int capacity;
 unsigned int read_partial:1,
 read_misalign:1,
 write_partial:1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 write_misalign:1;
};
struct mmc_ext_csd {
 u8 rev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 erase_group_def;
 u8 sec_feature_support;
 u8 rel_sectors;
 u8 rel_param;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 part_config;
 u8 cache_ctrl;
 u8 rst_n_function;
 u8 max_packed_writes;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 max_packed_reads;
 u8 packed_event_en;
 unsigned int part_time;
 unsigned int sa_timeout;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int generic_cmd6_time;
 unsigned int power_off_longtime;
 u8 power_off_notification;
 unsigned int hs_max_dtr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MMC_HIGH_26_MAX_DTR 26000000
#define MMC_HIGH_52_MAX_DTR 52000000
#define MMC_HIGH_DDR_MAX_DTR 52000000
#define MMC_HS200_MAX_DTR 200000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int sectors;
 unsigned int card_type;
 unsigned int hc_erase_size;
 unsigned int hc_erase_timeout;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int sec_trim_mult;
 unsigned int sec_erase_mult;
 unsigned int trim_timeout;
 bool enhanced_area_en;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long long enhanced_area_offset;
 unsigned int enhanced_area_size;
 unsigned int cache_size;
 bool hpi_en;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 bool hpi;
 unsigned int hpi_cmd;
 bool bkops;
 bool bkops_en;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int data_sector_size;
 unsigned int data_tag_unit_size;
 unsigned int boot_ro_lock;
 unsigned int boot_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 bool boot_ro_lockable;
 u8 raw_exception_status;
 u8 raw_partition_support;
 u8 raw_rpmb_size_mult;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 boot_bus_width;
 u8 boot_config;
 u8 raw_erased_mem_count;
 u8 raw_ext_csd_structure;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 raw_card_type;
 u8 out_of_int_time;
 u8 raw_s_a_timeout;
 u8 raw_hc_erase_gap_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 raw_erase_timeout_mult;
 u8 raw_hc_erase_grp_size;
 u8 boot_info;
 u8 raw_sec_trim_mult;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 raw_sec_erase_mult;
 u8 raw_sec_feature_support;
 u8 raw_trim_mult;
 u8 raw_bkops_status;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 raw_sectors[4];
 unsigned int feature_support;
#define MMC_DISCARD_FEATURE BIT(0)
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct sd_scr {
 unsigned char sda_vsn;
 unsigned char sda_spec3;
 unsigned char bus_widths;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SD_SCR_BUS_WIDTH_1 (1<<0)
#define SD_SCR_BUS_WIDTH_4 (1<<2)
 unsigned char cmds;
#define SD_SCR_CMD20_SUPPORT (1<<0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SD_SCR_CMD23_SUPPORT (1<<1)
};
struct sd_ssr {
 unsigned int au;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int erase_timeout;
 unsigned int erase_offset;
};
struct sd_switch_caps {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int hs_max_dtr;
 unsigned int uhs_max_dtr;
#define HIGH_SPEED_MAX_DTR 50000000
#define UHS_SDR104_MAX_DTR 208000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define UHS_SDR50_MAX_DTR 100000000
#define UHS_DDR50_MAX_DTR 50000000
#define UHS_SDR25_MAX_DTR UHS_DDR50_MAX_DTR
#define UHS_SDR12_MAX_DTR 25000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int sd3_bus_mode;
#define UHS_SDR12_BUS_SPEED 0
#define HIGH_SPEED_BUS_SPEED 1
#define UHS_SDR25_BUS_SPEED 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define UHS_SDR50_BUS_SPEED 2
#define UHS_SDR104_BUS_SPEED 3
#define UHS_DDR50_BUS_SPEED 4
#define SD_MODE_HIGH_SPEED (1 << HIGH_SPEED_BUS_SPEED)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SD_MODE_UHS_SDR12 (1 << UHS_SDR12_BUS_SPEED)
#define SD_MODE_UHS_SDR25 (1 << UHS_SDR25_BUS_SPEED)
#define SD_MODE_UHS_SDR50 (1 << UHS_SDR50_BUS_SPEED)
#define SD_MODE_UHS_SDR104 (1 << UHS_SDR104_BUS_SPEED)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SD_MODE_UHS_DDR50 (1 << UHS_DDR50_BUS_SPEED)
 unsigned int sd3_drv_type;
#define SD_DRIVER_TYPE_B 0x01
#define SD_DRIVER_TYPE_A 0x02
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SD_DRIVER_TYPE_C 0x04
#define SD_DRIVER_TYPE_D 0x08
 unsigned int sd3_curr_limit;
#define SD_SET_CURRENT_LIMIT_200 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SD_SET_CURRENT_LIMIT_400 1
#define SD_SET_CURRENT_LIMIT_600 2
#define SD_SET_CURRENT_LIMIT_800 3
#define SD_SET_CURRENT_NO_CHANGE (-1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SD_MAX_CURRENT_200 (1 << SD_SET_CURRENT_LIMIT_200)
#define SD_MAX_CURRENT_400 (1 << SD_SET_CURRENT_LIMIT_400)
#define SD_MAX_CURRENT_600 (1 << SD_SET_CURRENT_LIMIT_600)
#define SD_MAX_CURRENT_800 (1 << SD_SET_CURRENT_LIMIT_800)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct sdio_cccr {
 unsigned int sdio_vsn;
 unsigned int sd_vsn;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int multi_block:1,
 low_speed:1,
 wide_bus:1,
 high_power:1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 high_speed:1,
 disable_cd:1;
};
struct sdio_cis {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned short vendor;
 unsigned short device;
 unsigned short blksize;
 unsigned int max_dtr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct mmc_host;
struct sdio_func;
struct sdio_func_tuple;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SDIO_MAX_FUNCS 7
enum mmc_blk_status {
 MMC_BLK_SUCCESS = 0,
 MMC_BLK_PARTIAL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MMC_BLK_CMD_ERR,
 MMC_BLK_RETRY,
 MMC_BLK_ABORT,
 MMC_BLK_DATA_ERR,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MMC_BLK_ECC_ERR,
 MMC_BLK_NOMEDIUM,
 MMC_BLK_NEW_REQUEST,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MMC_NUM_BOOT_PARTITION 2
#define MMC_NUM_GP_PARTITION 4
#define MMC_NUM_PHY_PARTITION 6
#define MAX_MMC_PART_NAME_LEN 20
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct mmc_part {
 unsigned int size;
 unsigned int part_cfg;
 char name[MAX_MMC_PART_NAME_LEN];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 bool force_ro;
 unsigned int area_type;
#define MMC_BLK_DATA_AREA_MAIN (1<<0)
#define MMC_BLK_DATA_AREA_BOOT (1<<1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MMC_BLK_DATA_AREA_GP (1<<2)
#define MMC_BLK_DATA_AREA_RPMB (1<<3)
};
struct mmc_card {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct mmc_host *host;
 struct device dev;
 unsigned int rca;
 unsigned int type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MMC_TYPE_MMC 0
#define MMC_TYPE_SD 1
#define MMC_TYPE_SDIO 2
#define MMC_TYPE_SD_COMBO 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int state;
#define MMC_STATE_PRESENT (1<<0)
#define MMC_STATE_READONLY (1<<1)
#define MMC_STATE_HIGHSPEED (1<<2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MMC_STATE_BLOCKADDR (1<<3)
#define MMC_STATE_HIGHSPEED_DDR (1<<4)
#define MMC_STATE_ULTRAHIGHSPEED (1<<5)
#define MMC_CARD_SDXC (1<<6)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MMC_CARD_REMOVED (1<<7)
#define MMC_STATE_HIGHSPEED_200 (1<<8)
#define MMC_STATE_DOING_BKOPS (1<<10)
 unsigned int quirks;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MMC_QUIRK_LENIENT_FN0 (1<<0)
#define MMC_QUIRK_BLKSZ_FOR_BYTE_MODE (1<<1)
#define MMC_QUIRK_NONSTD_SDIO (1<<2)
#define MMC_QUIRK_BROKEN_CLK_GATING (1<<3)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MMC_QUIRK_NONSTD_FUNC_IF (1<<4)
#define MMC_QUIRK_DISABLE_CD (1<<5)
#define MMC_QUIRK_INAND_CMD38 (1<<6)
#define MMC_QUIRK_BLK_NO_CMD23 (1<<7)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MMC_QUIRK_BROKEN_BYTE_MODE_512 (1<<8)
#define MMC_QUIRK_LONG_READ_TIME (1<<9)
#define MMC_QUIRK_SEC_ERASE_TRIM_BROKEN (1<<10)
 unsigned int erase_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int erase_shift;
 unsigned int pref_erase;
 u8 erased_byte;
 u32 raw_cid[4];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 raw_csd[4];
 u32 raw_scr[2];
 struct mmc_cid cid;
 struct mmc_csd csd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct mmc_ext_csd ext_csd;
 struct sd_scr scr;
 struct sd_ssr ssr;
 struct sd_switch_caps sw_caps;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int sdio_funcs;
 struct sdio_cccr cccr;
 struct sdio_cis cis;
 struct sdio_func *sdio_func[SDIO_MAX_FUNCS];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct sdio_func *sdio_single_irq;
 unsigned num_info;
 const char **info;
 struct sdio_func_tuple *tuples;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int sd_bus_speed;
 struct dentry *debugfs_root;
 struct mmc_part part[MMC_NUM_PHY_PARTITION];
 unsigned int nr_parts;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct mmc_fixup {
 const char *name;
 u64 rev_start, rev_end;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int manfid;
 unsigned short oemid;
 u16 cis_vendor, cis_device;
 void (*vendor_fixup)(struct mmc_card *card, int data);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int data;
};
#define CID_MANFID_ANY (-1u)
#define CID_OEMID_ANY ((unsigned short) -1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CID_NAME_ANY (NULL)
#define END_FIXUP { 0 }
#define _FIXUP_EXT(_name, _manfid, _oemid, _rev_start, _rev_end,   _cis_vendor, _cis_device,   _fixup, _data)   {   .name = (_name),   .manfid = (_manfid),   .oemid = (_oemid),   .rev_start = (_rev_start),   .rev_end = (_rev_end),   .cis_vendor = (_cis_vendor),   .cis_device = (_cis_device),   .vendor_fixup = (_fixup),   .data = (_data),   }
#define MMC_FIXUP_REV(_name, _manfid, _oemid, _rev_start, _rev_end,   _fixup, _data)   _FIXUP_EXT(_name, _manfid,   _oemid, _rev_start, _rev_end,   SDIO_ANY_ID, SDIO_ANY_ID,   _fixup, _data)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MMC_FIXUP(_name, _manfid, _oemid, _fixup, _data)   MMC_FIXUP_REV(_name, _manfid, _oemid, 0, -1ull, _fixup, _data)
#define SDIO_FIXUP(_vendor, _device, _fixup, _data)   _FIXUP_EXT(CID_NAME_ANY, CID_MANFID_ANY,   CID_OEMID_ANY, 0, -1ull,   _vendor, _device,   _fixup, _data)
#define cid_rev(hwrev, fwrev, year, month)   (((u64) hwrev) << 40 |   ((u64) fwrev) << 32 |   ((u64) year) << 16 |   ((u64) month))
#define cid_rev_card(card)   cid_rev(card->cid.hwrev,   card->cid.fwrev,   card->cid.year,   card->cid.month)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define mmc_card_mmc(c) ((c)->type == MMC_TYPE_MMC)
#define mmc_card_sd(c) ((c)->type == MMC_TYPE_SD)
#define mmc_card_sdio(c) ((c)->type == MMC_TYPE_SDIO)
#define mmc_card_present(c) ((c)->state & MMC_STATE_PRESENT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define mmc_card_readonly(c) ((c)->state & MMC_STATE_READONLY)
#define mmc_card_highspeed(c) ((c)->state & MMC_STATE_HIGHSPEED)
#define mmc_card_hs200(c) ((c)->state & MMC_STATE_HIGHSPEED_200)
#define mmc_card_blockaddr(c) ((c)->state & MMC_STATE_BLOCKADDR)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define mmc_card_ddr_mode(c) ((c)->state & MMC_STATE_HIGHSPEED_DDR)
#define mmc_card_uhs(c) ((c)->state & MMC_STATE_ULTRAHIGHSPEED)
#define mmc_sd_card_uhs(c) ((c)->state & MMC_STATE_ULTRAHIGHSPEED)
#define mmc_card_ext_capacity(c) ((c)->state & MMC_CARD_SDXC)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define mmc_card_removed(c) ((c) && ((c)->state & MMC_CARD_REMOVED))
#define mmc_card_doing_bkops(c) ((c)->state & MMC_STATE_DOING_BKOPS)
#define mmc_card_set_present(c) ((c)->state |= MMC_STATE_PRESENT)
#define mmc_card_set_readonly(c) ((c)->state |= MMC_STATE_READONLY)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define mmc_card_set_highspeed(c) ((c)->state |= MMC_STATE_HIGHSPEED)
#define mmc_card_set_hs200(c) ((c)->state |= MMC_STATE_HIGHSPEED_200)
#define mmc_card_set_blockaddr(c) ((c)->state |= MMC_STATE_BLOCKADDR)
#define mmc_card_set_ddr_mode(c) ((c)->state |= MMC_STATE_HIGHSPEED_DDR)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define mmc_card_set_uhs(c) ((c)->state |= MMC_STATE_ULTRAHIGHSPEED)
#define mmc_sd_card_set_uhs(c) ((c)->state |= MMC_STATE_ULTRAHIGHSPEED)
#define mmc_card_set_ext_capacity(c) ((c)->state |= MMC_CARD_SDXC)
#define mmc_card_set_removed(c) ((c)->state |= MMC_CARD_REMOVED)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define mmc_card_set_doing_bkops(c) ((c)->state |= MMC_STATE_DOING_BKOPS)
#define mmc_card_clr_doing_bkops(c) ((c)->state &= ~MMC_STATE_DOING_BKOPS)
#define mmc_card_name(c) ((c)->cid.prod_name)
#define mmc_card_id(c) (dev_name(&(c)->dev))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define mmc_dev_to_card(d) container_of(d, struct mmc_card, dev)
#define mmc_list_to_card(l) container_of(l, struct mmc_card, node)
#define mmc_get_drvdata(c) dev_get_drvdata(&(c)->dev)
#define mmc_set_drvdata(c,d) dev_set_drvdata(&(c)->dev, d)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct mmc_driver {
 struct device_driver drv;
 int (*probe)(struct mmc_card *);
 void (*remove)(struct mmc_card *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*suspend)(struct mmc_card *);
 int (*resume)(struct mmc_card *);
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
