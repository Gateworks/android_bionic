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
#define __LINUX_COMPILER_H
#ifndef __ASSEMBLY__
#define __user
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __kernel
#define __safe
#define __force
#define __nocast
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __iomem
#define __chk_user_ptr(x) (void)0
#define __chk_io_ptr(x) (void)0
#define __builtin_warning(x, y...) (1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __must_hold(x)
#define __acquires(x)
#define __releases(x)
#define __acquire(x) (void)0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __release(x) (void)0
#define __cond_lock(x,c) (c)
#define __percpu
#define __rcu
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ___PASTE(a,b) a##b
#define __PASTE(a,b) ___PASTE(a,b)
#endif
#ifndef __attribute_const__
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __attribute_const__
#endif
#ifndef __cold
#define __cold
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef __section
#define __section(S) __attribute__ ((__section__(#S)))
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef __visible
#define __visible
#endif
#ifndef __same_type
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __same_type(a, b) __builtin_types_compatible_p(typeof(a), typeof(b))
#endif
#ifndef __compiletime_object_size
#define __compiletime_object_size(obj) -1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef __compiletime_warning
#define __compiletime_warning(message)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef __compiletime_error
#define __compiletime_error(message)
#define __compiletime_error_fallback(condition)   do { ((void)sizeof(char[1 - 2 * condition])); } while (0)
#else
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __compiletime_error_fallback(condition) do { } while (0)
#endif
#define __compiletime_assert(condition, msg, prefix, suffix)   do {   bool __cond = !(condition);   extern void prefix ## suffix(void) __compiletime_error(msg);   if (__cond)   prefix ## suffix();   __compiletime_error_fallback(__cond);   } while (0)
#define _compiletime_assert(condition, msg, prefix, suffix)   __compiletime_assert(condition, msg, prefix, suffix)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define compiletime_assert(condition, msg)   _compiletime_assert(condition, msg, __compiletime_assert_, __LINE__)
#define ACCESS_ONCE(x) (*(volatile typeof(x) *)&(x))
#define __kprobes
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
