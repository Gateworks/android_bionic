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
#ifndef __LINUX_MTD_NAND_H
#define __LINUX_MTD_NAND_H
#include <linux/wait.h>
#include <linux/spinlock.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/mtd/mtd.h>
#include <linux/mtd/flashchip.h>
#include <linux/mtd/bbm.h>
struct mtd_info;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct nand_flash_dev;
#define NAND_MAX_CHIPS 8
#define NAND_MAX_OOBSIZE 744
#define NAND_MAX_PAGESIZE 8192
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NAND_NCE 0x01
#define NAND_CLE 0x02
#define NAND_ALE 0x04
#define NAND_CTRL_CLE (NAND_NCE | NAND_CLE)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NAND_CTRL_ALE (NAND_NCE | NAND_ALE)
#define NAND_CTRL_CHANGE 0x80
#define NAND_CMD_READ0 0
#define NAND_CMD_READ1 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NAND_CMD_RNDOUT 5
#define NAND_CMD_PAGEPROG 0x10
#define NAND_CMD_READOOB 0x50
#define NAND_CMD_ERASE1 0x60
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NAND_CMD_STATUS 0x70
#define NAND_CMD_SEQIN 0x80
#define NAND_CMD_RNDIN 0x85
#define NAND_CMD_READID 0x90
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NAND_CMD_ERASE2 0xd0
#define NAND_CMD_PARAM 0xec
#define NAND_CMD_GET_FEATURES 0xee
#define NAND_CMD_SET_FEATURES 0xef
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NAND_CMD_RESET 0xff
#define NAND_CMD_LOCK 0x2a
#define NAND_CMD_UNLOCK1 0x23
#define NAND_CMD_UNLOCK2 0x24
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NAND_CMD_READSTART 0x30
#define NAND_CMD_RNDOUTSTART 0xE0
#define NAND_CMD_CACHEDPROG 0x15
#define NAND_CMD_NONE -1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NAND_STATUS_FAIL 0x01
#define NAND_STATUS_FAIL_N1 0x02
#define NAND_STATUS_TRUE_READY 0x20
#define NAND_STATUS_READY 0x40
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NAND_STATUS_WP 0x80
typedef enum {
 NAND_ECC_NONE,
 NAND_ECC_SOFT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NAND_ECC_HW,
 NAND_ECC_HW_SYNDROME,
 NAND_ECC_HW_OOB_FIRST,
 NAND_ECC_SOFT_BCH,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} nand_ecc_modes_t;
#define NAND_ECC_READ 0
#define NAND_ECC_WRITE 1
#define NAND_ECC_READSYN 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NAND_GET_DEVICE 0x80
#define NAND_BUSWIDTH_16 0x00000002
#define NAND_CACHEPRG 0x00000008
#define NAND_NEED_READRDY 0x00000100
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NAND_NO_SUBPAGE_WRITE 0x00000200
#define NAND_BROKEN_XD 0x00000400
#define NAND_ROM 0x00000800
#define NAND_SUBPAGE_READ 0x00001000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NAND_SAMSUNG_LP_OPTIONS NAND_CACHEPRG
#define NAND_HAS_CACHEPROG(chip) ((chip->options & NAND_CACHEPRG))
#define NAND_HAS_SUBPAGE_READ(chip) ((chip->options & NAND_SUBPAGE_READ))
#define NAND_SKIP_BBTSCAN 0x00010000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NAND_OWN_BUFFERS 0x00020000
#define NAND_SCAN_SILENT_NODEV 0x00040000
#define NAND_BUSWIDTH_AUTO 0x00080000
#define NAND_CONTROLLER_ALLOC 0x80000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NAND_CI_CHIPNR_MSK 0x03
#define NAND_CI_CELLTYPE_MSK 0x0C
#define NAND_CI_CELLTYPE_SHIFT 2
struct nand_chip;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ONFI_FEATURE_16_BIT_BUS (1 << 0)
#define ONFI_FEATURE_EXT_PARAM_PAGE (1 << 7)
#define ONFI_TIMING_MODE_0 (1 << 0)
#define ONFI_TIMING_MODE_1 (1 << 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ONFI_TIMING_MODE_2 (1 << 2)
#define ONFI_TIMING_MODE_3 (1 << 3)
#define ONFI_TIMING_MODE_4 (1 << 4)
#define ONFI_TIMING_MODE_5 (1 << 5)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ONFI_TIMING_MODE_UNKNOWN (1 << 6)
#define ONFI_FEATURE_ADDR_TIMING_MODE 0x1
#define ONFI_SUBFEATURE_PARAM_LEN 4
#define ONFI_OPT_CMD_SET_GET_FEATURES (1 << 2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct nand_onfi_params {
 u8 sig[4];
 __le16 revision;
 __le16 features;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 opt_cmd;
 u8 reserved0[2];
 __le16 ext_param_page_length;
 u8 num_of_param_pages;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 reserved1[17];
 char manufacturer[12];
 char model[20];
 u8 jedec_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 date_code;
 u8 reserved2[13];
 __le32 byte_per_page;
 __le16 spare_bytes_per_page;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 data_bytes_per_ppage;
 __le16 spare_bytes_per_ppage;
 __le32 pages_per_block;
 __le32 blocks_per_lun;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 lun_count;
 u8 addr_cycles;
 u8 bits_per_cell;
 __le16 bb_per_lun;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 block_endurance;
 u8 guaranteed_good_blocks;
 __le16 guaranteed_block_endurance;
 u8 programs_per_page;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 ppage_attr;
 u8 ecc_bits;
 u8 interleaved_bits;
 u8 interleaved_ops;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 reserved3[13];
 u8 io_pin_capacitance_max;
 __le16 async_timing_mode;
 __le16 program_cache_timing_mode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 t_prog;
 __le16 t_bers;
 __le16 t_r;
 __le16 t_ccs;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 src_sync_timing_mode;
 __le16 src_ssync_features;
 __le16 clk_pin_capacitance_typ;
 __le16 io_pin_capacitance_typ;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 input_pin_capacitance_typ;
 u8 input_pin_capacitance_max;
 u8 driver_strenght_support;
 __le16 t_int_r;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 t_ald;
 u8 reserved4[7];
 u8 reserved5[90];
 __le16 crc;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __attribute__((packed));
