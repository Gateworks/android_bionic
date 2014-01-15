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
#ifndef _LINUX_ELFCORE_COMPAT_H
#define _LINUX_ELFCORE_COMPAT_H
#include <linux/elf.h>
#include <linux/elfcore.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/compat.h>
struct compat_elf_siginfo
{
 compat_int_t si_signo;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 compat_int_t si_code;
 compat_int_t si_errno;
};
struct compat_elf_prstatus
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
{
 struct compat_elf_siginfo pr_info;
 short pr_cursig;
 compat_ulong_t pr_sigpend;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 compat_ulong_t pr_sighold;
 compat_pid_t pr_pid;
 compat_pid_t pr_ppid;
 compat_pid_t pr_pgrp;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 compat_pid_t pr_sid;
 struct compat_timeval pr_utime;
 struct compat_timeval pr_stime;
 struct compat_timeval pr_cutime;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct compat_timeval pr_cstime;
 compat_elf_gregset_t pr_reg;
 compat_int_t pr_fpvalid;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct compat_elf_prpsinfo
{
 char pr_state;
 char pr_sname;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char pr_zomb;
 char pr_nice;
 compat_ulong_t pr_flag;
 __compat_uid_t pr_uid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __compat_gid_t pr_gid;
 compat_pid_t pr_pid, pr_ppid, pr_pgrp, pr_sid;
 char pr_fname[16];
 char pr_psargs[ELF_PRARGSZ];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
