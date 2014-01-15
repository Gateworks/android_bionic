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
#ifndef _LINUX_SYSCTL_H
#define _LINUX_SYSCTL_H
#include <linux/list.h>
#include <linux/rcupdate.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/wait.h>
#include <uapi/linux/sysctl.h>
struct ctl_table;
struct nsproxy;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ctl_table_root;
struct ctl_table_header;
struct ctl_dir;
typedef struct ctl_table ctl_table;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef int proc_handler (struct ctl_table *ctl, int write,
 void __user *buffer, size_t *lenp, loff_t *ppos);
struct ctl_table_poll {
 atomic_t event;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 wait_queue_head_t wait;
};
#define __CTL_TABLE_POLL_INITIALIZER(name) {   .event = ATOMIC_INIT(0),   .wait = __WAIT_QUEUE_HEAD_INITIALIZER(name.wait) }
#define DEFINE_CTL_TABLE_POLL(name)   struct ctl_table_poll name = __CTL_TABLE_POLL_INITIALIZER(name)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ctl_table
{
 const char *procname;
 void *data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int maxlen;
 umode_t mode;
 struct ctl_table *child;
 struct ctl_table_poll *poll;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *extra1;
 void *extra2;
};
struct ctl_node {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct ctl_table_header *header;
};
struct ctl_table_header
{
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 union {
 struct {
 struct ctl_table *ctl_table;
 int used;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int count;
 int nreg;
 };
 struct rcu_head rcu;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 };
 struct completion *unregistering;
 struct ctl_table *ctl_table_arg;
 struct ctl_table_root *root;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct ctl_table_set *set;
 struct ctl_dir *parent;
 struct ctl_node *node;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ctl_dir {
 struct ctl_table_header header;
};
struct ctl_table_set {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*is_seen)(struct ctl_table_set *);
 struct ctl_dir dir;
};
struct ctl_table_root {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct ctl_table_set default_set;
 struct ctl_table_set *(*lookup)(struct ctl_table_root *root,
 struct nsproxy *namespaces);
 int (*permissions)(struct ctl_table_header *head, struct ctl_table *table);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct ctl_path {
 const char *procname;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
