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
#ifndef __ASM_FNCPY_H
#define __ASM_FNCPY_H
#include <linux/types.h>
#include <linux/string.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <asm/bug.h>
#include <asm/cacheflush.h>
#define FNCPY_ALIGN 8
#define fncpy(dest_buf, funcp, size) ({   uintptr_t __funcp_address;   typeof(funcp) __result;     asm("" : "=r" (__funcp_address) : "0" (funcp));         BUG_ON((uintptr_t)(dest_buf) & (FNCPY_ALIGN - 1) ||   (__funcp_address & ~(uintptr_t)1 & (FNCPY_ALIGN - 1)));     memcpy(dest_buf, (void const *)(__funcp_address & ~1), size);   flush_icache_range((unsigned long)(dest_buf),   (unsigned long)(dest_buf) + (size));     asm("" : "=r" (__result)   : "0" ((uintptr_t)(dest_buf) | (__funcp_address & 1)));     __result;  })
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
