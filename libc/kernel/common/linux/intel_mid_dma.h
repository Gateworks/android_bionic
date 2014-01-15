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
#ifndef __INTEL_MID_DMA_H__
#define __INTEL_MID_DMA_H__
#include <linux/dmaengine.h>
#define DMA_PREP_CIRCULAR_LIST (1 << 10)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum intel_mid_dma_mode {
 LNW_DMA_PER_TO_MEM = 0,
 LNW_DMA_MEM_TO_PER,
 LNW_DMA_MEM_TO_MEM,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum intel_mid_dma_hs_mode {
 LNW_DMA_HW_HS = 0,
 LNW_DMA_SW_HS = 1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum intel_mid_dma_msize {
 LNW_DMA_MSIZE_1 = 0x0,
 LNW_DMA_MSIZE_4 = 0x1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 LNW_DMA_MSIZE_8 = 0x2,
 LNW_DMA_MSIZE_16 = 0x3,
 LNW_DMA_MSIZE_32 = 0x4,
 LNW_DMA_MSIZE_64 = 0x5,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct intel_mid_dma_slave {
 enum intel_mid_dma_hs_mode hs_mode;
 enum intel_mid_dma_mode cfg_mode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int device_instance;
 struct dma_slave_config dma_slave;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
