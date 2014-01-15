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
#ifndef _LINUX_ELF_H
#define _LINUX_ELF_H
#include <asm/elf.h>
#include <uapi/linux/elf.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef elf_read_implies_exec
#define elf_read_implies_exec(ex, have_pt_gnu_stack) 0
#endif
#ifndef SET_PERSONALITY
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SET_PERSONALITY(ex)   set_personality(PER_LINUX | (current->personality & (~PER_MASK)))
#endif
#if ELF_CLASS == ELFCLASS32
#define elfhdr elf32_hdr
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define elf_phdr elf32_phdr
#define elf_shdr elf32_shdr
#define elf_note elf32_note
#define elf_addr_t Elf32_Off
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define Elf_Half Elf32_Half
#else
#define elfhdr elf64_hdr
#define elf_phdr elf64_phdr
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define elf_shdr elf64_shdr
#define elf_note elf64_note
#define elf_addr_t Elf64_Off
#define Elf_Half Elf64_Half
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
struct file;
#ifndef ARCH_HAVE_EXTRA_ELF_NOTES
#else
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#endif
