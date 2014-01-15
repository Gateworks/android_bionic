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
#ifndef _ARM_KPROBES_H
#define _ARM_KPROBES_H
#include <linux/types.h>
#include <linux/ptrace.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/percpu.h>
#define __ARCH_WANT_KPROBES_INSN_SLOT
#define MAX_INSN_SIZE 2
#define MAX_STACK_SIZE 64
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define flush_insn_slot(p) do { } while (0)
#define kretprobe_blacklist_size 0
typedef u32 kprobe_opcode_t;
struct kprobe;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef void (kprobe_insn_handler_t)(struct kprobe *, struct pt_regs *);
typedef unsigned long (kprobe_check_cc)(unsigned long);
typedef void (kprobe_insn_singlestep_t)(struct kprobe *, struct pt_regs *);
typedef void (kprobe_insn_fn_t)(void);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct arch_specific_insn {
 kprobe_opcode_t *insn;
 kprobe_insn_handler_t *insn_handler;
 kprobe_check_cc *insn_check_cc;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 kprobe_insn_singlestep_t *insn_singlestep;
 kprobe_insn_fn_t *insn_fn;
};
struct prev_kprobe {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct kprobe *kp;
 unsigned int status;
};
struct kprobe_ctlblk {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int kprobe_status;
 struct prev_kprobe prev_kprobe;
 struct pt_regs jprobe_saved_regs;
 char jprobes_stack[MAX_STACK_SIZE];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
