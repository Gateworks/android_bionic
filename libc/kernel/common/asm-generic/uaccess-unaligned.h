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
#ifndef __ASM_GENERIC_UACCESS_UNALIGNED_H
#define __ASM_GENERIC_UACCESS_UNALIGNED_H
#define __get_user_unaligned(x, ptr)  ({   __typeof__ (*(ptr)) __x;   __copy_from_user(&__x, (ptr), sizeof(*(ptr))) ? -EFAULT : 0;   (x) = __x;  })
#define __put_user_unaligned(x, ptr)  ({   __typeof__ (*(ptr)) __x = (x);   __copy_to_user((ptr), &__x, sizeof(*(ptr))) ? -EFAULT : 0;  })
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
