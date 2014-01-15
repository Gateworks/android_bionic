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
#ifndef __LINUX_SECURITY_H
#define __LINUX_SECURITY_H
#include <linux/key.h>
#include <linux/capability.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/slab.h>
#include <linux/err.h>
struct linux_binprm;
struct cred;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct rlimit;
struct siginfo;
struct sem_array;
struct sembuf;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kern_ipc_perm;
struct audit_context;
struct super_block;
struct inode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct dentry;
struct file;
struct vfsmount;
struct path;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct qstr;
struct nameidata;
struct iattr;
struct fown_struct;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct file_operations;
struct shmid_kernel;
struct msg_msg;
struct msg_queue;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct xattr;
struct xfrm_sec_ctx;
struct mm_struct;
#define SECURITY_NAME_MAX 10
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SECURITY_CAP_NOAUDIT 0
#define SECURITY_CAP_AUDIT 1
struct ctl_table;
struct audit_krule;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct user_namespace;
struct timezone;
struct msghdr;
struct sk_buff;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct sock;
struct sockaddr;
struct socket;
struct flowi;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct dst_entry;
struct xfrm_selector;
struct xfrm_policy;
struct xfrm_state;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct xfrm_user_sec_ctx;
struct seq_file;
#define mmap_min_addr 0UL
#define dac_mmap_min_addr 0UL
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LSM_SETID_ID 1
#define LSM_SETID_RE 2
#define LSM_SETID_RES 4
#define LSM_SETID_FS 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct sched_param;
struct request_sock;
#define LSM_UNSAFE_SHARE 1
#define LSM_UNSAFE_PTRACE 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LSM_UNSAFE_PTRACE_CAP 4
#define LSM_UNSAFE_NO_NEW_PRIVS 8
typedef int (*initxattrs) (struct inode *inode,
 const struct xattr *xattr_array, void *fs_data);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct security_mnt_opts {
};
#endif
