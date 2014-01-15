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
#ifndef _LINUX_ELF_FDPIC_H
#define _LINUX_ELF_FDPIC_H
#include <uapi/linux/elf-fdpic.h>
struct elf_fdpic_params {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct elfhdr hdr;
 struct elf_phdr *phdrs;
 struct elf32_fdpic_loadmap *loadmap;
 unsigned long elfhdr_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long ph_addr;
 unsigned long map_addr;
 unsigned long entry_addr;
 unsigned long stack_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long dynamic_addr;
 unsigned long load_addr;
 unsigned long flags;
#define ELF_FDPIC_FLAG_ARRANGEMENT 0x0000000f
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ELF_FDPIC_FLAG_INDEPENDENT 0x00000000
#define ELF_FDPIC_FLAG_HONOURVADDR 0x00000001
#define ELF_FDPIC_FLAG_CONSTDISP 0x00000002
#define ELF_FDPIC_FLAG_CONTIGUOUS 0x00000003
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ELF_FDPIC_FLAG_EXEC_STACK 0x00000010
#define ELF_FDPIC_FLAG_NOEXEC_STACK 0x00000020
#define ELF_FDPIC_FLAG_EXECUTABLE 0x00000040
#define ELF_FDPIC_FLAG_PRESENT 0x80000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
