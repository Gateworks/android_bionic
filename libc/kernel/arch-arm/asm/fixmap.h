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
#ifndef _ASM_FIXMAP_H
#define _ASM_FIXMAP_H
#define FIXADDR_START 0xfff00000UL
#define FIXADDR_TOP 0xfffe0000UL
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FIXADDR_SIZE (FIXADDR_TOP - FIXADDR_START)
#define FIX_KMAP_BEGIN 0
#define FIX_KMAP_END (FIXADDR_SIZE >> PAGE_SHIFT)
#define __fix_to_virt(x) (FIXADDR_START + ((x) << PAGE_SHIFT))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __virt_to_fix(x) (((x) - FIXADDR_START) >> PAGE_SHIFT)
#endif
