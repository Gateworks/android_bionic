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
#ifndef __LINUX_COMPILER_H
#error "Please don't include <linux/compiler-gcc.h> directly, include <linux/compiler.h> instead."
#endif
#define GCC_VERSION (__GNUC__ * 10000   + __GNUC_MINOR__ * 100   + __GNUC_PATCHLEVEL__)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define barrier() __asm__ __volatile__("": : :"memory")
#define RELOC_HIDE(ptr, off)   ({ unsigned long __ptr;   __asm__ ("" : "=r"(__ptr) : "0"(ptr));   (typeof(ptr)) (__ptr + (off)); })
#define __must_be_array(a) BUILD_BUG_ON_ZERO(__same_type((a), &(a)[0]))
#define inline inline __attribute__((always_inline)) notrace
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __inline__ __inline__ __attribute__((always_inline)) notrace
#define __inline __inline __attribute__((always_inline)) notrace
#define __deprecated __attribute__((deprecated))
#define __packed __attribute__((packed))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __weak __attribute__((weak))
#define __naked __attribute__((naked)) noinline __noclone notrace
#define __noreturn __attribute__((noreturn))
#define __pure __attribute__((pure))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __aligned(x) __attribute__((aligned(x)))
#define __printf(a, b) __attribute__((format(printf, a, b)))
#define __scanf(a, b) __attribute__((format(scanf, a, b)))
#define noinline __attribute__((noinline))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __attribute_const__ __attribute__((__const__))
#define __maybe_unused __attribute__((unused))
#define __always_unused __attribute__((unused))
#define __gcc_header(x) #x
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define _gcc_header(x) __gcc_header(linux/compiler-gcc##x.h)
#define gcc_header(x) _gcc_header(x)
#include gcc_header(__GNUC__)
#ifndef __noclone
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __noclone
#endif
#define uninitialized_var(x) x = x
#define __always_inline inline __attribute__((always_inline))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
