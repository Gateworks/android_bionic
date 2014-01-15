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
#ifndef __ASM_ARM_MEMORY_H
#define __ASM_ARM_MEMORY_H
#include <linux/compiler.h>
#include <linux/const.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/types.h>
#include <linux/sizes.h>
#define UL(x) _AC(x, UL)
#ifndef TASK_SIZE
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TASK_SIZE (CONFIG_DRAM_SIZE)
#endif
#ifndef TASK_UNMAPPED_BASE
#define TASK_UNMAPPED_BASE UL(0x00000000)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef END_MEM
#define END_MEM (UL(CONFIG_DRAM_BASE) + CONFIG_DRAM_SIZE)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MODULES_END (END_MEM)
#define MODULES_VADDR (PHYS_OFFSET)
#define XIP_VIRT_ADDR(physaddr) (physaddr)
#define __phys_to_pfn(paddr) ((unsigned long)((paddr) >> PAGE_SHIFT))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __pfn_to_phys(pfn) ((phys_addr_t)(pfn) << PAGE_SHIFT)
#define page_to_phys(page) (__pfn_to_phys(page_to_pfn(page)))
#define phys_to_page(phys) (pfn_to_page(__phys_to_pfn(phys)))
#ifndef __ASSEMBLY__
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef __virt_to_phys
#define __virt_to_phys(x) ((x) - PAGE_OFFSET + PHYS_OFFSET)
#define __phys_to_virt(x) ((x) - PHYS_OFFSET + PAGE_OFFSET)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef __ASSEMBLY__
#define PHYS_PFN_OFFSET (PHYS_OFFSET >> PAGE_SHIFT)
#define __pa(x) __virt_to_phys((unsigned long)(x))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __va(x) ((void *)__phys_to_virt((unsigned long)(x)))
#define pfn_to_kaddr(pfn) __va((pfn) << PAGE_SHIFT)
#ifndef __virt_to_bus
#define __virt_to_bus __virt_to_phys
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __bus_to_virt __phys_to_virt
#define __pfn_to_bus(x) __pfn_to_phys(x)
#define __bus_to_pfn(x) __phys_to_pfn(x)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ARCH_PFN_OFFSET PHYS_PFN_OFFSET
#define virt_to_page(kaddr) pfn_to_page(__pa(kaddr) >> PAGE_SHIFT)
#define virt_addr_valid(kaddr) ((unsigned long)(kaddr) >= PAGE_OFFSET && (unsigned long)(kaddr) < (unsigned long)high_memory)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <asm-generic/memory_model.h>
#endif
