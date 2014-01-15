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
#ifndef __MTD_MTD_H__
#define __MTD_MTD_H__
#include <linux/types.h>
#include <linux/uio.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/notifier.h>
#include <linux/device.h>
#include <mtd/mtd-abi.h>
#include <asm/div64.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MTD_CHAR_MAJOR 90
#define MTD_BLOCK_MAJOR 31
#define MTD_ERASE_PENDING 0x01
#define MTD_ERASING 0x02
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MTD_ERASE_SUSPEND 0x04
#define MTD_ERASE_DONE 0x08
#define MTD_ERASE_FAILED 0x10
#define MTD_FAIL_ADDR_UNKNOWN -1LL
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct erase_info {
 struct mtd_info *mtd;
 uint64_t addr;
 uint64_t len;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint64_t fail_addr;
 u_long time;
 u_long retries;
 unsigned dev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned cell;
 void (*callback) (struct erase_info *self);
 u_long priv;
 u_char state;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct erase_info *next;
};
struct mtd_erase_region_info {
 uint64_t offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t erasesize;
 uint32_t numblocks;
 unsigned long *lockmap;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct mtd_oob_ops {
 unsigned int mode;
 size_t len;
 size_t retlen;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 size_t ooblen;
 size_t oobretlen;
 uint32_t ooboffs;
 uint8_t *datbuf;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint8_t *oobbuf;
};
#define MTD_MAX_OOBFREE_ENTRIES_LARGE 32
#define MTD_MAX_ECCPOS_ENTRIES_LARGE 640
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct nand_ecclayout {
 __u32 eccbytes;
 __u32 eccpos[MTD_MAX_ECCPOS_ENTRIES_LARGE];
 __u32 oobavail;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct nand_oobfree oobfree[MTD_MAX_OOBFREE_ENTRIES_LARGE];
};
struct module;
struct mtd_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u_char type;
 uint32_t flags;
 uint64_t size;
 uint32_t erasesize;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t writesize;
 uint32_t writebufsize;
 uint32_t oobsize;
 uint32_t oobavail;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int erasesize_shift;
 unsigned int writesize_shift;
 unsigned int erasesize_mask;
 unsigned int writesize_mask;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int bitflip_threshold;
 const char *name;
 int index;
 struct nand_ecclayout *ecclayout;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int ecc_step_size;
 unsigned int ecc_strength;
 int numeraseregions;
 struct mtd_erase_region_info *eraseregions;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*_erase) (struct mtd_info *mtd, struct erase_info *instr);
 int (*_point) (struct mtd_info *mtd, loff_t from, size_t len,
 size_t *retlen, void **virt, resource_size_t *phys);
 int (*_unpoint) (struct mtd_info *mtd, loff_t from, size_t len);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long (*_get_unmapped_area) (struct mtd_info *mtd,
 unsigned long len,
 unsigned long offset,
 unsigned long flags);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*_read) (struct mtd_info *mtd, loff_t from, size_t len,
 size_t *retlen, u_char *buf);
 int (*_write) (struct mtd_info *mtd, loff_t to, size_t len,
 size_t *retlen, const u_char *buf);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*_panic_write) (struct mtd_info *mtd, loff_t to, size_t len,
 size_t *retlen, const u_char *buf);
 int (*_read_oob) (struct mtd_info *mtd, loff_t from,
 struct mtd_oob_ops *ops);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*_write_oob) (struct mtd_info *mtd, loff_t to,
 struct mtd_oob_ops *ops);
 int (*_get_fact_prot_info) (struct mtd_info *mtd, struct otp_info *buf,
 size_t len);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*_read_fact_prot_reg) (struct mtd_info *mtd, loff_t from,
 size_t len, size_t *retlen, u_char *buf);
 int (*_get_user_prot_info) (struct mtd_info *mtd, struct otp_info *buf,
 size_t len);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*_read_user_prot_reg) (struct mtd_info *mtd, loff_t from,
 size_t len, size_t *retlen, u_char *buf);
 int (*_write_user_prot_reg) (struct mtd_info *mtd, loff_t to,
 size_t len, size_t *retlen, u_char *buf);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*_lock_user_prot_reg) (struct mtd_info *mtd, loff_t from,
 size_t len);
 int (*_writev) (struct mtd_info *mtd, const struct kvec *vecs,
 unsigned long count, loff_t to, size_t *retlen);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*_sync) (struct mtd_info *mtd);
 int (*_lock) (struct mtd_info *mtd, loff_t ofs, uint64_t len);
 int (*_unlock) (struct mtd_info *mtd, loff_t ofs, uint64_t len);
 int (*_is_locked) (struct mtd_info *mtd, loff_t ofs, uint64_t len);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*_block_isbad) (struct mtd_info *mtd, loff_t ofs);
 int (*_block_markbad) (struct mtd_info *mtd, loff_t ofs);
 int (*_suspend) (struct mtd_info *mtd);
 void (*_resume) (struct mtd_info *mtd);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*_get_device) (struct mtd_info *mtd);
 void (*_put_device) (struct mtd_info *mtd);
 struct backing_dev_info *backing_dev_info;
 struct notifier_block reboot_notifier;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct mtd_ecc_stats ecc_stats;
 int subpage_sft;
 void *priv;
 struct module *owner;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct device dev;
 int usecount;
};
struct mtd_partition;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct mtd_part_parser_data;
#define mtd_device_register(master, parts, nr_parts)   mtd_device_parse_register(master, NULL, NULL, parts, nr_parts)
struct mtd_notifier {
 void (*add)(struct mtd_info *mtd);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*remove)(struct mtd_info *mtd);
};
#endif
