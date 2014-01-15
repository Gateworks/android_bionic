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
#ifndef __ASM_GENERIC_PAGE_H
#define __ASM_GENERIC_PAGE_H
#define PAGE_SHIFT 12
#ifdef __ASSEMBLY__
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PAGE_SIZE (1 << PAGE_SHIFT)
#else
#define PAGE_SIZE (1UL << PAGE_SHIFT)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PAGE_MASK (~(PAGE_SIZE-1))
#include <asm/setup.h>
#ifndef __ASSEMBLY__
#define get_user_page(vaddr) __get_free_page(GFP_KERNEL)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define free_user_page(page, addr) free_page(addr)
#define clear_page(page) memset((page), 0, PAGE_SIZE)
#define copy_page(to,from) memcpy((to), (from), PAGE_SIZE)
#define clear_user_page(page, vaddr, pg) clear_page(page)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define copy_user_page(to, from, vaddr, pg) copy_page(to, from)
typedef struct {
 unsigned long pte;
} pte_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef struct {
 unsigned long pmd[16];
} pmd_t;
typedef struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long pgd;
} pgd_t;
typedef struct {
 unsigned long pgprot;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} pgprot_t;
typedef struct page *pgtable_t;
#define pte_val(x) ((x).pte)
#define pmd_val(x) ((&x)->pmd[0])
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define pgd_val(x) ((x).pgd)
#define pgprot_val(x) ((x).pgprot)
#define __pte(x) ((pte_t) { (x) } )
#define __pmd(x) ((pmd_t) { (x) } )
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __pgd(x) ((pgd_t) { (x) } )
#define __pgprot(x) ((pgprot_t) { (x) } )
#endif
#define PAGE_OFFSET (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef ARCH_PFN_OFFSET
#define ARCH_PFN_OFFSET (PAGE_OFFSET >> PAGE_SHIFT)
#endif
#ifndef __ASSEMBLY__
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __va(x) ((void *)((unsigned long) (x)))
#define __pa(x) ((unsigned long) (x))
#define virt_to_pfn(kaddr) (__pa(kaddr) >> PAGE_SHIFT)
#define pfn_to_virt(pfn) __va((pfn) << PAGE_SHIFT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define virt_to_page(addr) pfn_to_page(virt_to_pfn(addr))
#define page_to_virt(page) pfn_to_virt(page_to_pfn(page))
#ifndef page_to_phys
#define page_to_phys(page) ((dma_addr_t)page_to_pfn(page) << PAGE_SHIFT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define pfn_valid(pfn) ((pfn) >= ARCH_PFN_OFFSET && ((pfn) - ARCH_PFN_OFFSET) < max_mapnr)
#define virt_addr_valid(kaddr) (((void *)(kaddr) >= (void *)PAGE_OFFSET) &&   ((void *)(kaddr) < (void *)memory_end))
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <asm-generic/memory_model.h>
#include <asm-generic/getorder.h>
#endif
