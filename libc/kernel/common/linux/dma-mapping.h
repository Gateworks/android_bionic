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
#ifndef _LINUX_DMA_MAPPING_H
#define _LINUX_DMA_MAPPING_H
#include <linux/string.h>
#include <linux/device.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/err.h>
#include <linux/dma-attrs.h>
#include <linux/dma-direction.h>
#include <linux/scatterlist.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DMA_BIT_MASK(n) (((n) == 64) ? ~0ULL : ((1ULL<<(n))-1))
#define DMA_MASK_NONE 0x0ULL
#include <asm-generic/dma-mapping-broken.h>
#define DMA_MEMORY_MAP 0x01
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DMA_MEMORY_IO 0x02
#define DMA_MEMORY_INCLUDES_CHILDREN 0x04
#define DMA_MEMORY_EXCLUSIVE 0x08
#ifndef ARCH_HAS_DMA_DECLARE_COHERENT_MEMORY
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifdef ARCH_HAS_DMA_DECLARE_COHERENT_MEMORY
#else
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct dma_attrs;
#define dma_map_single_attrs(dev, cpu_addr, size, dir, attrs)   dma_map_single(dev, cpu_addr, size, dir)
#define dma_unmap_single_attrs(dev, dma_addr, size, dir, attrs)   dma_unmap_single(dev, dma_addr, size, dir)
#define dma_map_sg_attrs(dev, sgl, nents, dir, attrs)   dma_map_sg(dev, sgl, nents, dir)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define dma_unmap_sg_attrs(dev, sgl, nents, dir, attrs)   dma_unmap_sg(dev, sgl, nents, dir)
#define DEFINE_DMA_UNMAP_ADDR(ADDR_NAME)
#define DEFINE_DMA_UNMAP_LEN(LEN_NAME)
#define dma_unmap_addr(PTR, ADDR_NAME) (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define dma_unmap_addr_set(PTR, ADDR_NAME, VAL) do { } while (0)
#define dma_unmap_len(PTR, LEN_NAME) (0)
#define dma_unmap_len_set(PTR, LEN_NAME, VAL) do { } while (0)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
