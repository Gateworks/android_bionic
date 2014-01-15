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
#ifndef _ASM_PGTABLE_2LEVEL_TYPES_H
#define _ASM_PGTABLE_2LEVEL_TYPES_H
#include <asm/types.h>
typedef u32 pteval_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef u32 pmdval_t;
#undef STRICT_MM_TYPECHECKS
#ifdef STRICT_MM_TYPECHECKS
typedef struct { pteval_t pte; } pte_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef struct { pmdval_t pmd; } pmd_t;
typedef struct { pmdval_t pgd[2]; } pgd_t;
typedef struct { pteval_t pgprot; } pgprot_t;
#define pte_val(x) ((x).pte)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define pmd_val(x) ((x).pmd)
#define pgd_val(x) ((x).pgd[0])
#define pgprot_val(x) ((x).pgprot)
#define __pte(x) ((pte_t) { (x) } )
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __pmd(x) ((pmd_t) { (x) } )
#define __pgprot(x) ((pgprot_t) { (x) } )
#else
typedef pteval_t pte_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef pmdval_t pmd_t;
typedef pmdval_t pgd_t[2];
typedef pteval_t pgprot_t;
#define pte_val(x) (x)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define pmd_val(x) (x)
#define pgd_val(x) ((x)[0])
#define pgprot_val(x) (x)
#define __pte(x) (x)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __pmd(x) (x)
#define __pgprot(x) (x)
#endif
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
