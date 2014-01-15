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
#ifndef _DMA_ATTR_H
#define _DMA_ATTR_H
#include <linux/bitmap.h>
#include <linux/bitops.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/bug.h>
enum dma_attr {
 DMA_ATTR_WRITE_BARRIER,
 DMA_ATTR_WEAK_ORDERING,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DMA_ATTR_WRITE_COMBINE,
 DMA_ATTR_NON_CONSISTENT,
 DMA_ATTR_NO_KERNEL_MAPPING,
 DMA_ATTR_SKIP_CPU_SYNC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DMA_ATTR_FORCE_CONTIGUOUS,
 DMA_ATTR_MAX,
};
#define __DMA_ATTRS_LONGS BITS_TO_LONGS(DMA_ATTR_MAX)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct dma_attrs {
 unsigned long flags[__DMA_ATTRS_LONGS];
};
#define DEFINE_DMA_ATTRS(x)   struct dma_attrs x = {   .flags = { [0 ... __DMA_ATTRS_LONGS-1] = 0 },   }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
