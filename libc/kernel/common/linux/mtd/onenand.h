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
#ifndef __LINUX_MTD_ONENAND_H
#define __LINUX_MTD_ONENAND_H
#include <linux/spinlock.h>
#include <linux/completion.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/mtd/flashchip.h>
#include <linux/mtd/onenand_regs.h>
#include <linux/mtd/bbm.h>
#define MAX_DIES 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MAX_BUFFERRAM 2
struct onenand_bufferram {
 int blockpage;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct onenand_chip {
 void __iomem *base;
 unsigned dies;
 unsigned boundary[MAX_DIES];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 loff_t diesize[MAX_DIES];
 unsigned int chipsize;
 unsigned int device_id;
 unsigned int version_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int technology;
 unsigned int density_mask;
 unsigned int options;
 unsigned int erase_shift;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int page_shift;
 unsigned int page_mask;
 unsigned int writesize;
 unsigned int bufferram_index;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct onenand_bufferram bufferram[MAX_BUFFERRAM];
 int (*command)(struct mtd_info *mtd, int cmd, loff_t address, size_t len);
 int (*wait)(struct mtd_info *mtd, int state);
 int (*bbt_wait)(struct mtd_info *mtd, int state);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*unlock_all)(struct mtd_info *mtd);
 int (*read_bufferram)(struct mtd_info *mtd, int area,
 unsigned char *buffer, int offset, size_t count);
 int (*write_bufferram)(struct mtd_info *mtd, int area,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const unsigned char *buffer, int offset, size_t count);
 unsigned short (*read_word)(void __iomem *addr);
 void (*write_word)(unsigned short value, void __iomem *addr);
 void (*mmcontrol)(struct mtd_info *mtd, int sync_read);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*chip_probe)(struct mtd_info *mtd);
 int (*block_markbad)(struct mtd_info *mtd, loff_t ofs);
 int (*scan_bbt)(struct mtd_info *mtd);
 int (*enable)(struct mtd_info *mtd);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*disable)(struct mtd_info *mtd);
 struct completion complete;
 int irq;
 spinlock_t chip_lock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 wait_queue_head_t wq;
 flstate_t state;
 unsigned char *page_buf;
 unsigned char *oob_buf;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int subpagesize;
 struct nand_ecclayout *ecclayout;
 void *bbm;
 void *priv;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int ongoing;
};
#define ONENAND_PAGES_PER_BLOCK (1<<6)
#define ONENAND_CURRENT_BUFFERRAM(this) (this->bufferram_index)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ONENAND_NEXT_BUFFERRAM(this) (this->bufferram_index ^ 1)
#define ONENAND_SET_NEXT_BUFFERRAM(this) (this->bufferram_index ^= 1)
#define ONENAND_SET_PREV_BUFFERRAM(this) (this->bufferram_index ^= 1)
#define ONENAND_SET_BUFFERRAM0(this) (this->bufferram_index = 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ONENAND_SET_BUFFERRAM1(this) (this->bufferram_index = 1)
#define FLEXONENAND(this)   (this->device_id & DEVICE_IS_FLEXONENAND)
#define ONENAND_GET_SYS_CFG1(this)   (this->read_word(this->base + ONENAND_REG_SYS_CFG1))
#define ONENAND_SET_SYS_CFG1(v, this)   (this->write_word(v, this->base + ONENAND_REG_SYS_CFG1))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ONENAND_IS_DDP(this)   (this->device_id & ONENAND_DEVICE_IS_DDP)
#define ONENAND_IS_MLC(this)   (this->technology & ONENAND_TECHNOLOGY_IS_MLC)
#define ONENAND_IS_2PLANE(this) (0)
#define ONENAND_IS_CACHE_PROGRAM(this)   (this->options & ONENAND_HAS_CACHE_PROGRAM)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ONENAND_IS_NOP_1(this)   (this->options & ONENAND_HAS_NOP_1)
#define ONENAND_CHECK_BYTE_ACCESS(addr) (addr & 0x1)
#define ONENAND_HAS_CONT_LOCK (0x0001)
#define ONENAND_HAS_UNLOCK_ALL (0x0002)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ONENAND_HAS_2PLANE (0x0004)
#define ONENAND_HAS_4KB_PAGE (0x0008)
#define ONENAND_HAS_CACHE_PROGRAM (0x0010)
#define ONENAND_HAS_NOP_1 (0x0020)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ONENAND_SKIP_UNLOCK_CHECK (0x0100)
#define ONENAND_PAGEBUF_ALLOC (0x1000)
#define ONENAND_OOBBUF_ALLOC (0x2000)
#define ONENAND_SKIP_INITIAL_UNLOCKING (0x4000)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ONENAND_IS_4KB_PAGE(this)   (this->options & ONENAND_HAS_4KB_PAGE)
#define ONENAND_MFR_SAMSUNG 0xec
#define ONENAND_MFR_NUMONYX 0x20
struct onenand_manufacturers {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int id;
 char *name;
};
struct mtd_partition;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct onenand_platform_data {
 void (*mmcontrol)(struct mtd_info *mtd, int sync_read);
 int (*read_bufferram)(struct mtd_info *mtd, int area,
 unsigned char *buffer, int offset, size_t count);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct mtd_partition *parts;
 unsigned int nr_parts;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
