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
#ifndef _LINUX_FCNTL_H
#define _LINUX_FCNTL_H
#include <uapi/linux/fcntl.h>
#ifndef force_o_largefile
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define force_o_largefile() (BITS_PER_LONG != 32)
#endif
#if BITS_PER_LONG == 32
#define IS_GETLK32(cmd) ((cmd) == F_GETLK)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IS_SETLK32(cmd) ((cmd) == F_SETLK)
#define IS_SETLKW32(cmd) ((cmd) == F_SETLKW)
#define IS_GETLK64(cmd) ((cmd) == F_GETLK64)
#define IS_SETLK64(cmd) ((cmd) == F_SETLK64)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IS_SETLKW64(cmd) ((cmd) == F_SETLKW64)
#else
#define IS_GETLK32(cmd) (0)
#define IS_SETLK32(cmd) (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IS_SETLKW32(cmd) (0)
#define IS_GETLK64(cmd) ((cmd) == F_GETLK)
#define IS_SETLK64(cmd) ((cmd) == F_SETLK)
#define IS_SETLKW64(cmd) ((cmd) == F_SETLKW)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define IS_GETLK(cmd) (IS_GETLK32(cmd) || IS_GETLK64(cmd))
#define IS_SETLK(cmd) (IS_SETLK32(cmd) || IS_SETLK64(cmd))
#define IS_SETLKW(cmd) (IS_SETLKW32(cmd) || IS_SETLKW64(cmd))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
