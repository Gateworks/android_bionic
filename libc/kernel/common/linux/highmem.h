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
#ifndef _LINUX_HIGHMEM_H
#define _LINUX_HIGHMEM_H
#include <linux/fs.h>
#include <linux/kernel.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/bug.h>
#include <linux/mm.h>
#include <linux/uaccess.h>
#include <linux/hardirq.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <asm/cacheflush.h>
#ifndef ARCH_HAS_FLUSH_ANON_PAGE
#endif
#ifndef ARCH_HAS_FLUSH_KERNEL_DCACHE_PAGE
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#include <asm/kmap_types.h>
#define totalhigh_pages 0UL
#ifndef ARCH_HAS_KMAP
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define kmap_atomic_prot(page, prot) kmap_atomic(page)
#define kmap_atomic_pfn(pfn) kmap_atomic(pfn_to_page(pfn))
#define kmap_atomic_to_page(ptr) virt_to_page(ptr)
#define kmap_flush_unused() do {} while(0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define kunmap_atomic(addr)  do {   BUILD_BUG_ON(__same_type((addr), struct page *));   __kunmap_atomic(addr);  } while (0)
#ifndef clear_user_highpage
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef __HAVE_ARCH_ALLOC_ZEROED_USER_HIGHPAGE
#endif
#ifndef __HAVE_ARCH_COPY_USER_HIGHPAGE
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
