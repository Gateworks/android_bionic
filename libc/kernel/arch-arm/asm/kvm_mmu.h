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
#ifndef __ARM_KVM_MMU_H__
#define __ARM_KVM_MMU_H__
#include <asm/memory.h>
#include <asm/page.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HYP_PAGE_OFFSET_MASK UL(~0)
#define HYP_PAGE_OFFSET PAGE_OFFSET
#define KERN_TO_HYP(kva) (kva)
#define TRAMPOLINE_VA UL(CONFIG_VECTORS_BASE)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef __ASSEMBLY__
#include <asm/cacheflush.h>
#include <asm/pgalloc.h>
struct kvm;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define kvm_flush_dcache_to_poc(a,l) __cpuc_flush_dcache_area((a), (l))
#endif
#endif
