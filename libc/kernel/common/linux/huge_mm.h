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
#ifndef _LINUX_HUGE_MM_H
#define _LINUX_HUGE_MM_H
enum transparent_hugepage_flag {
 TRANSPARENT_HUGEPAGE_FLAG,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TRANSPARENT_HUGEPAGE_REQ_MADV_FLAG,
 TRANSPARENT_HUGEPAGE_DEFRAG_FLAG,
 TRANSPARENT_HUGEPAGE_DEFRAG_REQ_MADV_FLAG,
 TRANSPARENT_HUGEPAGE_DEFRAG_KHUGEPAGED_FLAG,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TRANSPARENT_HUGEPAGE_USE_ZERO_PAGE_FLAG,
};
enum page_check_address_pmd_flag {
 PAGE_CHECK_ADDRESS_PMD_FLAG,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PAGE_CHECK_ADDRESS_PMD_NOTSPLITTING_FLAG,
 PAGE_CHECK_ADDRESS_PMD_SPLITTING_FLAG,
};
#define HPAGE_PMD_ORDER (HPAGE_PMD_SHIFT-PAGE_SHIFT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HPAGE_PMD_NR (1<<HPAGE_PMD_ORDER)
#define HPAGE_PMD_SHIFT ({ BUILD_BUG(); 0; })
#define HPAGE_PMD_MASK ({ BUILD_BUG(); 0; })
#define HPAGE_PMD_SIZE ({ BUILD_BUG(); 0; })
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define hpage_nr_pages(x) 1
#define transparent_hugepage_enabled(__vma) 0
#define transparent_hugepage_flags 0UL
#define split_huge_page_pmd(__vma, __address, __pmd)   do { } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define wait_split_huge_page(__anon_vma, __pmd)   do { } while (0)
#define split_huge_page_pmd_mm(__mm, __address, __pmd)   do { } while (0)
#define compound_trans_head(page) compound_head(page)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
