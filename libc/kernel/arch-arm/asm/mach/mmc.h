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
#ifndef ASMARM_MACH_MMC_H
#define ASMARM_MACH_MMC_H
#include <linux/mmc/host.h>
#include <linux/mmc/card.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/mmc/sdio_func.h>
struct embedded_sdio_data {
 struct sdio_cis cis;
 struct sdio_cccr cccr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct sdio_embedded_func *funcs;
 int num_funcs;
};
struct mmc_platform_data {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int ocr_mask;
 int built_in;
 int card_present;
 u32 (*translate_vdd)(struct device *, unsigned int);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int (*status)(struct device *);
 struct embedded_sdio_data *embedded_sdio;
 int (*register_status_notify)(void (*callback)(int card_present, void *dev_id), void *dev_id);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
