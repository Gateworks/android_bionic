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
#ifndef _IOVA_H_
#define _IOVA_H_
#include <linux/types.h>
#include <linux/kernel.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/dma-mapping.h>
#define IOVA_START_PFN (1)
struct iova {
 unsigned long pfn_hi;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long pfn_lo;
};
struct iova_domain {
 spinlock_t iova_rbtree_lock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long dma_32bit_pfn;
};
struct iova *alloc_iova_mem(void);
struct iova *alloc_iova(struct iova_domain *iovad, unsigned long size,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long limit_pfn,
 bool size_aligned);
struct iova *reserve_iova(struct iova_domain *iovad, unsigned long pfn_lo,
 unsigned long pfn_hi);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct iova *find_iova(struct iova_domain *iovad, unsigned long pfn);
#endif
