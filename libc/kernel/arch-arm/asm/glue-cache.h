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
#ifndef ASM_GLUE_CACHE_H
#define ASM_GLUE_CACHE_H
#include <asm/glue.h>
#undef _CACHE
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#undef MULTI_CACHE
#ifndef MULTI_CACHE
#define __cpuc_flush_icache_all __glue(_CACHE,_flush_icache_all)
#define __cpuc_flush_kern_all __glue(_CACHE,_flush_kern_cache_all)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __cpuc_flush_kern_louis __glue(_CACHE,_flush_kern_cache_louis)
#define __cpuc_flush_user_all __glue(_CACHE,_flush_user_cache_all)
#define __cpuc_flush_user_range __glue(_CACHE,_flush_user_cache_range)
#define __cpuc_coherent_kern_range __glue(_CACHE,_coherent_kern_range)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __cpuc_coherent_user_range __glue(_CACHE,_coherent_user_range)
#define __cpuc_flush_dcache_area __glue(_CACHE,_flush_kern_dcache_area)
#define dmac_map_area __glue(_CACHE,_dma_map_area)
#define dmac_unmap_area __glue(_CACHE,_dma_unmap_area)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define dmac_flush_range __glue(_CACHE,_dma_flush_range)
#endif
#endif
