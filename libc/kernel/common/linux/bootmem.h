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
#ifndef _LINUX_BOOTMEM_H
#define _LINUX_BOOTMEM_H
#include <linux/mmzone.h>
#include <asm/dma.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef struct bootmem_data {
 unsigned long node_min_pfn;
 unsigned long node_low_pfn;
 void *node_bootmem_map;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long last_end_off;
 unsigned long hint_idx;
} bootmem_data_t;
#define BOOTMEM_DEFAULT 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BOOTMEM_EXCLUSIVE (1<<0)
#define BOOTMEM_LOW_LIMIT __pa(MAX_DMA_ADDRESS)
#define alloc_bootmem(x)   __alloc_bootmem(x, SMP_CACHE_BYTES, BOOTMEM_LOW_LIMIT)
#define alloc_bootmem_align(x, align)   __alloc_bootmem(x, align, BOOTMEM_LOW_LIMIT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define alloc_bootmem_nopanic(x)   __alloc_bootmem_nopanic(x, SMP_CACHE_BYTES, BOOTMEM_LOW_LIMIT)
#define alloc_bootmem_pages(x)   __alloc_bootmem(x, PAGE_SIZE, BOOTMEM_LOW_LIMIT)
#define alloc_bootmem_pages_nopanic(x)   __alloc_bootmem_nopanic(x, PAGE_SIZE, BOOTMEM_LOW_LIMIT)
#define alloc_bootmem_node(pgdat, x)   __alloc_bootmem_node(pgdat, x, SMP_CACHE_BYTES, BOOTMEM_LOW_LIMIT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define alloc_bootmem_node_nopanic(pgdat, x)   __alloc_bootmem_node_nopanic(pgdat, x, SMP_CACHE_BYTES, BOOTMEM_LOW_LIMIT)
#define alloc_bootmem_pages_node(pgdat, x)   __alloc_bootmem_node(pgdat, x, PAGE_SIZE, BOOTMEM_LOW_LIMIT)
#define alloc_bootmem_pages_node_nopanic(pgdat, x)   __alloc_bootmem_node_nopanic(pgdat, x, PAGE_SIZE, BOOTMEM_LOW_LIMIT)
#define alloc_bootmem_low(x)   __alloc_bootmem_low(x, SMP_CACHE_BYTES, 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define alloc_bootmem_low_pages_nopanic(x)   __alloc_bootmem_low_nopanic(x, PAGE_SIZE, 0)
#define alloc_bootmem_low_pages(x)   __alloc_bootmem_low(x, PAGE_SIZE, 0)
#define alloc_bootmem_low_pages_node(pgdat, x)   __alloc_bootmem_low_node(pgdat, x, PAGE_SIZE, 0)
#define HASH_EARLY 0x00000001
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HASH_SMALL 0x00000002
#define HASHDIST_DEFAULT 0
#endif
