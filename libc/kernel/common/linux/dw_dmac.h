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
#ifndef DW_DMAC_H
#define DW_DMAC_H
#include <linux/dmaengine.h>
struct dw_dma_slave {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct device *dma_dev;
 u32 cfg_hi;
 u32 cfg_lo;
 u8 src_master;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 dst_master;
};
struct dw_dma_platform_data {
 unsigned int nr_channels;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 bool is_private;
#define CHAN_ALLOCATION_ASCENDING 0
#define CHAN_ALLOCATION_DESCENDING 1
 unsigned char chan_allocation_order;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CHAN_PRIORITY_ASCENDING 0
#define CHAN_PRIORITY_DESCENDING 1
 unsigned char chan_priority;
 unsigned short block_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char nr_masters;
 unsigned char data_width[4];
};
enum dw_dma_msize {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DW_DMA_MSIZE_1,
 DW_DMA_MSIZE_4,
 DW_DMA_MSIZE_8,
 DW_DMA_MSIZE_16,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DW_DMA_MSIZE_32,
 DW_DMA_MSIZE_64,
 DW_DMA_MSIZE_128,
 DW_DMA_MSIZE_256,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define DWC_CFGH_FCMODE (1 << 0)
#define DWC_CFGH_FIFO_MODE (1 << 1)
#define DWC_CFGH_PROTCTL(x) ((x) << 2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DWC_CFGH_SRC_PER(x) ((x) << 7)
#define DWC_CFGH_DST_PER(x) ((x) << 11)
#define DWC_CFGL_LOCK_CH_XFER (0 << 12)
#define DWC_CFGL_LOCK_CH_BLOCK (1 << 12)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DWC_CFGL_LOCK_CH_XACT (2 << 12)
#define DWC_CFGL_LOCK_BUS_XFER (0 << 14)
#define DWC_CFGL_LOCK_BUS_BLOCK (1 << 14)
#define DWC_CFGL_LOCK_BUS_XACT (2 << 14)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DWC_CFGL_LOCK_CH (1 << 15)
#define DWC_CFGL_LOCK_BUS (1 << 16)
#define DWC_CFGL_HS_DST_POL (1 << 18)
#define DWC_CFGL_HS_SRC_POL (1 << 19)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct dw_cyclic_desc {
 struct dw_desc **desc;
 unsigned long periods;
 void (*period_callback)(void *param);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *period_callback_param;
};
struct dw_cyclic_desc *dw_dma_cyclic_prep(struct dma_chan *chan,
 dma_addr_t buf_addr, size_t buf_len, size_t period_len,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum dma_transfer_direction direction);
#endif
