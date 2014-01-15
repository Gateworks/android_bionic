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
#ifndef _ASM_GENERIC_TERMIOS_BASE_H
#define _ASM_GENERIC_TERMIOS_BASE_H
#include <asm/uaccess.h>
#ifndef __ARCH_TERMIO_GETPUT
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef user_termios_to_kernel_termios
#define user_termios_to_kernel_termios(k, u) copy_from_user(k, u, sizeof(struct termios))
#endif
#ifndef kernel_termios_to_user_termios
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define kernel_termios_to_user_termios(u, k) copy_to_user(u, k, sizeof(struct termios))
#endif
#define user_termios_to_kernel_termios_1(k, u) copy_from_user(k, u, sizeof(struct termios))
#define kernel_termios_to_user_termios_1(u, k) copy_to_user(u, k, sizeof(struct termios))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#endif
