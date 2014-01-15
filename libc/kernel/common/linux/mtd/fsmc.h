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
#ifndef __MTD_FSMC_H
#define __MTD_FSMC_H
#include <linux/io.h>
#include <linux/platform_device.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/mtd/physmap.h>
#include <linux/types.h>
#include <linux/mtd/partitions.h>
#include <asm/param.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FSMC_NAND_BW8 1
#define FSMC_NAND_BW16 2
#define FSMC_MAX_NOR_BANKS 4
#define FSMC_MAX_NAND_BANKS 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FSMC_FLASH_WIDTH8 1
#define FSMC_FLASH_WIDTH16 2
#define CTRL 0x0
#define BANK_ENABLE (1 << 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MUXED (1 << 1)
#define NOR_DEV (2 << 2)
#define WIDTH_8 (0 << 4)
#define WIDTH_16 (1 << 4)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RSTPWRDWN (1 << 6)
#define WPROT (1 << 7)
#define WRT_ENABLE (1 << 12)
#define WAIT_ENB (1 << 13)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CTRL_TIM 0x4
#define FSMC_NOR_BANK_SZ 0x8
#define FSMC_NOR_REG_SIZE 0x40
#define FSMC_NOR_REG(base, bank, reg) (base +   FSMC_NOR_BANK_SZ * (bank) +   reg)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PC 0x00
#define FSMC_RESET (1 << 0)
#define FSMC_WAITON (1 << 1)
#define FSMC_ENABLE (1 << 2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FSMC_DEVTYPE_NAND (1 << 3)
#define FSMC_DEVWID_8 (0 << 4)
#define FSMC_DEVWID_16 (1 << 4)
#define FSMC_ECCEN (1 << 6)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FSMC_ECCPLEN_512 (0 << 7)
#define FSMC_ECCPLEN_256 (1 << 7)
#define FSMC_TCLR_1 (1)
#define FSMC_TCLR_SHIFT (9)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FSMC_TCLR_MASK (0xF)
#define FSMC_TAR_1 (1)
#define FSMC_TAR_SHIFT (13)
#define FSMC_TAR_MASK (0xF)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STS 0x04
#define FSMC_CODE_RDY (1 << 15)
#define COMM 0x08
#define FSMC_TSET_0 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FSMC_TSET_SHIFT 0
#define FSMC_TSET_MASK 0xFF
#define FSMC_TWAIT_6 6
#define FSMC_TWAIT_SHIFT 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FSMC_TWAIT_MASK 0xFF
#define FSMC_THOLD_4 4
#define FSMC_THOLD_SHIFT 16
#define FSMC_THOLD_MASK 0xFF
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FSMC_THIZ_1 1
#define FSMC_THIZ_SHIFT 24
#define FSMC_THIZ_MASK 0xFF
#define ATTRIB 0x0C
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IOATA 0x10
#define ECC1 0x14
#define ECC2 0x18
#define ECC3 0x1C
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FSMC_NAND_BANK_SZ 0x20
#define FSMC_NAND_REG(base, bank, reg) (base + FSMC_NOR_REG_SIZE +   (FSMC_NAND_BANK_SZ * (bank)) +   reg)
#define FSMC_BUSY_WAIT_TIMEOUT (1 * HZ)
#define MAX_ECCPLACE_ENTRIES 32
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct fsmc_nand_eccplace {
 uint8_t offset;
 uint8_t length;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct fsmc_eccplace {
 struct fsmc_nand_eccplace eccplace[MAX_ECCPLACE_ENTRIES];
};
struct fsmc_nand_timings {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint8_t tclr;
 uint8_t tar;
 uint8_t thiz;
 uint8_t thold;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint8_t twait;
 uint8_t tset;
};
enum access_mode {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 USE_DMA_ACCESS = 1,
 USE_WORD_ACCESS,
};
struct fsmc_nand_platform_data {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct fsmc_nand_timings *nand_timings;
 struct mtd_partition *partitions;
 unsigned int nr_partitions;
 unsigned int options;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int width;
 unsigned int bank;
 enum access_mode mode;
 void (*select_bank)(uint32_t bank, uint32_t busw);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *read_dma_priv;
 void *write_dma_priv;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