#define ONFI_CRC_BASE 0x4F4E
struct onfi_ext_ecc_info {
 u8 ecc_bits;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 codeword_size;
 __le16 bb_per_lun;
 __le16 block_endurance;
 u8 reserved[2];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __packed;
#define ONFI_SECTION_TYPE_0 0
#define ONFI_SECTION_TYPE_1 1
#define ONFI_SECTION_TYPE_2 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct onfi_ext_section {
 u8 type;
 u8 length;
} __packed;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ONFI_EXT_SECTION_MAX 8
struct onfi_ext_param_page {
 __le16 crc;
 u8 sig[4];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 reserved0[10];
 struct onfi_ext_section sections[ONFI_EXT_SECTION_MAX];
} __packed;
struct nand_hw_control {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 spinlock_t lock;
 struct nand_chip *active;
 wait_queue_head_t wq;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct nand_ecc_ctrl {
 nand_ecc_modes_t mode;
 int steps;
 int size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int bytes;
 int total;
 int strength;
 int prepad;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int postpad;
 struct nand_ecclayout *layout;
 void *priv;
 void (*hwctl)(struct mtd_info *mtd, int mode);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*calculate)(struct mtd_info *mtd, const uint8_t *dat,
 uint8_t *ecc_code);
 int (*correct)(struct mtd_info *mtd, uint8_t *dat, uint8_t *read_ecc,
 uint8_t *calc_ecc);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*read_page_raw)(struct mtd_info *mtd, struct nand_chip *chip,
 uint8_t *buf, int oob_required, int page);
 int (*write_page_raw)(struct mtd_info *mtd, struct nand_chip *chip,
 const uint8_t *buf, int oob_required);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*read_page)(struct mtd_info *mtd, struct nand_chip *chip,
 uint8_t *buf, int oob_required, int page);
 int (*read_subpage)(struct mtd_info *mtd, struct nand_chip *chip,
 uint32_t offs, uint32_t len, uint8_t *buf);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*write_subpage)(struct mtd_info *mtd, struct nand_chip *chip,
 uint32_t offset, uint32_t data_len,
 const uint8_t *data_buf, int oob_required);
 int (*write_page)(struct mtd_info *mtd, struct nand_chip *chip,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const uint8_t *buf, int oob_required);
 int (*write_oob_raw)(struct mtd_info *mtd, struct nand_chip *chip,
 int page);
 int (*read_oob_raw)(struct mtd_info *mtd, struct nand_chip *chip,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int page);
 int (*read_oob)(struct mtd_info *mtd, struct nand_chip *chip, int page);
 int (*write_oob)(struct mtd_info *mtd, struct nand_chip *chip,
 int page);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct nand_buffers {
 uint8_t ecccalc[NAND_MAX_OOBSIZE];
 uint8_t ecccode[NAND_MAX_OOBSIZE];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint8_t databuf[NAND_MAX_PAGESIZE + NAND_MAX_OOBSIZE];
};
struct nand_chip {
 void __iomem *IO_ADDR_R;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void __iomem *IO_ADDR_W;
 uint8_t (*read_byte)(struct mtd_info *mtd);
 u16 (*read_word)(struct mtd_info *mtd);
 void (*write_buf)(struct mtd_info *mtd, const uint8_t *buf, int len);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*read_buf)(struct mtd_info *mtd, uint8_t *buf, int len);
 void (*select_chip)(struct mtd_info *mtd, int chip);
 int (*block_bad)(struct mtd_info *mtd, loff_t ofs, int getchip);
 int (*block_markbad)(struct mtd_info *mtd, loff_t ofs);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*cmd_ctrl)(struct mtd_info *mtd, int dat, unsigned int ctrl);
 int (*init_size)(struct mtd_info *mtd, struct nand_chip *this,
 u8 *id_data);
 int (*dev_ready)(struct mtd_info *mtd);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*cmdfunc)(struct mtd_info *mtd, unsigned command, int column,
 int page_addr);
 int(*waitfunc)(struct mtd_info *mtd, struct nand_chip *this);
 void (*erase_cmd)(struct mtd_info *mtd, int page);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*scan_bbt)(struct mtd_info *mtd);
 int (*errstat)(struct mtd_info *mtd, struct nand_chip *this, int state,
 int status, int page);
 int (*write_page)(struct mtd_info *mtd, struct nand_chip *chip,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t offset, int data_len, const uint8_t *buf,
 int oob_required, int page, int cached, int raw);
 int (*onfi_set_features)(struct mtd_info *mtd, struct nand_chip *chip,
 int feature_addr, uint8_t *subfeature_para);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*onfi_get_features)(struct mtd_info *mtd, struct nand_chip *chip,
 int feature_addr, uint8_t *subfeature_para);
 int chip_delay;
 unsigned int options;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int bbt_options;
 int page_shift;
 int phys_erase_shift;
 int bbt_erase_shift;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int chip_shift;
 int numchips;
 uint64_t chipsize;
 int pagemask;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int pagebuf;
 unsigned int pagebuf_bitflips;
 int subpagesize;
 uint8_t bits_per_cell;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint16_t ecc_strength_ds;
 uint16_t ecc_step_ds;
 int badblockpos;
 int badblockbits;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int onfi_version;
 struct nand_onfi_params onfi_params;
 flstate_t state;
 uint8_t *oob_poi;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct nand_hw_control *controller;
 struct nand_ecc_ctrl ecc;
 struct nand_buffers *buffers;
 struct nand_hw_control hwcontrol;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint8_t *bbt;
 struct nand_bbt_descr *bbt_td;
 struct nand_bbt_descr *bbt_md;
 struct nand_bbt_descr *badblock_pattern;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *priv;
};
#define NAND_MFR_TOSHIBA 0x98
#define NAND_MFR_SAMSUNG 0xec
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NAND_MFR_FUJITSU 0x04
#define NAND_MFR_NATIONAL 0x8f
#define NAND_MFR_RENESAS 0x07
#define NAND_MFR_STMICRO 0x20
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NAND_MFR_HYNIX 0xad
#define NAND_MFR_MICRON 0x2c
#define NAND_MFR_AMD 0x01
#define NAND_MFR_MACRONIX 0xc2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NAND_MFR_EON 0x92
#define NAND_MAX_ID_LEN 8
#define LEGACY_ID_NAND(nm, devid, chipsz, erasesz, opts)   { .name = (nm), {{ .dev_id = (devid) }}, .pagesize = 512,   .chipsize = (chipsz), .erasesize = (erasesz), .options = (opts) }
#define EXTENDED_ID_NAND(nm, devid, chipsz, opts)   { .name = (nm), {{ .dev_id = (devid) }}, .chipsize = (chipsz),   .options = (opts) }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NAND_ECC_INFO(_strength, _step)   { .strength_ds = (_strength), .step_ds = (_step) }
#define NAND_ECC_STRENGTH(type) ((type)->ecc.strength_ds)
#define NAND_ECC_STEP(type) ((type)->ecc.step_ds)
struct nand_flash_dev {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char *name;
 union {
 struct {
 uint8_t mfr_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint8_t dev_id;
 };
 uint8_t id[NAND_MAX_ID_LEN];
 };
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int pagesize;
 unsigned int chipsize;
 unsigned int erasesize;
 unsigned int options;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint16_t id_len;
 uint16_t oobsize;
 struct {
 uint16_t strength_ds;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint16_t step_ds;
 } ecc;
};
struct nand_manufacturers {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int id;
 char *name;
};
struct platform_nand_chip {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int nr_chips;
 int chip_offset;
 int nr_partitions;
 struct mtd_partition *partitions;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct nand_ecclayout *ecclayout;
 int chip_delay;
 unsigned int options;
 unsigned int bbt_options;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const char **part_probe_types;
};
struct platform_device;
struct platform_nand_ctrl {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*probe)(struct platform_device *pdev);
 void (*remove)(struct platform_device *pdev);
 void (*hwcontrol)(struct mtd_info *mtd, int cmd);
 int (*dev_ready)(struct mtd_info *mtd);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*select_chip)(struct mtd_info *mtd, int chip);
 void (*cmd_ctrl)(struct mtd_info *mtd, int dat, unsigned int ctrl);
 void (*write_buf)(struct mtd_info *mtd, const uint8_t *buf, int len);
 void (*read_buf)(struct mtd_info *mtd, uint8_t *buf, int len);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char (*read_byte)(struct mtd_info *mtd);
 void *priv;
};
struct platform_nand_data {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct platform_nand_chip chip;
 struct platform_nand_ctrl ctrl;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
