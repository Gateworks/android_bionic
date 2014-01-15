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
#ifndef _LINUX_HUGETLB_H
#define _LINUX_HUGETLB_H
#include <linux/mm_types.h>
#include <linux/fs.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/hugetlb_inline.h>
#include <linux/cgroup.h>
struct ctl_table;
struct user_struct;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct mmu_gather;
#define follow_hugetlb_page(m,v,p,vs,a,b,i,w) ({ BUG(); 0; })
#define follow_huge_addr(mm, addr, write) ERR_PTR(-EINVAL)
#define copy_hugetlb_page_range(src, dst, vma) ({ BUG(); 0; })
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define hugetlb_prefault(mapping, vma) ({ BUG(); 0; })
#define hugetlb_report_node_meminfo(n, buf) 0
#define follow_huge_pmd(mm, addr, pmd, write) NULL
#define follow_huge_pud(mm, addr, pud, write) NULL
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define prepare_hugepage_range(file, addr, len) (-EINVAL)
#define pmd_huge(x) 0
#define pud_huge(x) 0
#define is_hugepage_only_range(mm, addr, len) 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define hugetlb_free_pgd_range(tlb, addr, end, floor, ceiling) ({BUG(); 0; })
#define hugetlb_fault(mm, vma, addr, flags) ({ BUG(); 0; })
#define huge_pte_offset(mm, address) 0
#define HUGETLB_ANON_FILE "anon_hugepage"
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
 HUGETLB_SHMFS_INODE = 1,
 HUGETLB_ANONHUGE_INODE = 2,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define is_file_hugepages(file) 0
#ifdef HAVE_ARCH_HUGETLB_UNMAPPED_AREA
#endif
struct hstate {};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define alloc_huge_page_node(h, nid) NULL
#define alloc_bootmem_huge_page(h) NULL
#define hstate_file(f) NULL
#define hstate_sizelog(s) NULL
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define hstate_vma(v) NULL
#define hstate_inode(i) NULL
#define huge_page_size(h) PAGE_SIZE
#define huge_page_mask(h) PAGE_MASK
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define vma_kernel_pagesize(v) PAGE_SIZE
#define vma_mmu_pagesize(v) PAGE_SIZE
#define huge_page_order(h) 0
#define huge_page_shift(h) PAGE_SHIFT
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define hstate_index_to_shift(index) 0
#define hstate_index(h) 0
#endif
