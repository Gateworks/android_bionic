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
#ifndef _LINUX_SHM_H_
#define _LINUX_SHM_H_
#include <asm/page.h>
#include <uapi/linux/shm.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SHMALL (SHMMAX/PAGE_SIZE*(SHMMNI/16))
#include <asm/shmparam.h>
struct shmid_kernel
{
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct kern_ipc_perm shm_perm;
 struct file * shm_file;
 unsigned long shm_nattch;
 unsigned long shm_segsz;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 time_t shm_atim;
 time_t shm_dtim;
 time_t shm_ctim;
 pid_t shm_cprid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 pid_t shm_lprid;
 struct user_struct *mlock_user;
 struct task_struct *shm_creator;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SHM_DEST 01000
#define SHM_LOCKED 02000
#define SHM_HUGETLB 04000
#define SHM_NORESERVE 010000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SHM_HUGE_SHIFT 26
#define SHM_HUGE_MASK 0x3f
#define SHM_HUGE_2MB (21 << SHM_HUGE_SHIFT)
#define SHM_HUGE_1GB (30 << SHM_HUGE_SHIFT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
