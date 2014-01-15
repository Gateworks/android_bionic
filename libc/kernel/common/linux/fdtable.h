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
#ifndef __LINUX_FDTABLE_H
#define __LINUX_FDTABLE_H
#include <linux/posix_types.h>
#include <linux/compiler.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/spinlock.h>
#include <linux/rcupdate.h>
#include <linux/types.h>
#include <linux/init.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/fs.h>
#include <linux/atomic.h>
#define NR_OPEN_DEFAULT BITS_PER_LONG
struct fdtable {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int max_fds;
 struct file __rcu **fd;
 unsigned long *close_on_exec;
 unsigned long *open_fds;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct rcu_head rcu;
};
struct files_struct {
 atomic_t count;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct fdtable __rcu *fdt;
 struct fdtable fdtab;
 spinlock_t file_lock ____cacheline_aligned_in_smp;
 int next_fd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long close_on_exec_init[1];
 unsigned long open_fds_init[1];
 struct file __rcu * fd_array[NR_OPEN_DEFAULT];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define rcu_dereference_check_fdtable(files, fdtfd)   (rcu_dereference_check((fdtfd),   lockdep_is_held(&(files)->file_lock) ||   atomic_read(&(files)->count) == 1 ||   rcu_my_thread_group_empty()))
#define files_fdtable(files)   (rcu_dereference_check_fdtable((files), (files)->fdt))
struct file_operations;
struct vfsmount;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct dentry;
#define fcheck(fd) fcheck_files(current->files, fd)
struct task_struct;
struct files_struct *get_files_struct(struct task_struct *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct files_struct *dup_fd(struct files_struct *, int *);
#endif
