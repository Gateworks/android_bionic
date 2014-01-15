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
#ifndef __ASM_GENERIC_UACCESS_H
#define __ASM_GENERIC_UACCESS_H
#include <linux/sched.h>
#include <linux/string.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <asm/segment.h>
#define MAKE_MM_SEG(s) ((mm_segment_t) { (s) })
#ifndef KERNEL_DS
#define KERNEL_DS MAKE_MM_SEG(~0UL)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef USER_DS
#define USER_DS MAKE_MM_SEG(TASK_SIZE - 1)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef get_fs
#define get_ds() (KERNEL_DS)
#define get_fs() (current_thread_info()->addr_limit)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef segment_eq
#define segment_eq(a, b) ((a).seg == (b).seg)
#endif
#define VERIFY_READ 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VERIFY_WRITE 1
#define access_ok(type, addr, size) __access_ok((unsigned long)(addr),(size))
#ifndef __access_ok
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct exception_table_entry
{
 unsigned long insn, fixup;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef __copy_from_user
#endif
#ifndef __copy_to_user
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __put_user(x, ptr)  ({   __typeof__(*(ptr)) __x = (x);   int __pu_err = -EFAULT;   __chk_user_ptr(ptr);   switch (sizeof (*(ptr))) {   case 1:   case 2:   case 4:   case 8:   __pu_err = __put_user_fn(sizeof (*(ptr)),   ptr, &__x);   break;   default:   __put_user_bad();   break;   }   __pu_err;  })
#define put_user(x, ptr)  ({   might_sleep();   access_ok(VERIFY_WRITE, ptr, sizeof(*ptr)) ?   __put_user(x, ptr) :   -EFAULT;  })
#ifndef __put_user_fn
#define __put_user_fn(sz, u, k) __put_user_fn(sz, u, k)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define __get_user(x, ptr)  ({   int __gu_err = -EFAULT;   __chk_user_ptr(ptr);   switch (sizeof(*(ptr))) {   case 1: {   unsigned char __x;   __gu_err = __get_user_fn(sizeof (*(ptr)),   ptr, &__x);   (x) = *(__force __typeof__(*(ptr)) *) &__x;   break;   };   case 2: {   unsigned short __x;   __gu_err = __get_user_fn(sizeof (*(ptr)),   ptr, &__x);   (x) = *(__force __typeof__(*(ptr)) *) &__x;   break;   };   case 4: {   unsigned int __x;   __gu_err = __get_user_fn(sizeof (*(ptr)),   ptr, &__x);   (x) = *(__force __typeof__(*(ptr)) *) &__x;   break;   };   case 8: {   unsigned long long __x;   __gu_err = __get_user_fn(sizeof (*(ptr)),   ptr, &__x);   (x) = *(__force __typeof__(*(ptr)) *) &__x;   break;   };   default:   __get_user_bad();   break;   }   __gu_err;  })
#define get_user(x, ptr)  ({   might_sleep();   access_ok(VERIFY_READ, ptr, sizeof(*ptr)) ?   __get_user(x, ptr) :   -EFAULT;  })
#ifndef __get_user_fn
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __get_user_fn(sz, u, k) __get_user_fn(sz, u, k)
#endif
#ifndef __copy_from_user_inatomic
#define __copy_from_user_inatomic __copy_from_user
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef __copy_to_user_inatomic
#define __copy_to_user_inatomic __copy_to_user
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef __strncpy_from_user
#endif
#ifndef __strnlen_user
#define __strnlen_user(s, n) (strnlen((s), (n)) + 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef __clear_user
#endif
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
