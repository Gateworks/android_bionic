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
#ifndef OPROFILE_H
#define OPROFILE_H
#include <linux/types.h>
#include <linux/spinlock.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/init.h>
#include <linux/errno.h>
#include <linux/printk.h>
#include <linux/atomic.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ESCAPE_CODE ~0UL
#define CTX_SWITCH_CODE 1
#define CPU_SWITCH_CODE 2
#define COOKIE_SWITCH_CODE 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KERNEL_ENTER_SWITCH_CODE 4
#define KERNEL_EXIT_SWITCH_CODE 5
#define MODULE_LOADED_CODE 6
#define CTX_TGID_CODE 7
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TRACE_BEGIN_CODE 8
#define TRACE_END_CODE 9
#define XEN_ENTER_SWITCH_CODE 10
#define SPU_PROFILING_CODE 11
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SPU_CTX_SWITCH_CODE 12
#define IBS_FETCH_CODE 13
#define IBS_OP_CODE 14
struct super_block;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct dentry;
struct file_operations;
struct pt_regs;
struct oprofile_operations {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*create_files)(struct super_block * sb, struct dentry * root);
 int (*setup)(void);
 void (*shutdown)(void);
 int (*start)(void);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*stop)(void);
 int (*sync_start)(void);
 int (*sync_stop)(void);
 void (*backtrace)(struct pt_regs * const regs, unsigned int depth);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*switch_events)(void);
 char * cpu_type;
};
struct dentry * oprofilefs_mkdir(struct super_block * sb, struct dentry * root,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char const * name);
struct op_sample;
struct op_entry {
 struct ring_buffer_event *event;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct op_sample *sample;
 unsigned long size;
 unsigned long *data;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
