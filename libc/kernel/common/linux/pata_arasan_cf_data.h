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
#ifndef _PATA_ARASAN_CF_DATA_H
#define _PATA_ARASAN_CF_DATA_H
#include <linux/platform_device.h>
struct arasan_cf_pdata {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 cf_if_clk;
#define CF_IF_CLK_100M (0x0)
#define CF_IF_CLK_75M (0x1)
#define CF_IF_CLK_66M (0x2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CF_IF_CLK_50M (0x3)
#define CF_IF_CLK_40M (0x4)
#define CF_IF_CLK_33M (0x5)
#define CF_IF_CLK_25M (0x6)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CF_IF_CLK_125M (0x7)
#define CF_IF_CLK_150M (0x8)
#define CF_IF_CLK_166M (0x9)
#define CF_IF_CLK_200M (0xA)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 quirk;
#define CF_BROKEN_PIO (1)
#define CF_BROKEN_MWDMA (1 << 1)
#define CF_BROKEN_UDMA (1 << 2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
