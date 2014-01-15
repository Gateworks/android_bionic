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
#ifndef _LINUX_REGSET_H
#define _LINUX_REGSET_H 1
#include <linux/compiler.h>
#include <linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/bug.h>
#include <linux/uaccess.h>
struct task_struct;
struct user_regset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef int user_regset_active_fn(struct task_struct *target,
 const struct user_regset *regset);
typedef int user_regset_get_fn(struct task_struct *target,
 const struct user_regset *regset,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int pos, unsigned int count,
 void *kbuf, void __user *ubuf);
typedef int user_regset_set_fn(struct task_struct *target,
 const struct user_regset *regset,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int pos, unsigned int count,
 const void *kbuf, const void __user *ubuf);
typedef int user_regset_writeback_fn(struct task_struct *target,
 const struct user_regset *regset,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int immediate);
struct user_regset {
 user_regset_get_fn *get;
 user_regset_set_fn *set;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 user_regset_active_fn *active;
 user_regset_writeback_fn *writeback;
 unsigned int n;
 unsigned int size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int align;
 unsigned int bias;
 unsigned int core_note_type;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct user_regset_view {
 const char *name;
 const struct user_regset *regsets;
 unsigned int n;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 e_flags;
 u16 e_machine;
 u8 ei_osabi;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
