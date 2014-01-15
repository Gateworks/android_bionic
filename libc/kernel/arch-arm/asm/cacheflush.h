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
#ifndef _ASMARM_CACHEFLUSH_H
#define _ASMARM_CACHEFLUSH_H
#include <linux/mm.h>
#include <asm/glue-cache.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <asm/shmparam.h>
#include <asm/cachetype.h>
#include <asm/outercache.h>
#include <asm/rodata.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CACHE_COLOUR(vaddr) ((vaddr & (SHMLBA - 1)) >> PAGE_SHIFT)
#define PG_dcache_clean PG_arch_1
struct cpu_cache_fns {
 void (*flush_icache_all)(void);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*flush_kern_all)(void);
 void (*flush_kern_louis)(void);
 void (*flush_user_all)(void);
 void (*flush_user_range)(unsigned long, unsigned long, unsigned int);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*coherent_kern_range)(unsigned long, unsigned long);
 int (*coherent_user_range)(unsigned long, unsigned long);
 void (*flush_kern_dcache_area)(void *, size_t);
 void (*dma_map_area)(const void *, size_t, int);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*dma_unmap_area)(const void *, size_t, int);
 void (*dma_flush_range)(const void *, const void *);
};
#ifdef MULTI_CACHE
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __cpuc_flush_icache_all cpu_cache.flush_icache_all
#define __cpuc_flush_kern_all cpu_cache.flush_kern_all
#define __cpuc_flush_kern_louis cpu_cache.flush_kern_louis
#define __cpuc_flush_user_all cpu_cache.flush_user_all
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __cpuc_flush_user_range cpu_cache.flush_user_range
#define __cpuc_coherent_kern_range cpu_cache.coherent_kern_range
#define __cpuc_coherent_user_range cpu_cache.coherent_user_range
#define __cpuc_flush_dcache_area cpu_cache.flush_kern_dcache_area
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define dmac_map_area cpu_cache.dma_map_area
#define dmac_unmap_area cpu_cache.dma_unmap_area
#define dmac_flush_range cpu_cache.dma_flush_range
#else
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define copy_from_user_page(vma, page, vaddr, dst, src, len)   do {   memcpy(dst, src, len);   } while (0)
#define __flush_icache_all_generic()   asm("mcr	p15, 0, %0, c7, c5, 0"   : : "r" (0));
#define __flush_icache_all_v7_smp()   asm("mcr	p15, 0, %0, c7, c1, 0"   : : "r" (0));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#if __LINUX_ARM_ARCH__ >= (7 && defined(CONFIG_SMP))
#define __flush_icache_preferred __flush_icache_all_v7_smp
#elif __LINUX_ARM_ARCH__ == 6 && defined(CONFIG_ARM_ERRATA_411920)
#define __flush_icache_preferred __cpuc_flush_icache_all
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#else
#define __flush_icache_preferred __flush_icache_all_generic
#endif
#define flush_cache_louis() __cpuc_flush_kern_louis()
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define flush_cache_all() __cpuc_flush_kern_all()
#define flush_cache_mm(mm)   vivt_flush_cache_mm(mm)
#define flush_cache_range(vma,start,end)   vivt_flush_cache_range(vma,start,end)
#define flush_cache_page(vma,addr,pfn)   vivt_flush_cache_page(vma,addr,pfn)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define flush_cache_dup_mm(mm) flush_cache_mm(mm)
#define flush_cache_user_range(start,end)   __cpuc_coherent_user_range((start) & PAGE_MASK, PAGE_ALIGN(end))
#define flush_icache_range(s,e) __cpuc_coherent_kern_range(s,e)
#define clean_dcache_area(start,size) cpu_dcache_clean_area(start, size)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ARCH_IMPLEMENTS_FLUSH_DCACHE_PAGE 1
#define ARCH_HAS_FLUSH_ANON_PAGE
#define ARCH_HAS_FLUSH_KERNEL_DCACHE_PAGE
#define flush_dcache_mmap_lock(mapping)   spin_lock_irq(&(mapping)->tree_lock)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define flush_dcache_mmap_unlock(mapping)   spin_unlock_irq(&(mapping)->tree_lock)
#define flush_icache_user_range(vma,page,addr,len)   flush_dcache_page(page)
#define flush_icache_page(vma,page) do { } while (0)
#define __CACHE_WRITEBACK_ORDER 6
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __CACHE_WRITEBACK_GRANULE (1 << __CACHE_WRITEBACK_ORDER)
#define __cpuc_clean_dcache_area __cpuc_flush_dcache_area
#define sync_cache_w(ptr) __sync_cache_range_w(ptr, sizeof *(ptr))
#define sync_cache_r(ptr) __sync_cache_range_r(ptr, sizeof *(ptr))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
