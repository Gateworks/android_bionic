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
#ifndef __ASMARM_SETUP_H
#define __ASMARM_SETUP_H
#include <uapi/asm/setup.h>
#define __tag __used __attribute__((__section__(".taglist.init")))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __tagtable(tag, fn)  static const struct tagtable __tagtable_##fn __tag = { tag, fn }
#define NR_BANKS CONFIG_ARM_NR_BANKS
struct membank {
 phys_addr_t start;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 phys_addr_t size;
 unsigned int highmem;
};
struct meminfo {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int nr_banks;
 struct membank bank[NR_BANKS];
};
#define for_each_bank(iter,mi)   for (iter = 0; iter < (mi)->nr_banks; iter++)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define bank_pfn_start(bank) __phys_to_pfn((bank)->start)
#define bank_pfn_end(bank) __phys_to_pfn((bank)->start + (bank)->size)
#define bank_pfn_size(bank) ((bank)->size >> PAGE_SHIFT)
#define bank_phys_start(bank) (bank)->start
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define bank_phys_end(bank) ((bank)->start + (bank)->size)
#define bank_phys_size(bank) (bank)->size
#endif
