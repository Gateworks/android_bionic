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
#ifndef __LINUX_MTD_QINFO_H
#define __LINUX_MTD_QINFO_H
#include <linux/mtd/map.h>
#include <linux/wait.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/spinlock.h>
#include <linux/delay.h>
#include <linux/mtd/mtd.h>
#include <linux/mtd/flashchip.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/mtd/partitions.h>
struct lpddr_private {
 uint16_t ManufactId;
 uint16_t DevId;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct qinfo_chip *qinfo;
 int numchips;
 unsigned long chipshift;
 struct flchip chips[0];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct qinfo_query_info {
 uint8_t major;
 uint8_t minor;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char *id_str;
 char *desc;
};
struct qinfo_chip {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint16_t DevSizeShift;
 uint16_t BufSizeShift;
 uint16_t TotalBlocksNum;
 uint16_t UniformBlockSizeShift;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint16_t HWPartsNum;
 uint16_t SuspEraseSupp;
 uint16_t SingleWordProgTime;
 uint16_t ProgBufferTime;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint16_t BlockEraseTime;
};
#define LPDDR_MFR_ANY 0xffff
#define LPDDR_ID_ANY 0xffff
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NUMONYX_MFGR_ID 0x0089
#define R18_DEVICE_ID_1G 0x893c
#define CMD(x) lpddr_build_cmd(x, map)
#define CMDVAL(cmd) cmd.x[0]
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct mtd_info *lpddr_cmdset(struct map_info *);
#endif
