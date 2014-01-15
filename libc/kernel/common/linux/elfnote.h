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
#ifndef _LINUX_ELFNOTE_H
#define _LINUX_ELFNOTE_H
#ifdef __ASSEMBLER__
#define ELFNOTE_START(name, type, flags)  .pushsection .note.name, flags,@note ;   .balign 4 ;   .long 2f - 1f   ;   .long 4484f - 3f   ;   .long type ;  1:.asciz #name ;  2:.balign 4 ;  3:
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ELFNOTE_END  4484:.balign 4 ;  .popsection ;
#define ELFNOTE(name, type, desc)   ELFNOTE_START(name, type, "")   desc ;   ELFNOTE_END
#else
#include <linux/elf.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define _ELFNOTE_PASTE(a,b) a##b
#define _ELFNOTE(size, name, unique, type, desc)   static const struct {   struct elf##size##_note _nhdr;   unsigned char _name[sizeof(name)]   __attribute__((aligned(sizeof(Elf##size##_Word))));   typeof(desc) _desc   __attribute__((aligned(sizeof(Elf##size##_Word))));   } _ELFNOTE_PASTE(_note_, unique)   __used   __attribute__((section(".note." name),   aligned(sizeof(Elf##size##_Word)),   unused)) = {   {   sizeof(name),   sizeof(desc),   type,   },   name,   desc   }
#define ELFNOTE(size, name, type, desc)   _ELFNOTE(size, name, __LINE__, type, desc)
#define ELFNOTE32(name, type, desc) ELFNOTE(32, name, type, desc)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ELFNOTE64(name, type, desc) ELFNOTE(64, name, type, desc)
#endif
#endif
