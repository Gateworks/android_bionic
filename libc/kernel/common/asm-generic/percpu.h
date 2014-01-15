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
#ifndef _ASM_GENERIC_PERCPU_H_
#define _ASM_GENERIC_PERCPU_H_
#include <linux/compiler.h>
#include <linux/threads.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/percpu-defs.h>
#define VERIFY_PERCPU_PTR(__p) ({   __verify_pcpu_ptr((__p));   (typeof(*(__p)) __kernel __force *)(__p);  })
#define per_cpu(var, cpu) (*((void)(cpu), VERIFY_PERCPU_PTR(&(var))))
#define __get_cpu_var(var) (*VERIFY_PERCPU_PTR(&(var)))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __raw_get_cpu_var(var) (*VERIFY_PERCPU_PTR(&(var)))
#define this_cpu_ptr(ptr) per_cpu_ptr(ptr, 0)
#define __this_cpu_ptr(ptr) this_cpu_ptr(ptr)
#ifndef PER_CPU_BASE_SECTION
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PER_CPU_BASE_SECTION ".data"
#endif
#define PER_CPU_SHARED_ALIGNED_SECTION ""
#define PER_CPU_ALIGNED_SECTION "..shared_aligned"
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PER_CPU_FIRST_SECTION ""
#ifndef PER_CPU_ATTRIBUTES
#define PER_CPU_ATTRIBUTES
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef PER_CPU_DEF_ATTRIBUTES
#define PER_CPU_DEF_ATTRIBUTES
#endif
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
