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
#ifndef _LSM_COMMON_LOGGING_
#define _LSM_COMMON_LOGGING_
#include <linux/stddef.h>
#include <linux/errno.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/kernel.h>
#include <linux/kdev_t.h>
#include <linux/spinlock.h>
#include <linux/init.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/audit.h>
#include <linux/in6.h>
#include <linux/path.h>
#include <linux/key.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/skbuff.h>
struct lsm_network_audit {
 int netif;
 struct sock *sk;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 family;
 __be16 dport;
 __be16 sport;
 union {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct {
 __be32 daddr;
 __be32 saddr;
 } v4;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct {
 struct in6_addr daddr;
 struct in6_addr saddr;
 } v6;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } fam;
};
struct common_audit_data {
 char type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LSM_AUDIT_DATA_PATH 1
#define LSM_AUDIT_DATA_NET 2
#define LSM_AUDIT_DATA_CAP 3
#define LSM_AUDIT_DATA_IPC 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LSM_AUDIT_DATA_TASK 5
#define LSM_AUDIT_DATA_KEY 6
#define LSM_AUDIT_DATA_NONE 7
#define LSM_AUDIT_DATA_KMOD 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LSM_AUDIT_DATA_INODE 9
#define LSM_AUDIT_DATA_DENTRY 10
 union {
 struct path path;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct dentry *dentry;
 struct inode *inode;
 struct lsm_network_audit *net;
 int cap;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int ipc_id;
 struct task_struct *tsk;
 char *kmod_name;
 } u;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 union {
 };
};
#define v4info fam.v4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define v6info fam.v6
#endif
