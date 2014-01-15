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
#ifndef __LINUX_NODEMASK_H
#define __LINUX_NODEMASK_H
#include <linux/kernel.h>
#include <linux/threads.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/bitmap.h>
#include <linux/numa.h>
typedef struct { DECLARE_BITMAP(bits, MAX_NUMNODES); } nodemask_t;
#define node_set(node, dst) __node_set((node), &(dst))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define node_clear(node, dst) __node_clear((node), &(dst))
#define nodes_setall(dst) __nodes_setall(&(dst), MAX_NUMNODES)
#define nodes_clear(dst) __nodes_clear(&(dst), MAX_NUMNODES)
#define node_isset(node, nodemask) test_bit((node), (nodemask).bits)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define node_test_and_set(node, nodemask)   __node_test_and_set((node), &(nodemask))
#define nodes_and(dst, src1, src2)   __nodes_and(&(dst), &(src1), &(src2), MAX_NUMNODES)
#define nodes_or(dst, src1, src2)   __nodes_or(&(dst), &(src1), &(src2), MAX_NUMNODES)
#define nodes_xor(dst, src1, src2)   __nodes_xor(&(dst), &(src1), &(src2), MAX_NUMNODES)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define nodes_andnot(dst, src1, src2)   __nodes_andnot(&(dst), &(src1), &(src2), MAX_NUMNODES)
#define nodes_complement(dst, src)   __nodes_complement(&(dst), &(src), MAX_NUMNODES)
#define nodes_equal(src1, src2)   __nodes_equal(&(src1), &(src2), MAX_NUMNODES)
#define nodes_intersects(src1, src2)   __nodes_intersects(&(src1), &(src2), MAX_NUMNODES)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define nodes_subset(src1, src2)   __nodes_subset(&(src1), &(src2), MAX_NUMNODES)
#define nodes_empty(src) __nodes_empty(&(src), MAX_NUMNODES)
#define nodes_full(nodemask) __nodes_full(&(nodemask), MAX_NUMNODES)
#define nodes_weight(nodemask) __nodes_weight(&(nodemask), MAX_NUMNODES)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define nodes_shift_right(dst, src, n)   __nodes_shift_right(&(dst), &(src), (n), MAX_NUMNODES)
#define nodes_shift_left(dst, src, n)   __nodes_shift_left(&(dst), &(src), (n), MAX_NUMNODES)
#define first_node(src) __first_node(&(src))
#define next_node(n, src) __next_node((n), &(src))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define nodemask_of_node(node)  ({   typeof(_unused_nodemask_arg_) m;   if (sizeof(m) == sizeof(unsigned long)) {   m.bits[0] = 1UL << (node);   } else {   init_nodemask_of_node(&m, (node));   }   m;  })
#define first_unset_node(mask) __first_unset_node(&(mask))
#define NODE_MASK_LAST_WORD BITMAP_LAST_WORD_MASK(MAX_NUMNODES)
#if MAX_NUMNODES <= BITS_PER_LONG
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NODE_MASK_ALL  ((nodemask_t) { {   [BITS_TO_LONGS(MAX_NUMNODES)-1] = NODE_MASK_LAST_WORD  } })
#else
#define NODE_MASK_ALL  ((nodemask_t) { {   [0 ... BITS_TO_LONGS(MAX_NUMNODES)-2] = ~0UL,   [BITS_TO_LONGS(MAX_NUMNODES)-1] = NODE_MASK_LAST_WORD  } })
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NODE_MASK_NONE  ((nodemask_t) { {   [0 ... BITS_TO_LONGS(MAX_NUMNODES)-1] = 0UL  } })
#define nodes_addr(src) ((src).bits)
#define nodemask_scnprintf(buf, len, src)   __nodemask_scnprintf((buf), (len), &(src), MAX_NUMNODES)
#define nodemask_parse_user(ubuf, ulen, dst)   __nodemask_parse_user((ubuf), (ulen), &(dst), MAX_NUMNODES)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define nodelist_scnprintf(buf, len, src)   __nodelist_scnprintf((buf), (len), &(src), MAX_NUMNODES)
#define nodelist_parse(buf, dst) __nodelist_parse((buf), &(dst), MAX_NUMNODES)
#define node_remap(oldbit, old, new)   __node_remap((oldbit), &(old), &(new), MAX_NUMNODES)
#define nodes_remap(dst, src, old, new)   __nodes_remap(&(dst), &(src), &(old), &(new), MAX_NUMNODES)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define nodes_onto(dst, orig, relmap)   __nodes_onto(&(dst), &(orig), &(relmap), MAX_NUMNODES)
#define nodes_fold(dst, orig, sz)   __nodes_fold(&(dst), &(orig), sz, MAX_NUMNODES)
#if MAX_NUMNODES > 1
#define for_each_node_mask(node, mask)   for ((node) = first_node(mask);   (node) < MAX_NUMNODES;   (node) = next_node((node), (mask)))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#else
#define for_each_node_mask(node, mask)   if (!nodes_empty(mask))   for ((node) = 0; (node) < 1; (node)++)
#endif
enum node_states {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 N_POSSIBLE,
 N_ONLINE,
 N_NORMAL_MEMORY,
 N_HIGH_MEMORY = N_NORMAL_MEMORY,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 N_MEMORY = N_HIGH_MEMORY,
 N_CPU,
 NR_NODE_STATES
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#if MAX_NUMNODES > 1
#define for_each_node_state(__node, __state)   for_each_node_mask((__node), node_states[__state])
#define first_online_node first_node(node_states[N_ONLINE])
#define next_online_node(nid) next_node((nid), node_states[N_ONLINE])
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#else
#define for_each_node_state(node, __state)   for ( (node) = 0; (node) == 0; (node) = 1)
#define first_online_node 0
#define next_online_node(nid) (MAX_NUMNODES)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define nr_node_ids 1
#define nr_online_nodes 1
#define node_set_online(node) node_set_state((node), N_ONLINE)
#define node_set_offline(node) node_clear_state((node), N_ONLINE)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define node_online_map node_states[N_ONLINE]
#define node_possible_map node_states[N_POSSIBLE]
#define num_online_nodes() num_node_state(N_ONLINE)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define num_possible_nodes() num_node_state(N_POSSIBLE)
#define node_online(node) node_state((node), N_ONLINE)
#define node_possible(node) node_state((node), N_POSSIBLE)
#define for_each_node(node) for_each_node_state(node, N_POSSIBLE)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define for_each_online_node(node) for_each_node_state(node, N_ONLINE)
#if NODES_SHIFT > 8
#define NODEMASK_ALLOC(type, name, gfp_flags)   type *name = kmalloc(sizeof(*name), gfp_flags)
#define NODEMASK_FREE(m) kfree(m)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#else
#define NODEMASK_ALLOC(type, name, gfp_flags) type _##name, *name = &_##name
#define NODEMASK_FREE(m) do {} while (0)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct nodemask_scratch {
 nodemask_t mask1;
 nodemask_t mask2;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NODEMASK_SCRATCH(x)   NODEMASK_ALLOC(struct nodemask_scratch, x,   GFP_KERNEL | __GFP_NORETRY)
#define NODEMASK_SCRATCH_FREE(x) NODEMASK_FREE(x)
#endif
