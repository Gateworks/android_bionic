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
#ifndef _ASM_PGTABLE_3LEVEL_H
#define _ASM_PGTABLE_3LEVEL_H
#define PTRS_PER_PTE 512
#define PTRS_PER_PMD 512
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PTRS_PER_PGD 4
#define PTE_HWTABLE_PTRS (PTRS_PER_PTE)
#define PTE_HWTABLE_OFF (0)
#define PTE_HWTABLE_SIZE (PTRS_PER_PTE * sizeof(u64))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PGDIR_SHIFT 30
#define PMD_SHIFT 21
#define PMD_SIZE (1UL << PMD_SHIFT)
#define PMD_MASK (~(PMD_SIZE-1))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PGDIR_SIZE (1UL << PGDIR_SHIFT)
#define PGDIR_MASK (~(PGDIR_SIZE-1))
#define SECTION_SHIFT 21
#define SECTION_SIZE (1UL << SECTION_SHIFT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SECTION_MASK (~(SECTION_SIZE-1))
#define USER_PTRS_PER_PGD (PAGE_OFFSET / PGDIR_SIZE)
#define L_PTE_VALID (_AT(pteval_t, 1) << 0)
#define L_PTE_PRESENT (_AT(pteval_t, 3) << 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define L_PTE_FILE (_AT(pteval_t, 1) << 2)
#define L_PTE_USER (_AT(pteval_t, 1) << 6)
#define L_PTE_RDONLY (_AT(pteval_t, 1) << 7)
#define L_PTE_SHARED (_AT(pteval_t, 3) << 8)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define L_PTE_YOUNG (_AT(pteval_t, 1) << 10)
#define L_PTE_XN (_AT(pteval_t, 1) << 54)
#define L_PTE_DIRTY (_AT(pteval_t, 1) << 55)
#define L_PTE_SPECIAL (_AT(pteval_t, 1) << 56)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define L_PTE_NONE (_AT(pteval_t, 1) << 57)
#define L_PTE_XN_HIGH (1 << (54 - 32))
#define L_PTE_DIRTY_HIGH (1 << (55 - 32))
#define L_PTE_MT_UNCACHED (_AT(pteval_t, 0) << 2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define L_PTE_MT_BUFFERABLE (_AT(pteval_t, 1) << 2)
#define L_PTE_MT_WRITETHROUGH (_AT(pteval_t, 2) << 2)
#define L_PTE_MT_WRITEBACK (_AT(pteval_t, 3) << 2)
#define L_PTE_MT_WRITEALLOC (_AT(pteval_t, 7) << 2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define L_PTE_MT_DEV_SHARED (_AT(pteval_t, 4) << 2)
#define L_PTE_MT_DEV_NONSHARED (_AT(pteval_t, 4) << 2)
#define L_PTE_MT_DEV_WC (_AT(pteval_t, 1) << 2)
#define L_PTE_MT_DEV_CACHED (_AT(pteval_t, 3) << 2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define L_PTE_MT_MASK (_AT(pteval_t, 7) << 2)
#define L_PGD_SWAPPER (_AT(pgdval_t, 1) << 55)
#define L_PTE_S2_MT_UNCACHED (_AT(pteval_t, 0x5) << 2)
#define L_PTE_S2_MT_WRITETHROUGH (_AT(pteval_t, 0xa) << 2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define L_PTE_S2_MT_WRITEBACK (_AT(pteval_t, 0xf) << 2)
#define L_PTE_S2_RDONLY (_AT(pteval_t, 1) << 6)
#define L_PTE_S2_RDWR (_AT(pteval_t, 3) << 6)
#define L_PTE_HYP L_PTE_USER
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef __ASSEMBLY__
#define pud_none(pud) (!pud_val(pud))
#define pud_bad(pud) (!(pud_val(pud) & 2))
#define pud_present(pud) (pud_val(pud))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define pmd_table(pmd) ((pmd_val(pmd) & PMD_TYPE_MASK) ==   PMD_TYPE_TABLE)
#define pmd_sect(pmd) ((pmd_val(pmd) & PMD_TYPE_MASK) ==   PMD_TYPE_SECT)
#define pud_clear(pudp)   do {   *pudp = __pud(0);   clean_pmd_entry(pudp);   } while (0)
#define set_pud(pudp, pud)   do {   *pudp = pud;   flush_pmd_entry(pudp);   } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define pmd_index(addr) (((addr) >> PMD_SHIFT) & (PTRS_PER_PMD - 1))
#define pmd_bad(pmd) (!(pmd_val(pmd) & 2))
#define copy_pmd(pmdpd,pmdps)   do {   *pmdpd = *pmdps;   flush_pmd_entry(pmdpd);   } while (0)
#define pmd_clear(pmdp)   do {   *pmdp = __pmd(0);   clean_pmd_entry(pmdp);   } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define set_pte_ext(ptep,pte,ext) cpu_set_pte_ext(ptep,__pte(pte_val(pte)|(ext)))
#endif
#endif
