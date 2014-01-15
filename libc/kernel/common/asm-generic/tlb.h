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
#ifndef _ASM_GENERIC__TLB_H
#define _ASM_GENERIC__TLB_H
#include <linux/swap.h>
#include <asm/pgalloc.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <asm/tlbflush.h>
#define MMU_GATHER_BUNDLE 8
struct mmu_gather_batch {
 struct mmu_gather_batch *next;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int nr;
 unsigned int max;
 struct page *pages[0];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MAX_GATHER_BATCH   ((PAGE_SIZE - sizeof(struct mmu_gather_batch)) / sizeof(void *))
#define MAX_GATHER_BATCH_COUNT (10000UL/MAX_GATHER_BATCH)
struct mmu_gather {
 struct mm_struct *mm;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long start;
 unsigned long end;
 unsigned int need_flush : 1,
 fullmm : 1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 need_flush_all : 1;
 struct mmu_gather_batch *active;
 struct mmu_gather_batch local;
 struct page *__pages[MMU_GATHER_BUNDLE];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int batch_count;
};
#define HAVE_GENERIC_MMU_GATHER
#define tlb_remove_tlb_entry(tlb, ptep, address)   do {   tlb->need_flush = 1;   __tlb_remove_tlb_entry(tlb, ptep, address);   } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef __tlb_remove_pmd_tlb_entry
#define __tlb_remove_pmd_tlb_entry(tlb, pmdp, address) do {} while (0)
#endif
#define tlb_remove_pmd_tlb_entry(tlb, pmdp, address)   do {   tlb->need_flush = 1;   __tlb_remove_pmd_tlb_entry(tlb, pmdp, address);   } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define pte_free_tlb(tlb, ptep, address)   do {   tlb->need_flush = 1;   __pte_free_tlb(tlb, ptep, address);   } while (0)
#ifndef __ARCH_HAS_4LEVEL_HACK
#define pud_free_tlb(tlb, pudp, address)   do {   tlb->need_flush = 1;   __pud_free_tlb(tlb, pudp, address);   } while (0)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define pmd_free_tlb(tlb, pmdp, address)   do {   tlb->need_flush = 1;   __pmd_free_tlb(tlb, pmdp, address);   } while (0)
#define tlb_migrate_finish(mm) do {} while (0)
#endif
