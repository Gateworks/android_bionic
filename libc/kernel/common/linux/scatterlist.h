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
#ifndef _LINUX_SCATTERLIST_H
#define _LINUX_SCATTERLIST_H
#include <linux/string.h>
#include <linux/bug.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/mm.h>
#include <asm/types.h>
#include <asm/scatterlist.h>
#include <asm/io.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct sg_table {
 struct scatterlist *sgl;
 unsigned int nents;
 unsigned int orig_nents;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define SG_MAGIC 0x87654321
#define sg_is_chain(sg) ((sg)->page_link & 0x01)
#define sg_is_last(sg) ((sg)->page_link & 0x02)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define sg_chain_ptr(sg)   ((struct scatterlist *) ((sg)->page_link & ~0x03))
#define for_each_sg(sglist, sg, nr, __i)   for (__i = 0, sg = (sglist); __i < (nr); __i++, sg = sg_next(sg))
#ifndef ARCH_HAS_SG_CHAIN
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct scatterlist *sg_next(struct scatterlist *);
struct scatterlist *sg_last(struct scatterlist *s, unsigned int);
typedef struct scatterlist *(sg_alloc_fn)(unsigned int, gfp_t);
typedef void (sg_free_fn)(struct scatterlist *, unsigned int);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SG_MAX_SINGLE_ALLOC (PAGE_SIZE / sizeof(struct scatterlist))
struct sg_page_iter {
 struct scatterlist *sg;
 unsigned int sg_pgoffset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int __nents;
 int __pg_advance;
};
#define for_each_sg_page(sglist, piter, nents, pgoffset)   for (__sg_page_iter_start((piter), (sglist), (nents), (pgoffset));   __sg_page_iter_next(piter);)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SG_MITER_ATOMIC (1 << 0)
#define SG_MITER_TO_SG (1 << 1)
#define SG_MITER_FROM_SG (1 << 2)
struct sg_mapping_iter {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct page *page;
 void *addr;
 size_t length;
 size_t consumed;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct sg_page_iter piter;
 unsigned int __offset;
 unsigned int __remaining;
 unsigned int __flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
