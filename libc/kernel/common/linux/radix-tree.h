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
#ifndef _LINUX_RADIX_TREE_H
#define _LINUX_RADIX_TREE_H
#include <linux/preempt.h>
#include <linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/bug.h>
#include <linux/kernel.h>
#include <linux/rcupdate.h>
#define RADIX_TREE_INDIRECT_PTR 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RADIX_TREE_EXCEPTIONAL_ENTRY 2
#define RADIX_TREE_EXCEPTIONAL_SHIFT 2
#define RADIX_TREE_MAX_TAGS 3
struct radix_tree_root {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int height;
 gfp_t gfp_mask;
 struct radix_tree_node __rcu *rnode;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RADIX_TREE_INIT(mask) {   .height = 0,   .gfp_mask = (mask),   .rnode = NULL,  }
#define RADIX_TREE(name, mask)   struct radix_tree_root name = RADIX_TREE_INIT(mask)
#define INIT_RADIX_TREE(root, mask)  do {   (root)->height = 0;   (root)->gfp_mask = (mask);   (root)->rnode = NULL;  } while (0)
struct radix_tree_iter {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long index;
 unsigned long next_index;
 unsigned long tags;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RADIX_TREE_ITER_TAG_MASK 0x00FF
#define RADIX_TREE_ITER_TAGGED 0x0100
#define RADIX_TREE_ITER_CONTIG 0x0200
#define radix_tree_for_each_chunk(slot, root, iter, start, flags)   for (slot = radix_tree_iter_init(iter, start) ;   (slot = radix_tree_next_chunk(root, iter, flags)) ;)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define radix_tree_for_each_chunk_slot(slot, iter, flags)   for (; slot ; slot = radix_tree_next_slot(slot, iter, flags))
#define radix_tree_for_each_slot(slot, root, iter, start)   for (slot = radix_tree_iter_init(iter, start) ;   slot || (slot = radix_tree_next_chunk(root, iter, 0)) ;   slot = radix_tree_next_slot(slot, iter, 0))
#define radix_tree_for_each_contig(slot, root, iter, start)   for (slot = radix_tree_iter_init(iter, start) ;   slot || (slot = radix_tree_next_chunk(root, iter,   RADIX_TREE_ITER_CONTIG)) ;   slot = radix_tree_next_slot(slot, iter,   RADIX_TREE_ITER_CONTIG))
#define radix_tree_for_each_tagged(slot, root, iter, start, tag)   for (slot = radix_tree_iter_init(iter, start) ;   slot || (slot = radix_tree_next_chunk(root, iter,   RADIX_TREE_ITER_TAGGED | tag)) ;   slot = radix_tree_next_slot(slot, iter,   RADIX_TREE_ITER_TAGGED))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
