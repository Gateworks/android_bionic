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
#ifndef _ASMARM_PAGE_NOMMU_H
#define _ASMARM_PAGE_NOMMU_H
#if PAGE_SHIFT < 13
#define KTHREAD_SIZE (8192)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#else
#define KTHREAD_SIZE PAGE_SIZE
#endif
#define get_user_page(vaddr) __get_free_page(GFP_KERNEL)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define free_user_page(page, addr) free_page(addr)
#define clear_page(page) memset((page), 0, PAGE_SIZE)
#define copy_page(to,from) memcpy((to), (from), PAGE_SIZE)
#define clear_user_page(page, vaddr, pg) clear_page(page)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define copy_user_page(to, from, vaddr, pg) copy_page(to, from)
typedef unsigned long pte_t;
typedef unsigned long pmd_t;
typedef unsigned long pgd_t[2];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef unsigned long pgprot_t;
#define pte_val(x) (x)
#define pmd_val(x) (x)
#define pgd_val(x) ((x)[0])
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define pgprot_val(x) (x)
#define __pte(x) (x)
#define __pmd(x) (x)
#define __pgprot(x) (x)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
