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
struct dma_map_ops {
 void* (*alloc)(struct device *dev, size_t size,
 dma_addr_t *dma_handle, gfp_t gfp,
 struct dma_attrs *attrs);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*free)(struct device *dev, size_t size,
 void *vaddr, dma_addr_t dma_handle,
 struct dma_attrs *attrs);
 int (*mmap)(struct device *, struct vm_area_struct *,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *, dma_addr_t, size_t, struct dma_attrs *attrs);
 int (*get_sgtable)(struct device *dev, struct sg_table *sgt, void *,
 dma_addr_t, size_t, struct dma_attrs *attrs);
 dma_addr_t (*map_page)(struct device *dev, struct page *page,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long offset, size_t size,
 enum dma_data_direction dir,
 struct dma_attrs *attrs);
 void (*unmap_page)(struct device *dev, dma_addr_t dma_handle,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 size_t size, enum dma_data_direction dir,
 struct dma_attrs *attrs);
 int (*map_sg)(struct device *dev, struct scatterlist *sg,
 int nents, enum dma_data_direction dir,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct dma_attrs *attrs);
 void (*unmap_sg)(struct device *dev,
 struct scatterlist *sg, int nents,
 enum dma_data_direction dir,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct dma_attrs *attrs);
 void (*sync_single_for_cpu)(struct device *dev,
 dma_addr_t dma_handle, size_t size,
 enum dma_data_direction dir);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*sync_single_for_device)(struct device *dev,
 dma_addr_t dma_handle, size_t size,
 enum dma_data_direction dir);
 void (*sync_sg_for_cpu)(struct device *dev,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct scatterlist *sg, int nents,
 enum dma_data_direction dir);
 void (*sync_sg_for_device)(struct device *dev,
 struct scatterlist *sg, int nents,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum dma_data_direction dir);
 int (*mapping_error)(struct device *dev, dma_addr_t dma_addr);
 int (*dma_supported)(struct device *dev, u64 mask);
 int (*set_dma_mask)(struct device *dev, u64 mask);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifdef ARCH_HAS_DMA_GET_REQUIRED_MASK
 u64 (*get_required_mask)(struct device *dev);
#endif
 int is_phys;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define DMA_BIT_MASK(n) (((n) == 64) ? ~0ULL : ((1ULL<<(n))-1))
#define DMA_MASK_NONE 0x0ULL
#include <asm-generic/dma-mapping-broken.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DMA_MEMORY_MAP 0x01
#define DMA_MEMORY_IO 0x02
#define DMA_MEMORY_INCLUDES_CHILDREN 0x04
#define DMA_MEMORY_EXCLUSIVE 0x08
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef ARCH_HAS_DMA_DECLARE_COHERENT_MEMORY
#endif
#ifdef ARCH_HAS_DMA_DECLARE_COHERENT_MEMORY
#else
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
struct dma_attrs;
#define dma_map_single_attrs(dev, cpu_addr, size, dir, attrs)   dma_map_single(dev, cpu_addr, size, dir)
#define dma_unmap_single_attrs(dev, dma_addr, size, dir, attrs)   dma_unmap_single(dev, dma_addr, size, dir)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define dma_map_sg_attrs(dev, sgl, nents, dir, attrs)   dma_map_sg(dev, sgl, nents, dir)
#define dma_unmap_sg_attrs(dev, sgl, nents, dir, attrs)   dma_unmap_sg(dev, sgl, nents, dir)
#define DEFINE_DMA_UNMAP_ADDR(ADDR_NAME)
#define DEFINE_DMA_UNMAP_LEN(LEN_NAME)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define dma_unmap_addr(PTR, ADDR_NAME) (0)
#define dma_unmap_addr_set(PTR, ADDR_NAME, VAL) do { } while (0)
#define dma_unmap_len(PTR, LEN_NAME) (0)
#define dma_unmap_len_set(PTR, LEN_NAME, VAL) do { } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
