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
#ifndef __IPC_NAMESPACE_H__
#define __IPC_NAMESPACE_H__
#include <linux/err.h>
#include <linux/idr.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/rwsem.h>
#include <linux/notifier.h>
#include <linux/nsproxy.h>
#define IPCNS_MEMCHANGED 0x00000001
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IPCNS_CREATED 0x00000002
#define IPCNS_REMOVED 0x00000003
#define IPCNS_CALLBACK_PRI 0
struct user_namespace;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ipc_ids {
 int in_use;
 unsigned short seq;
 unsigned short seq_max;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct rw_semaphore rwsem;
 struct idr ipcs_idr;
 int next_id;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ipc_namespace {
 atomic_t count;
 struct ipc_ids ids[3];
 int sem_ctls[4];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int used_sems;
 int msg_ctlmax;
 int msg_ctlmnb;
 int msg_ctlmni;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 atomic_t msg_bytes;
 atomic_t msg_hdrs;
 int auto_msgmni;
 size_t shm_ctlmax;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 size_t shm_ctlall;
 unsigned long shm_tot;
 int shm_ctlmni;
 int shm_rmid_forced;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct notifier_block ipcns_nb;
 struct vfsmount *mq_mnt;
 unsigned int mq_queues_count;
 unsigned int mq_queues_max;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int mq_msg_max;
 unsigned int mq_msgsize_max;
 unsigned int mq_msg_default;
 unsigned int mq_msgsize_default;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct user_namespace *user_ns;
 unsigned int proc_inum;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
