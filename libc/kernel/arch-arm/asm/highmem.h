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
#ifndef _ASM_HIGHMEM_H
#define _ASM_HIGHMEM_H
#include <asm/kmap_types.h>
#define PKMAP_BASE (PAGE_OFFSET - PMD_SIZE)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LAST_PKMAP PTRS_PER_PTE
#define LAST_PKMAP_MASK (LAST_PKMAP - 1)
#define PKMAP_NR(virt) (((virt) - PKMAP_BASE) >> PAGE_SHIFT)
#define PKMAP_ADDR(nr) (PKMAP_BASE + ((nr) << PAGE_SHIFT))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define kmap_prot PAGE_KERNEL
#define flush_cache_kmaps()   do {   if (cache_is_vivt())   flush_cache_all();   } while (0)
#define ARCH_NEEDS_KMAP_HIGH_GET
#ifdef ARCH_NEEDS_KMAP_HIGH_GET
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#else
#endif
#endif
