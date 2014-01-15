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
#ifndef _LINUX_RBTREE_AUGMENTED_H
#define _LINUX_RBTREE_AUGMENTED_H
#include <linux/compiler.h>
struct rb_augment_callbacks {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*propagate)(struct rb_node *node, struct rb_node *stop);
 void (*copy)(struct rb_node *old, struct rb_node *new);
 void (*rotate)(struct rb_node *old, struct rb_node *new);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RB_DECLARE_CALLBACKS(rbstatic, rbname, rbstruct, rbfield,   rbtype, rbaugmented, rbcompute)  static inline void  rbname ## _propagate(struct rb_node *rb, struct rb_node *stop)  {   while (rb != stop) {   rbstruct *node = rb_entry(rb, rbstruct, rbfield);   rbtype augmented = rbcompute(node);   if (node->rbaugmented == augmented)   break;   node->rbaugmented = augmented;   rb = rb_parent(&node->rbfield);   }  }  static inline void  rbname ## _copy(struct rb_node *rb_old, struct rb_node *rb_new)  {   rbstruct *old = rb_entry(rb_old, rbstruct, rbfield);   rbstruct *new = rb_entry(rb_new, rbstruct, rbfield);   new->rbaugmented = old->rbaugmented;  }  static void  rbname ## _rotate(struct rb_node *rb_old, struct rb_node *rb_new)  {   rbstruct *old = rb_entry(rb_old, rbstruct, rbfield);   rbstruct *new = rb_entry(rb_new, rbstruct, rbfield);   new->rbaugmented = old->rbaugmented;   old->rbaugmented = rbcompute(old);  }  rbstatic const struct rb_augment_callbacks rbname = {   rbname ## _propagate, rbname ## _copy, rbname ## _rotate  };
#define RB_RED 0
#define RB_BLACK 1
#define __rb_parent(pc) ((struct rb_node *)(pc & ~3))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __rb_color(pc) ((pc) & 1)
#define __rb_is_black(pc) __rb_color(pc)
#define __rb_is_red(pc) (!__rb_color(pc))
#define rb_color(rb) __rb_color((rb)->__rb_parent_color)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define rb_is_red(rb) __rb_is_red((rb)->__rb_parent_color)
#define rb_is_black(rb) __rb_is_black((rb)->__rb_parent_color)
#endif
