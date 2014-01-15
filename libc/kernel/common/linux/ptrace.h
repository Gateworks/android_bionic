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
#ifndef _LINUX_PTRACE_H
#define _LINUX_PTRACE_H
#include <linux/compiler.h>
#include <linux/sched.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/err.h>
#include <linux/bug.h>
#include <uapi/linux/ptrace.h>
#define PT_SEIZED 0x00010000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PT_PTRACED 0x00000001
#define PT_DTRACE 0x00000002
#define PT_PTRACE_CAP 0x00000004
#define PT_OPT_FLAG_SHIFT 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PT_EVENT_FLAG(event) (1 << (PT_OPT_FLAG_SHIFT + (event)))
#define PT_TRACESYSGOOD PT_EVENT_FLAG(0)
#define PT_TRACE_FORK PT_EVENT_FLAG(PTRACE_EVENT_FORK)
#define PT_TRACE_VFORK PT_EVENT_FLAG(PTRACE_EVENT_VFORK)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PT_TRACE_CLONE PT_EVENT_FLAG(PTRACE_EVENT_CLONE)
#define PT_TRACE_EXEC PT_EVENT_FLAG(PTRACE_EVENT_EXEC)
#define PT_TRACE_VFORK_DONE PT_EVENT_FLAG(PTRACE_EVENT_VFORK_DONE)
#define PT_TRACE_EXIT PT_EVENT_FLAG(PTRACE_EVENT_EXIT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PT_TRACE_SECCOMP PT_EVENT_FLAG(PTRACE_EVENT_SECCOMP)
#define PT_EXITKILL (PTRACE_O_EXITKILL << PT_OPT_FLAG_SHIFT)
#define PT_SINGLESTEP_BIT 31
#define PT_SINGLESTEP (1<<PT_SINGLESTEP_BIT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PT_BLOCKSTEP_BIT 30
#define PT_BLOCKSTEP (1<<PT_BLOCKSTEP_BIT)
#define PTRACE_MODE_READ 0x01
#define PTRACE_MODE_ATTACH 0x02
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PTRACE_MODE_NOAUDIT 0x04
#ifndef force_successful_syscall_return
#define force_successful_syscall_return() do { } while (0)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef is_syscall_success
#define is_syscall_success(regs) (!IS_ERR_VALUE((unsigned long)(regs_return_value(regs))))
#endif
#ifndef arch_has_single_step
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define arch_has_single_step() (0)
#else
#endif
#ifndef arch_has_block_step
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define arch_has_block_step() (0)
#else
#endif
#ifdef ARCH_HAS_USER_SINGLE_STEP_INFO
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#else
#endif
#ifndef arch_ptrace_stop_needed
#define arch_ptrace_stop_needed(code, info) (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef arch_ptrace_stop
#define arch_ptrace_stop(code, info) do { } while (0)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef current_pt_regs
#define current_pt_regs() task_pt_regs(current)
#endif
#ifndef ptrace_signal_deliver
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ptrace_signal_deliver() ((void)0)
#endif
#ifndef signal_pt_regs
#define signal_pt_regs() task_pt_regs(current)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef current_user_stack_pointer
#define current_user_stack_pointer() user_stack_pointer(current_pt_regs())
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
