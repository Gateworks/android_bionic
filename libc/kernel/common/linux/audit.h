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
#ifndef _LINUX_AUDIT_H_
#define _LINUX_AUDIT_H_
#include <linux/sched.h>
#include <linux/ptrace.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <uapi/linux/audit.h>
struct audit_sig_info {
 uid_t uid;
 pid_t pid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char ctx[0];
};
struct audit_buffer;
struct audit_context;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct inode;
struct netlink_skb_parms;
struct path;
struct linux_binprm;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct mq_attr;
struct mqstat;
struct audit_watch;
struct audit_tree;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct audit_krule {
 int vers_ops;
 u32 flags;
 u32 listnr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 action;
 u32 mask[AUDIT_BITMASK_SIZE];
 u32 buflen;
 u32 field_count;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char *filterkey;
 struct audit_field *fields;
 struct audit_field *arch_f;
 struct audit_field *inode_f;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct audit_watch *watch;
 struct audit_tree *tree;
 u64 prio;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct audit_field {
 u32 type;
 u32 val;
 kuid_t uid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 kgid_t gid;
 u32 op;
 char *lsm_str;
 void *lsm_rule;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define AUDIT_TYPE_UNKNOWN 0
#define AUDIT_TYPE_NORMAL 1
#define AUDIT_TYPE_PARENT 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AUDIT_TYPE_CHILD_DELETE 3
#define AUDIT_TYPE_CHILD_CREATE 4
#define AUDITSC_ARGS 6
struct filename;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define audit_n_rules 0
#define audit_signals 0
#define audit_enabled 0
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
