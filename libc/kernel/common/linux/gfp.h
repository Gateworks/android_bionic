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
#ifndef __LINUX_GFP_H
#define __LINUX_GFP_H
#include <linux/mmzone.h>
#include <linux/stddef.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/linkage.h>
#include <linux/topology.h>
#include <linux/mmdebug.h>
struct vm_area_struct;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ___GFP_DMA 0x01u
#define ___GFP_HIGHMEM 0x02u
#define ___GFP_DMA32 0x04u
#define ___GFP_MOVABLE 0x08u
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ___GFP_WAIT 0x10u
#define ___GFP_HIGH 0x20u
#define ___GFP_IO 0x40u
#define ___GFP_FS 0x80u
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ___GFP_COLD 0x100u
#define ___GFP_NOWARN 0x200u
#define ___GFP_REPEAT 0x400u
#define ___GFP_NOFAIL 0x800u
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ___GFP_NORETRY 0x1000u
#define ___GFP_MEMALLOC 0x2000u
#define ___GFP_COMP 0x4000u
#define ___GFP_ZERO 0x8000u
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ___GFP_NOMEMALLOC 0x10000u
#define ___GFP_HARDWALL 0x20000u
#define ___GFP_THISNODE 0x40000u
#define ___GFP_RECLAIMABLE 0x80000u
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ___GFP_KMEMCG 0x100000u
#define ___GFP_NOTRACK 0x200000u
#define ___GFP_NO_KSWAPD 0x400000u
#define ___GFP_OTHER_NODE 0x800000u
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ___GFP_WRITE 0x1000000u
#define __GFP_DMA ((__force gfp_t)___GFP_DMA)
#define __GFP_HIGHMEM ((__force gfp_t)___GFP_HIGHMEM)
#define __GFP_DMA32 ((__force gfp_t)___GFP_DMA32)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __GFP_MOVABLE ((__force gfp_t)___GFP_MOVABLE)
#define GFP_ZONEMASK (__GFP_DMA|__GFP_HIGHMEM|__GFP_DMA32|__GFP_MOVABLE)
#define __GFP_WAIT ((__force gfp_t)___GFP_WAIT)
#define __GFP_HIGH ((__force gfp_t)___GFP_HIGH)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __GFP_IO ((__force gfp_t)___GFP_IO)
#define __GFP_FS ((__force gfp_t)___GFP_FS)
#define __GFP_COLD ((__force gfp_t)___GFP_COLD)
#define __GFP_NOWARN ((__force gfp_t)___GFP_NOWARN)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __GFP_REPEAT ((__force gfp_t)___GFP_REPEAT)
#define __GFP_NOFAIL ((__force gfp_t)___GFP_NOFAIL)
#define __GFP_NORETRY ((__force gfp_t)___GFP_NORETRY)
#define __GFP_MEMALLOC ((__force gfp_t)___GFP_MEMALLOC)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __GFP_COMP ((__force gfp_t)___GFP_COMP)
#define __GFP_ZERO ((__force gfp_t)___GFP_ZERO)
#define __GFP_NOMEMALLOC ((__force gfp_t)___GFP_NOMEMALLOC)
#define __GFP_HARDWALL ((__force gfp_t)___GFP_HARDWALL)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __GFP_THISNODE ((__force gfp_t)___GFP_THISNODE)
#define __GFP_RECLAIMABLE ((__force gfp_t)___GFP_RECLAIMABLE)
#define __GFP_NOTRACK ((__force gfp_t)___GFP_NOTRACK)
#define __GFP_NO_KSWAPD ((__force gfp_t)___GFP_NO_KSWAPD)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __GFP_OTHER_NODE ((__force gfp_t)___GFP_OTHER_NODE)
#define __GFP_KMEMCG ((__force gfp_t)___GFP_KMEMCG)
#define __GFP_WRITE ((__force gfp_t)___GFP_WRITE)
#define __GFP_NOTRACK_FALSE_POSITIVE (__GFP_NOTRACK)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __GFP_BITS_SHIFT 25
#define __GFP_BITS_MASK ((__force gfp_t)((1 << __GFP_BITS_SHIFT) - 1))
#define GFP_NOWAIT (GFP_ATOMIC & ~__GFP_HIGH)
#define GFP_ATOMIC (__GFP_HIGH)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFP_NOIO (__GFP_WAIT)
#define GFP_NOFS (__GFP_WAIT | __GFP_IO)
#define GFP_KERNEL (__GFP_WAIT | __GFP_IO | __GFP_FS)
#define GFP_TEMPORARY (__GFP_WAIT | __GFP_IO | __GFP_FS |   __GFP_RECLAIMABLE)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFP_USER (__GFP_WAIT | __GFP_IO | __GFP_FS | __GFP_HARDWALL)
#define GFP_HIGHUSER (__GFP_WAIT | __GFP_IO | __GFP_FS | __GFP_HARDWALL |   __GFP_HIGHMEM)
#define GFP_HIGHUSER_MOVABLE (__GFP_WAIT | __GFP_IO | __GFP_FS |   __GFP_HARDWALL | __GFP_HIGHMEM |   __GFP_MOVABLE)
#define GFP_IOFS (__GFP_IO | __GFP_FS)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFP_TRANSHUGE (GFP_HIGHUSER_MOVABLE | __GFP_COMP |   __GFP_NOMEMALLOC | __GFP_NORETRY | __GFP_NOWARN |   __GFP_NO_KSWAPD)
#define GFP_THISNODE ((__force gfp_t)0)
#define GFP_MOVABLE_MASK (__GFP_RECLAIMABLE|__GFP_MOVABLE)
#define GFP_RECLAIM_MASK (__GFP_WAIT|__GFP_HIGH|__GFP_IO|__GFP_FS|  __GFP_NOWARN|__GFP_REPEAT|__GFP_NOFAIL|  __GFP_NORETRY|__GFP_MEMALLOC|__GFP_NOMEMALLOC)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFP_BOOT_MASK (__GFP_BITS_MASK & ~(__GFP_WAIT|__GFP_IO|__GFP_FS))
#define GFP_CONSTRAINT_MASK (__GFP_HARDWALL|__GFP_THISNODE)
#define GFP_SLAB_BUG_MASK (__GFP_DMA32|__GFP_HIGHMEM|~__GFP_BITS_MASK)
#define GFP_DMA __GFP_DMA
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFP_DMA32 __GFP_DMA32
#define OPT_ZONE_HIGHMEM ZONE_NORMAL
#define OPT_ZONE_DMA ZONE_NORMAL
#define OPT_ZONE_DMA32 ZONE_NORMAL
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#if 16 * (ZONES_SHIFT > BITS_PER_LONG)
#error ZONES_SHIFT too large to create GFP_ZONE_TABLE integer
#endif
#define GFP_ZONE_TABLE (   (ZONE_NORMAL << 0 * ZONES_SHIFT)   | (OPT_ZONE_DMA << ___GFP_DMA * ZONES_SHIFT)   | (OPT_ZONE_HIGHMEM << ___GFP_HIGHMEM * ZONES_SHIFT)   | (OPT_ZONE_DMA32 << ___GFP_DMA32 * ZONES_SHIFT)   | (ZONE_NORMAL << ___GFP_MOVABLE * ZONES_SHIFT)   | (OPT_ZONE_DMA << (___GFP_MOVABLE | ___GFP_DMA) * ZONES_SHIFT)   | (ZONE_MOVABLE << (___GFP_MOVABLE | ___GFP_HIGHMEM) * ZONES_SHIFT)   | (OPT_ZONE_DMA32 << (___GFP_MOVABLE | ___GFP_DMA32) * ZONES_SHIFT)  )
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFP_ZONE_BAD (   1 << (___GFP_DMA | ___GFP_HIGHMEM)   | 1 << (___GFP_DMA | ___GFP_DMA32)   | 1 << (___GFP_DMA32 | ___GFP_HIGHMEM)   | 1 << (___GFP_DMA | ___GFP_DMA32 | ___GFP_HIGHMEM)   | 1 << (___GFP_MOVABLE | ___GFP_HIGHMEM | ___GFP_DMA)   | 1 << (___GFP_MOVABLE | ___GFP_DMA32 | ___GFP_DMA)   | 1 << (___GFP_MOVABLE | ___GFP_DMA32 | ___GFP_HIGHMEM)   | 1 << (___GFP_MOVABLE | ___GFP_DMA32 | ___GFP_DMA | ___GFP_HIGHMEM)  )
#ifndef HAVE_ARCH_FREE_PAGE
#endif
#ifndef HAVE_ARCH_ALLOC_PAGE
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
struct page *
__alloc_pages_nodemask(gfp_t gfp_mask, unsigned int order,
 struct zonelist *zonelist, nodemask_t *nodemask);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define alloc_pages(gfp_mask, order)   alloc_pages_node(numa_node_id(), gfp_mask, order)
#define alloc_pages_vma(gfp_mask, order, vma, addr, node)   alloc_pages(gfp_mask, order)
#define alloc_page(gfp_mask) alloc_pages(gfp_mask, 0)
#define alloc_page_vma(gfp_mask, vma, addr)   alloc_pages_vma(gfp_mask, 0, vma, addr, numa_node_id())
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define alloc_page_vma_node(gfp_mask, vma, addr, node)   alloc_pages_vma(gfp_mask, 0, vma, addr, node)
#define __get_free_page(gfp_mask)   __get_free_pages((gfp_mask), 0)
#define __get_dma_pages(gfp_mask, order)   __get_free_pages((gfp_mask) | GFP_DMA, (order))
#define __free_page(page) __free_pages((page), 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define free_page(addr) free_pages((addr), 0)
#endif
