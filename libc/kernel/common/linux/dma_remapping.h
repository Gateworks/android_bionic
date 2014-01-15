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
#ifndef _DMA_REMAPPING_H
#define _DMA_REMAPPING_H
#define VTD_PAGE_SHIFT (12)
#define VTD_PAGE_SIZE (1UL << VTD_PAGE_SHIFT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VTD_PAGE_MASK (((u64)-1) << VTD_PAGE_SHIFT)
#define VTD_PAGE_ALIGN(addr) (((addr) + VTD_PAGE_SIZE - 1) & VTD_PAGE_MASK)
#define VTD_STRIDE_SHIFT (9)
#define VTD_STRIDE_MASK (((u64)-1) << VTD_STRIDE_SHIFT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DMA_PTE_READ (1)
#define DMA_PTE_WRITE (2)
#define DMA_PTE_LARGE_PAGE (1 << 7)
#define DMA_PTE_SNP (1 << 11)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CONTEXT_TT_MULTI_LEVEL 0
#define CONTEXT_TT_DEV_IOTLB 1
#define CONTEXT_TT_PASS_THROUGH 2
struct intel_iommu;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct dmar_domain;
struct root_entry;
#define dmar_disabled (1)
#define intel_iommu_enabled (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
