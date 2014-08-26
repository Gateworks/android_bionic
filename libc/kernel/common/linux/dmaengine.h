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
#ifndef LINUX_DMAENGINE_H
#define LINUX_DMAENGINE_H
#include <linux/device.h>
#include <linux/uio.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/bug.h>
#include <linux/scatterlist.h>
#include <linux/bitmap.h>
#include <linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <asm/page.h>
typedef s32 dma_cookie_t;
#define DMA_MIN_COOKIE 1
#define DMA_MAX_COOKIE INT_MAX
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define dma_submit_error(cookie) ((cookie) < 0 ? 1 : 0)
enum dma_status {
 DMA_SUCCESS,
 DMA_IN_PROGRESS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DMA_PAUSED,
 DMA_ERROR,
};
enum dma_transaction_type {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DMA_MEMCPY,
 DMA_XOR,
 DMA_PQ,
 DMA_XOR_VAL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DMA_PQ_VAL,
 DMA_MEMSET,
 DMA_INTERRUPT,
 DMA_SG,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DMA_PRIVATE,
 DMA_ASYNC_TX,
 DMA_SLAVE,
 DMA_CYCLIC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DMA_INTERLEAVE,
 DMA_TX_TYPE_END,
};
enum dma_transfer_direction {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DMA_MEM_TO_MEM,
 DMA_MEM_TO_DEV,
 DMA_DEV_TO_MEM,
 DMA_DEV_TO_DEV,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DMA_TRANS_NONE,
};
struct data_chunk {
 size_t size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 size_t icg;
};
enum dma_ctrl_flags {
 DMA_PREP_INTERRUPT = (1 << 0),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DMA_CTRL_ACK = (1 << 1),
 DMA_COMPL_SKIP_SRC_UNMAP = (1 << 2),
 DMA_COMPL_SKIP_DEST_UNMAP = (1 << 3),
 DMA_COMPL_SRC_UNMAP_SINGLE = (1 << 4),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DMA_COMPL_DEST_UNMAP_SINGLE = (1 << 5),
 DMA_PREP_PQ_DISABLE_P = (1 << 6),
 DMA_PREP_PQ_DISABLE_Q = (1 << 7),
 DMA_PREP_CONTINUE = (1 << 8),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DMA_PREP_FENCE = (1 << 9),
};
enum dma_ctrl_cmd {
 DMA_TERMINATE_ALL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DMA_PAUSE,
 DMA_RESUME,
 DMA_SLAVE_CONFIG,
 FSLDMA_EXTERNAL_START,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum sum_check_bits {
 SUM_CHECK_P = 0,
 SUM_CHECK_Q = 1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum sum_check_flags {
 SUM_CHECK_P_RESULT = (1 << SUM_CHECK_P),
 SUM_CHECK_Q_RESULT = (1 << SUM_CHECK_Q),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct dma_chan_percpu {
 unsigned long memcpy_count;
 unsigned long bytes_transferred;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
