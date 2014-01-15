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
#ifndef _LINUX_PROC_NS_H
#define _LINUX_PROC_NS_H
struct pid_namespace;
struct nsproxy;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct proc_ns_operations {
 const char *name;
 int type;
 void *(*get)(struct task_struct *task);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*put)(void *ns);
 int (*install)(struct nsproxy *nsproxy, void *ns);
 unsigned int (*inum)(void *ns);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct proc_ns {
 void *ns;
 const struct proc_ns_operations *ns_ops;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
 PROC_ROOT_INO = 1,
 PROC_IPC_INIT_INO = 0xEFFFFFFFU,
 PROC_UTS_INIT_INO = 0xEFFFFFFEU,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PROC_USER_INIT_INO = 0xEFFFFFFDU,
 PROC_PID_INIT_INO = 0xEFFFFFFCU,
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
