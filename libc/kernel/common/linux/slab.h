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
#ifndef _LINUX_SLAB_H
#define _LINUX_SLAB_H
#include <linux/gfp.h>
#include <linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/workqueue.h>
#define SLAB_DEBUG_FREE 0x00000100UL
#define SLAB_RED_ZONE 0x00000400UL
#define SLAB_POISON 0x00000800UL
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SLAB_HWCACHE_ALIGN 0x00002000UL
#define SLAB_CACHE_DMA 0x00004000UL
#define SLAB_STORE_USER 0x00010000UL
#define SLAB_PANIC 0x00040000UL
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SLAB_DESTROY_BY_RCU 0x00080000UL
#define SLAB_MEM_SPREAD 0x00100000UL
#define SLAB_TRACE 0x00200000UL
#define SLAB_DEBUG_OBJECTS 0x00000000UL
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SLAB_NOLEAKTRACE 0x00800000UL
#define SLAB_NOTRACK 0x00000000UL
#define SLAB_FAILSLAB 0x00000000UL
#define SLAB_RECLAIM_ACCOUNT 0x00020000UL
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SLAB_TEMPORARY SLAB_RECLAIM_ACCOUNT
#define ZERO_SIZE_PTR ((void *)16)
#define ZERO_OR_NULL_PTR(x) ((unsigned long)(x) <=   (unsigned long)ZERO_SIZE_PTR)
struct mem_cgroup;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#if defined(ARCH_DMA_MINALIGN) && ARCH_DMA_MINALIGN > 8
#define ARCH_KMALLOC_MINALIGN ARCH_DMA_MINALIGN
#define KMALLOC_MIN_SIZE ARCH_DMA_MINALIGN
#else
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ARCH_KMALLOC_MINALIGN __alignof__(unsigned long long)
#endif
#define KMALLOC_SHIFT_HIGH (PAGE_SHIFT + 1)
#define KMALLOC_SHIFT_MAX (MAX_ORDER + PAGE_SHIFT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef KMALLOC_SHIFT_LOW
#define KMALLOC_SHIFT_LOW 3
#endif
#define KMALLOC_MAX_SIZE (1UL << KMALLOC_SHIFT_MAX)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KMALLOC_MAX_CACHE_SIZE (1UL << KMALLOC_SHIFT_HIGH)
#define KMALLOC_MAX_ORDER (KMALLOC_SHIFT_MAX - PAGE_SHIFT)
#ifndef KMALLOC_MIN_SIZE
#define KMALLOC_MIN_SIZE (1 << KMALLOC_SHIFT_LOW)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef ARCH_SLAB_MINALIGN
#define ARCH_SLAB_MINALIGN __alignof__(unsigned long long)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct memcg_cache_params {
 union {
 struct kmem_cache *memcg_caches[0];
 struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct mem_cgroup *memcg;
 struct kmem_cache *root_cache;
 atomic_t nr_pages;
 };
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 };
};
struct seq_file;
#define kmalloc_track_caller(size, flags)   __kmalloc(size, flags)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define kmalloc_node_track_caller(size, flags, node)   kmalloc_track_caller(size, flags)
#endif
