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
#ifndef _ASM_PGTABLE_3LEVEL_HWDEF_H
#define _ASM_PGTABLE_3LEVEL_HWDEF_H
#define PMD_TYPE_MASK (_AT(pmdval_t, 3) << 0)
#define PMD_TYPE_FAULT (_AT(pmdval_t, 0) << 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PMD_TYPE_TABLE (_AT(pmdval_t, 3) << 0)
#define PMD_TYPE_SECT (_AT(pmdval_t, 1) << 0)
#define PMD_BIT4 (_AT(pmdval_t, 0))
#define PMD_DOMAIN(x) (_AT(pmdval_t, 0))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PMD_APTABLE_SHIFT (61)
#define PMD_APTABLE (_AT(pgdval_t, 3) << PGD_APTABLE_SHIFT)
#define PMD_PXNTABLE (_AT(pgdval_t, 1) << 59)
#define PMD_SECT_BUFFERABLE (_AT(pmdval_t, 1) << 2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PMD_SECT_CACHEABLE (_AT(pmdval_t, 1) << 3)
#define PMD_SECT_S (_AT(pmdval_t, 3) << 8)
#define PMD_SECT_AF (_AT(pmdval_t, 1) << 10)
#define PMD_SECT_nG (_AT(pmdval_t, 1) << 11)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PMD_SECT_PXN (_AT(pmdval_t, 1) << 53)
#define PMD_SECT_XN (_AT(pmdval_t, 1) << 54)
#define PMD_SECT_AP_WRITE (_AT(pmdval_t, 0))
#define PMD_SECT_AP_READ (_AT(pmdval_t, 0))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PMD_SECT_AP1 (_AT(pmdval_t, 1) << 6)
#define PMD_SECT_TEX(x) (_AT(pmdval_t, 0))
#define PMD_SECT_UNCACHED (_AT(pmdval_t, 0) << 2)
#define PMD_SECT_BUFFERED (_AT(pmdval_t, 1) << 2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PMD_SECT_WT (_AT(pmdval_t, 2) << 2)
#define PMD_SECT_WB (_AT(pmdval_t, 3) << 2)
#define PMD_SECT_WBWA (_AT(pmdval_t, 7) << 2)
#define PTE_TYPE_MASK (_AT(pteval_t, 3) << 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PTE_TYPE_FAULT (_AT(pteval_t, 0) << 0)
#define PTE_TYPE_PAGE (_AT(pteval_t, 3) << 0)
#define PTE_BUFFERABLE (_AT(pteval_t, 1) << 2)
#define PTE_CACHEABLE (_AT(pteval_t, 1) << 3)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PTE_EXT_SHARED (_AT(pteval_t, 3) << 8)
#define PTE_EXT_AF (_AT(pteval_t, 1) << 10)
#define PTE_EXT_NG (_AT(pteval_t, 1) << 11)
#define PTE_EXT_XN (_AT(pteval_t, 1) << 54)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PHYS_MASK_SHIFT (40)
#define PHYS_MASK ((1ULL << PHYS_MASK_SHIFT) - 1)
#endif
