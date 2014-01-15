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
#ifndef __ARM_FLAT_H__
#define __ARM_FLAT_H__
#define flat_argvp_envp_on_stack() 1
#define flat_old_ram_flag(flags) (flags)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define flat_reloc_valid(reloc, size) ((reloc) <= (size))
#define flat_get_addr_from_rp(rp, relval, flags, persistent) ((void)persistent,get_unaligned(rp))
#define flat_put_addr_at_rp(rp, val, relval) put_unaligned(val,rp)
#define flat_get_relocate_addr(rel) (rel)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define flat_set_persistent(relval, p) 0
#endif
