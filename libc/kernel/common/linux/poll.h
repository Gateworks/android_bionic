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
#ifndef _LINUX_POLL_H
#define _LINUX_POLL_H
#include <linux/compiler.h>
#include <linux/ktime.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/wait.h>
#include <linux/string.h>
#include <linux/fs.h>
#include <linux/sysctl.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <asm/uaccess.h>
#include <uapi/linux/poll.h>
#define MAX_STACK_ALLOC 832
#define FRONTEND_STACK_ALLOC 256
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SELECT_STACK_ALLOC FRONTEND_STACK_ALLOC
#define POLL_STACK_ALLOC FRONTEND_STACK_ALLOC
#define WQUEUES_STACK_ALLOC (MAX_STACK_ALLOC - FRONTEND_STACK_ALLOC)
#define N_INLINE_POLL_ENTRIES (WQUEUES_STACK_ALLOC / sizeof(struct poll_table_entry))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DEFAULT_POLLMASK (POLLIN | POLLOUT | POLLRDNORM | POLLWRNORM)
struct poll_table_struct;
typedef void (*poll_queue_proc)(struct file *, wait_queue_head_t *, struct poll_table_struct *);
typedef struct poll_table_struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 poll_queue_proc _qproc;
 unsigned long _key;
} poll_table;
struct poll_table_entry {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct file *filp;
 unsigned long key;
 wait_queue_t wait;
 wait_queue_head_t *wait_address;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct poll_wqueues {
 poll_table pt;
 struct poll_table_page *table;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct task_struct *polling_task;
 int triggered;
 int error;
 int inline_index;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct poll_table_entry inline_entries[N_INLINE_POLL_ENTRIES];
};
typedef struct {
 unsigned long *in, *out, *ex;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long *res_in, *res_out, *res_ex;
} fd_set_bits;
#define FDS_BITPERLONG (8*sizeof(long))
#define FDS_LONGS(nr) (((nr)+FDS_BITPERLONG-1)/FDS_BITPERLONG)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FDS_BYTES(nr) (FDS_LONGS(nr)*sizeof(long))
#define MAX_INT64_SECONDS (((s64)(~((u64)0)>>1)/HZ)-1)
#endif
