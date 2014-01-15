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
#ifndef _LINUX_SIGNAL_H
#define _LINUX_SIGNAL_H
#include <linux/list.h>
#include <uapi/linux/signal.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct task_struct;
struct sigqueue {
 int flags;
 siginfo_t info;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct user_struct *user;
};
#define SIGQUEUE_PREALLOC 1
struct sigpending {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 sigset_t signal;
};
#ifndef __HAVE_ARCH_SIG_BITOPS
#include <linux/bitops.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define sigmask(sig) (1UL << ((sig) - 1))
#ifndef __HAVE_ARCH_SIG_SETOPS
#include <linux/string.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define _SIG_SET_BINOP(name, op)  static inline void name(sigset_t *r, const sigset_t *a, const sigset_t *b)  {   extern void _NSIG_WORDS_is_unsupported_size(void);   unsigned long a0, a1, a2, a3, b0, b1, b2, b3;     switch (_NSIG_WORDS) {   case 4:   a3 = a->sig[3]; a2 = a->sig[2];   b3 = b->sig[3]; b2 = b->sig[2];   r->sig[3] = op(a3, b3);   r->sig[2] = op(a2, b2);   case 2:   a1 = a->sig[1]; b1 = b->sig[1];   r->sig[1] = op(a1, b1);   case 1:   a0 = a->sig[0]; b0 = b->sig[0];   r->sig[0] = op(a0, b0);   break;   default:   _NSIG_WORDS_is_unsupported_size();   }  }
#define _sig_or(x,y) ((x) | (y))
#define _sig_and(x,y) ((x) & (y))
#define _sig_andn(x,y) ((x) & ~(y))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#undef _SIG_SET_BINOP
#undef _sig_or
#undef _sig_and
#undef _sig_andn
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define _SIG_SET_OP(name, op)  static inline void name(sigset_t *set)  {   extern void _NSIG_WORDS_is_unsupported_size(void);     switch (_NSIG_WORDS) {   case 4: set->sig[3] = op(set->sig[3]);   set->sig[2] = op(set->sig[2]);   case 2: set->sig[1] = op(set->sig[1]);   case 1: set->sig[0] = op(set->sig[0]);   break;   default:   _NSIG_WORDS_is_unsupported_size();   }  }
#define _sig_not(x) (~(x))
#undef _SIG_SET_OP
#undef _sig_not
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
struct timespec;
struct pt_regs;
struct k_sigaction {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct sigaction sa;
#ifdef __ARCH_HAS_KA_RESTORER
 __sigrestore_t ka_restorer;
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct ksignal {
 struct k_sigaction ka;
 siginfo_t info;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int sig;
};
#define get_signal(ksig)  ({   struct ksignal *p = (ksig);   p->sig = get_signal_to_deliver(&p->info, &p->ka,   signal_pt_regs(), NULL);  p->sig > 0;  })
#ifdef SIGEMT
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SIGEMT_MASK rt_sigmask(SIGEMT)
#else
#define SIGEMT_MASK 0
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#if SIGRTMIN > BITS_PER_LONG
#define rt_sigmask(sig) (1ULL << ((sig)-1))
#else
#define rt_sigmask(sig) sigmask(sig)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define siginmask(sig, mask) (rt_sigmask(sig) & (mask))
#define SIG_KERNEL_ONLY_MASK (  rt_sigmask(SIGKILL) | rt_sigmask(SIGSTOP))
#define SIG_KERNEL_STOP_MASK (  rt_sigmask(SIGSTOP) | rt_sigmask(SIGTSTP) |   rt_sigmask(SIGTTIN) | rt_sigmask(SIGTTOU) )
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SIG_KERNEL_COREDUMP_MASK (  rt_sigmask(SIGQUIT) | rt_sigmask(SIGILL) |   rt_sigmask(SIGTRAP) | rt_sigmask(SIGABRT) |   rt_sigmask(SIGFPE) | rt_sigmask(SIGSEGV) |   rt_sigmask(SIGBUS) | rt_sigmask(SIGSYS) |   rt_sigmask(SIGXCPU) | rt_sigmask(SIGXFSZ) |   SIGEMT_MASK )
#define SIG_KERNEL_IGNORE_MASK (  rt_sigmask(SIGCONT) | rt_sigmask(SIGCHLD) |   rt_sigmask(SIGWINCH) | rt_sigmask(SIGURG) )
#define sig_kernel_only(sig)   (((sig) < SIGRTMIN) && siginmask(sig, SIG_KERNEL_ONLY_MASK))
#define sig_kernel_coredump(sig)   (((sig) < SIGRTMIN) && siginmask(sig, SIG_KERNEL_COREDUMP_MASK))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define sig_kernel_ignore(sig)   (((sig) < SIGRTMIN) && siginmask(sig, SIG_KERNEL_IGNORE_MASK))
#define sig_kernel_stop(sig)   (((sig) < SIGRTMIN) && siginmask(sig, SIG_KERNEL_STOP_MASK))
#define sig_user_defined(t, signr)   (((t)->sighand->action[(signr)-1].sa.sa_handler != SIG_DFL) &&   ((t)->sighand->action[(signr)-1].sa.sa_handler != SIG_IGN))
#define sig_fatal(t, signr)   (!siginmask(signr, SIG_KERNEL_IGNORE_MASK|SIG_KERNEL_STOP_MASK) &&   (t)->sighand->action[(signr)-1].sa.sa_handler == SIG_DFL)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define save_altstack_ex(uss, sp) do {   stack_t __user *__uss = uss;   struct task_struct *t = current;   put_user_ex((void __user *)t->sas_ss_sp, &__uss->ss_sp);   put_user_ex(sas_ss_flags(sp), &__uss->ss_flags);   put_user_ex(t->sas_ss_size, &__uss->ss_size);  } while (0);
#endif
