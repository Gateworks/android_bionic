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
#ifndef _LINUX_PID_H
#define _LINUX_PID_H
#include <linux/rcupdate.h>
enum pid_type
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
{
 PIDTYPE_PID,
 PIDTYPE_PGID,
 PIDTYPE_SID,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PIDTYPE_MAX
};
struct upid {
 int nr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct pid_namespace *ns;
};
struct pid
{
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 atomic_t count;
 unsigned int level;
 struct rcu_head rcu;
 struct upid numbers[1];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct pid_link
{
 struct pid *pid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct pid_namespace;
#define do_each_pid_task(pid, type, task)   do {   if ((pid) != NULL)   hlist_for_each_entry_rcu((task),   &(pid)->tasks[type], pids[type].node) {
#define while_each_pid_task(pid, type, task)   if (type == PIDTYPE_PID)   break;   }   } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define do_each_pid_thread(pid, type, task)   do_each_pid_task(pid, type, task) {   struct task_struct *tg___ = task;   do {
#define while_each_pid_thread(pid, type, task)   } while_each_thread(tg___, task);   task = tg___;   } while_each_pid_task(pid, type, task)
#endif
