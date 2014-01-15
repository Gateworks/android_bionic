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
#ifndef _LINUX_BINFMTS_H
#define _LINUX_BINFMTS_H
#include <linux/sched.h>
#include <linux/unistd.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <asm/exec.h>
#include <uapi/linux/binfmts.h>
#define CORENAME_MAX_SIZE 128
struct linux_binprm {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char buf[BINPRM_BUF_SIZE];
#define MAX_ARG_PAGES 32
 struct page *page[MAX_ARG_PAGES];
 struct mm_struct *mm;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long p;
 unsigned int
 cred_prepared:1,
 cap_effective:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifdef __alpha__
 unsigned int taso:1;
#endif
 unsigned int recursion_depth;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct file * file;
 struct cred *cred;
 int unsafe;
 unsigned int per_clear;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int argc, envc;
 const char * filename;
 const char * interp;
 unsigned interp_flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned interp_data;
 unsigned long loader, exec;
 char tcomm[TASK_COMM_LEN];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BINPRM_FLAGS_ENFORCE_NONDUMP_BIT 0
#define BINPRM_FLAGS_ENFORCE_NONDUMP (1 << BINPRM_FLAGS_ENFORCE_NONDUMP_BIT)
#define BINPRM_FLAGS_EXECFD_BIT 1
#define BINPRM_FLAGS_EXECFD (1 << BINPRM_FLAGS_EXECFD_BIT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct coredump_params {
 siginfo_t *siginfo;
 struct pt_regs *regs;
 struct file *file;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long limit;
 unsigned long mm_flags;
};
struct linux_binfmt {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct module *module;
 int (*load_binary)(struct linux_binprm *);
 int (*load_shlib)(struct file *);
 int (*core_dump)(struct coredump_params *cprm);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long min_coredump;
};
#define SUID_DUMP_DISABLE 0
#define SUID_DUMP_USER 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SUID_DUMP_ROOT 2
#define EXSTACK_DEFAULT 0
#define EXSTACK_DISABLE_X 1
#define EXSTACK_ENABLE_X 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
