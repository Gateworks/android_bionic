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
#ifndef _BCD_H
#define _BCD_H
#include <linux/compiler.h>
#define bcd2bin(x)   (__builtin_constant_p((u8 )(x)) ?   const_bcd2bin(x) :   _bcd2bin(x))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define bin2bcd(x)   (__builtin_constant_p((u8 )(x)) ?   const_bin2bcd(x) :   _bin2bcd(x))
#define const_bcd2bin(x) (((x) & 0x0f) + ((x) >> 4) * 10)
#define const_bin2bcd(x) ((((x) / 10) << 4) + (x) % 10)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
