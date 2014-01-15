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
#ifndef _LINUX_FLAT_H
#define _LINUX_FLAT_H
#include <asm/flat.h>
#include <uapi/linux/flat.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <asm/byteorder.h>
#define OLD_FLAT_VERSION 0x00000002L
#define OLD_FLAT_RELOC_TYPE_TEXT 0
#define OLD_FLAT_RELOC_TYPE_DATA 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OLD_FLAT_RELOC_TYPE_BSS 2
typedef union {
 unsigned long value;
 struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#if defined(mc68000) && !defined(CONFIG_COLDFIRE)
 signed long offset : 30;
 unsigned long type : 2;
#define OLD_FLAT_FLAG_RAM 0x1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#elif defined(__BIG_ENDIAN_BITFIELD)
 unsigned long type : 2;
 signed long offset : 30;
#define OLD_FLAT_FLAG_RAM 0x1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#elif defined(__LITTLE_ENDIAN_BITFIELD)
 signed long offset : 30;
 unsigned long type : 2;
#define OLD_FLAT_FLAG_RAM 0x1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#else
#error "Unknown bitfield order for flat files."
#endif
 } reloc;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} flat_v2_reloc_t;
#endif
