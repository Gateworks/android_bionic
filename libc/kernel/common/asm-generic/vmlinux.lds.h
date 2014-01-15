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
#ifndef LOAD_OFFSET
#define LOAD_OFFSET 0
#endif
#include <linux/export.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ALIGN_FUNCTION() . = ALIGN(8)
#define STRUCT_ALIGNMENT 32
#define STRUCT_ALIGN() . = ALIGN(STRUCT_ALIGNMENT)
#define DEV_KEEP(sec)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DEV_DISCARD(sec) *(.dev##sec)
#define CPU_KEEP(sec)
#define CPU_DISCARD(sec) *(.cpu##sec)
#define MEM_KEEP(sec)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MEM_DISCARD(sec) *(.mem##sec)
#define MCOUNT_REC()
#define LIKELY_PROFILE()
#define BRANCH_PROFILE()
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FTRACE_EVENTS()
#define TRACE_PRINTKS()
#define TRACE_SYSCALLS()
#define CLKSRC_OF_TABLES()
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IRQCHIP_OF_MATCH_TABLE()
#define CLK_OF_TABLES()
#define KERNEL_DTB()   STRUCT_ALIGN();   VMLINUX_SYMBOL(__dtb_start) = .;   *(.dtb.init.rodata)   VMLINUX_SYMBOL(__dtb_end) = .;
#define DATA_DATA   *(.data)   *(.ref.data)   *(.data..shared_aligned)     DEV_KEEP(init.data)   DEV_KEEP(exit.data)   CPU_KEEP(init.data)   CPU_KEEP(exit.data)   MEM_KEEP(init.data)   MEM_KEEP(exit.data)   *(.data.unlikely)   STRUCT_ALIGN();   *(__tracepoints)       . = ALIGN(8);   VMLINUX_SYMBOL(__start___jump_table) = .;   *(__jump_table)   VMLINUX_SYMBOL(__stop___jump_table) = .;   . = ALIGN(8);   VMLINUX_SYMBOL(__start___verbose) = .;   *(__verbose)   VMLINUX_SYMBOL(__stop___verbose) = .;   LIKELY_PROFILE()   BRANCH_PROFILE()   TRACE_PRINTKS()
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NOSAVE_DATA   . = ALIGN(PAGE_SIZE);   VMLINUX_SYMBOL(__nosave_begin) = .;   *(.data..nosave)   . = ALIGN(PAGE_SIZE);   VMLINUX_SYMBOL(__nosave_end) = .;
#define PAGE_ALIGNED_DATA(page_align)   . = ALIGN(page_align);   *(.data..page_aligned)
#define READ_MOSTLY_DATA(align)   . = ALIGN(align);   *(.data..read_mostly)   . = ALIGN(align);
#define CACHELINE_ALIGNED_DATA(align)   . = ALIGN(align);   *(.data..cacheline_aligned)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define INIT_TASK_DATA(align)   . = ALIGN(align);   *(.data..init_task)
#define RO_DATA_SECTION(align)   . = ALIGN((align));   .rodata : AT(ADDR(.rodata) - LOAD_OFFSET) {   VMLINUX_SYMBOL(__start_rodata) = .;   *(.rodata) *(.rodata.*)   *(__vermagic)     . = ALIGN(8);   VMLINUX_SYMBOL(__start___tracepoints_ptrs) = .;   *(__tracepoints_ptrs)    VMLINUX_SYMBOL(__stop___tracepoints_ptrs) = .;   *(__tracepoints_strings)    }     .rodata1 : AT(ADDR(.rodata1) - LOAD_OFFSET) {   *(.rodata1)   }     BUG_TABLE         .pci_fixup : AT(ADDR(.pci_fixup) - LOAD_OFFSET) {   VMLINUX_SYMBOL(__start_pci_fixups_early) = .;   *(.pci_fixup_early)   VMLINUX_SYMBOL(__end_pci_fixups_early) = .;   VMLINUX_SYMBOL(__start_pci_fixups_header) = .;   *(.pci_fixup_header)   VMLINUX_SYMBOL(__end_pci_fixups_header) = .;   VMLINUX_SYMBOL(__start_pci_fixups_final) = .;   *(.pci_fixup_final)   VMLINUX_SYMBOL(__end_pci_fixups_final) = .;   VMLINUX_SYMBOL(__start_pci_fixups_enable) = .;   *(.pci_fixup_enable)   VMLINUX_SYMBOL(__end_pci_fixups_enable) = .;   VMLINUX_SYMBOL(__start_pci_fixups_resume) = .;   *(.pci_fixup_resume)   VMLINUX_SYMBOL(__end_pci_fixups_resume) = .;   VMLINUX_SYMBOL(__start_pci_fixups_resume_early) = .;   *(.pci_fixup_resume_early)   VMLINUX_SYMBOL(__end_pci_fixups_resume_early) = .;   VMLINUX_SYMBOL(__start_pci_fixups_suspend) = .;   *(.pci_fixup_suspend)   VMLINUX_SYMBOL(__end_pci_fixups_suspend) = .;   }         .builtin_fw : AT(ADDR(.builtin_fw) - LOAD_OFFSET) {   VMLINUX_SYMBOL(__start_builtin_fw) = .;   *(.builtin_fw)   VMLINUX_SYMBOL(__end_builtin_fw) = .;   }         .rio_ops : AT(ADDR(.rio_ops) - LOAD_OFFSET) {   VMLINUX_SYMBOL(__start_rio_switch_ops) = .;   *(.rio_switch_ops)   VMLINUX_SYMBOL(__end_rio_switch_ops) = .;   }     TRACEDATA         __ksymtab : AT(ADDR(__ksymtab) - LOAD_OFFSET) {   VMLINUX_SYMBOL(__start___ksymtab) = .;   *(SORT(___ksymtab+*))   VMLINUX_SYMBOL(__stop___ksymtab) = .;   }         __ksymtab_gpl : AT(ADDR(__ksymtab_gpl) - LOAD_OFFSET) {   VMLINUX_SYMBOL(__start___ksymtab_gpl) = .;   *(SORT(___ksymtab_gpl+*))   VMLINUX_SYMBOL(__stop___ksymtab_gpl) = .;   }         __ksymtab_unused : AT(ADDR(__ksymtab_unused) - LOAD_OFFSET) {   VMLINUX_SYMBOL(__start___ksymtab_unused) = .;   *(SORT(___ksymtab_unused+*))   VMLINUX_SYMBOL(__stop___ksymtab_unused) = .;   }         __ksymtab_unused_gpl : AT(ADDR(__ksymtab_unused_gpl) - LOAD_OFFSET) {   VMLINUX_SYMBOL(__start___ksymtab_unused_gpl) = .;   *(SORT(___ksymtab_unused_gpl+*))   VMLINUX_SYMBOL(__stop___ksymtab_unused_gpl) = .;   }         __ksymtab_gpl_future : AT(ADDR(__ksymtab_gpl_future) - LOAD_OFFSET) {   VMLINUX_SYMBOL(__start___ksymtab_gpl_future) = .;   *(SORT(___ksymtab_gpl_future+*))   VMLINUX_SYMBOL(__stop___ksymtab_gpl_future) = .;   }         __kcrctab : AT(ADDR(__kcrctab) - LOAD_OFFSET) {   VMLINUX_SYMBOL(__start___kcrctab) = .;   *(SORT(___kcrctab+*))   VMLINUX_SYMBOL(__stop___kcrctab) = .;   }         __kcrctab_gpl : AT(ADDR(__kcrctab_gpl) - LOAD_OFFSET) {   VMLINUX_SYMBOL(__start___kcrctab_gpl) = .;   *(SORT(___kcrctab_gpl+*))   VMLINUX_SYMBOL(__stop___kcrctab_gpl) = .;   }         __kcrctab_unused : AT(ADDR(__kcrctab_unused) - LOAD_OFFSET) {   VMLINUX_SYMBOL(__start___kcrctab_unused) = .;   *(SORT(___kcrctab_unused+*))   VMLINUX_SYMBOL(__stop___kcrctab_unused) = .;   }         __kcrctab_unused_gpl : AT(ADDR(__kcrctab_unused_gpl) - LOAD_OFFSET) {   VMLINUX_SYMBOL(__start___kcrctab_unused_gpl) = .;   *(SORT(___kcrctab_unused_gpl+*))   VMLINUX_SYMBOL(__stop___kcrctab_unused_gpl) = .;   }         __kcrctab_gpl_future : AT(ADDR(__kcrctab_gpl_future) - LOAD_OFFSET) {   VMLINUX_SYMBOL(__start___kcrctab_gpl_future) = .;   *(SORT(___kcrctab_gpl_future+*))   VMLINUX_SYMBOL(__stop___kcrctab_gpl_future) = .;   }         __ksymtab_strings : AT(ADDR(__ksymtab_strings) - LOAD_OFFSET) {   *(__ksymtab_strings)   }         __init_rodata : AT(ADDR(__init_rodata) - LOAD_OFFSET) {   *(.ref.rodata)   DEV_KEEP(init.rodata)   DEV_KEEP(exit.rodata)   CPU_KEEP(init.rodata)   CPU_KEEP(exit.rodata)   MEM_KEEP(init.rodata)   MEM_KEEP(exit.rodata)   }         __param : AT(ADDR(__param) - LOAD_OFFSET) {   VMLINUX_SYMBOL(__start___param) = .;   *(__param)   VMLINUX_SYMBOL(__stop___param) = .;   }         __modver : AT(ADDR(__modver) - LOAD_OFFSET) {   VMLINUX_SYMBOL(__start___modver) = .;   *(__modver)   VMLINUX_SYMBOL(__stop___modver) = .;   . = ALIGN((align));   VMLINUX_SYMBOL(__end_rodata) = .;   }   . = ALIGN((align));
#define RODATA RO_DATA_SECTION(4096)
#define RO_DATA(align) RO_DATA_SECTION(align)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SECURITY_INIT   .security_initcall.init : AT(ADDR(.security_initcall.init) - LOAD_OFFSET) {   VMLINUX_SYMBOL(__security_initcall_start) = .;   *(.security_initcall.init)   VMLINUX_SYMBOL(__security_initcall_end) = .;   }
#define TEXT_TEXT   ALIGN_FUNCTION();   *(.text.hot)   *(.text)   *(.ref.text)   DEV_KEEP(init.text)   DEV_KEEP(exit.text)   CPU_KEEP(init.text)   CPU_KEEP(exit.text)   MEM_KEEP(init.text)   MEM_KEEP(exit.text)   *(.text.unlikely)
#define SCHED_TEXT   ALIGN_FUNCTION();   VMLINUX_SYMBOL(__sched_text_start) = .;   *(.sched.text)   VMLINUX_SYMBOL(__sched_text_end) = .;
#define LOCK_TEXT   ALIGN_FUNCTION();   VMLINUX_SYMBOL(__lock_text_start) = .;   *(.spinlock.text)   VMLINUX_SYMBOL(__lock_text_end) = .;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KPROBES_TEXT   ALIGN_FUNCTION();   VMLINUX_SYMBOL(__kprobes_text_start) = .;   *(.kprobes.text)   VMLINUX_SYMBOL(__kprobes_text_end) = .;
#define ENTRY_TEXT   ALIGN_FUNCTION();   VMLINUX_SYMBOL(__entry_text_start) = .;   *(.entry.text)   VMLINUX_SYMBOL(__entry_text_end) = .;
#define IRQENTRY_TEXT
#define HEAD_TEXT *(.head.text)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HEAD_TEXT_SECTION   .head.text : AT(ADDR(.head.text) - LOAD_OFFSET) {   HEAD_TEXT   }
#define EXCEPTION_TABLE(align)   . = ALIGN(align);   __ex_table : AT(ADDR(__ex_table) - LOAD_OFFSET) {   VMLINUX_SYMBOL(__start___ex_table) = .;   *(__ex_table)   VMLINUX_SYMBOL(__stop___ex_table) = .;   }
#define INIT_TASK_DATA_SECTION(align)   . = ALIGN(align);   .data..init_task : AT(ADDR(.data..init_task) - LOAD_OFFSET) {   INIT_TASK_DATA(align)   }
#define KERNEL_CTORS()
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define INIT_DATA   *(.init.data)   DEV_DISCARD(init.data)   CPU_DISCARD(init.data)   MEM_DISCARD(init.data)   KERNEL_CTORS()   MCOUNT_REC()   *(.init.rodata)   FTRACE_EVENTS()   TRACE_SYSCALLS()   DEV_DISCARD(init.rodata)   CPU_DISCARD(init.rodata)   MEM_DISCARD(init.rodata)   CLK_OF_TABLES()   CLKSRC_OF_TABLES()   KERNEL_DTB()   IRQCHIP_OF_MATCH_TABLE()
#define INIT_TEXT   *(.init.text)   DEV_DISCARD(init.text)   CPU_DISCARD(init.text)   MEM_DISCARD(init.text)
#define EXIT_DATA   *(.exit.data)   DEV_DISCARD(exit.data)   DEV_DISCARD(exit.rodata)   CPU_DISCARD(exit.data)   CPU_DISCARD(exit.rodata)   MEM_DISCARD(exit.data)   MEM_DISCARD(exit.rodata)
#define EXIT_TEXT   *(.exit.text)   DEV_DISCARD(exit.text)   CPU_DISCARD(exit.text)   MEM_DISCARD(exit.text)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EXIT_CALL   *(.exitcall.exit)
#define SBSS(sbss_align)   . = ALIGN(sbss_align);   .sbss : AT(ADDR(.sbss) - LOAD_OFFSET) {   *(.sbss)   *(.scommon)   }
#ifndef BSS_FIRST_SECTIONS
#define BSS_FIRST_SECTIONS
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define BSS(bss_align)   . = ALIGN(bss_align);   .bss : AT(ADDR(.bss) - LOAD_OFFSET) {   BSS_FIRST_SECTIONS   *(.bss..page_aligned)   *(.dynbss)   *(.bss)   *(COMMON)   }
#define DWARF_DEBUG       .debug 0 : { *(.debug) }   .line 0 : { *(.line) }       .debug_srcinfo 0 : { *(.debug_srcinfo) }   .debug_sfnames 0 : { *(.debug_sfnames) }       .debug_aranges 0 : { *(.debug_aranges) }   .debug_pubnames 0 : { *(.debug_pubnames) }       .debug_info 0 : { *(.debug_info   .gnu.linkonce.wi.*) }   .debug_abbrev 0 : { *(.debug_abbrev) }   .debug_line 0 : { *(.debug_line) }   .debug_frame 0 : { *(.debug_frame) }   .debug_str 0 : { *(.debug_str) }   .debug_loc 0 : { *(.debug_loc) }   .debug_macinfo 0 : { *(.debug_macinfo) }       .debug_weaknames 0 : { *(.debug_weaknames) }   .debug_funcnames 0 : { *(.debug_funcnames) }   .debug_typenames 0 : { *(.debug_typenames) }   .debug_varnames 0 : { *(.debug_varnames) }
#define STABS_DEBUG   .stab 0 : { *(.stab) }   .stabstr 0 : { *(.stabstr) }   .stab.excl 0 : { *(.stab.excl) }   .stab.exclstr 0 : { *(.stab.exclstr) }   .stab.index 0 : { *(.stab.index) }   .stab.indexstr 0 : { *(.stab.indexstr) }   .comment 0 : { *(.comment) }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BUG_TABLE
#define TRACEDATA
#define NOTES   .notes : AT(ADDR(.notes) - LOAD_OFFSET) {   VMLINUX_SYMBOL(__start_notes) = .;   *(.note.*)   VMLINUX_SYMBOL(__stop_notes) = .;   }
#define INIT_SETUP(initsetup_align)   . = ALIGN(initsetup_align);   VMLINUX_SYMBOL(__setup_start) = .;   *(.init.setup)   VMLINUX_SYMBOL(__setup_end) = .;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define INIT_CALLS_LEVEL(level)   VMLINUX_SYMBOL(__initcall##level##_start) = .;   *(.initcall##level##.init)   *(.initcall##level##s.init)
#define INIT_CALLS   VMLINUX_SYMBOL(__initcall_start) = .;   *(.initcallearly.init)   INIT_CALLS_LEVEL(0)   INIT_CALLS_LEVEL(1)   INIT_CALLS_LEVEL(2)   INIT_CALLS_LEVEL(3)   INIT_CALLS_LEVEL(4)   INIT_CALLS_LEVEL(5)   INIT_CALLS_LEVEL(rootfs)   INIT_CALLS_LEVEL(6)   INIT_CALLS_LEVEL(7)   VMLINUX_SYMBOL(__initcall_end) = .;
#define CON_INITCALL   VMLINUX_SYMBOL(__con_initcall_start) = .;   *(.con_initcall.init)   VMLINUX_SYMBOL(__con_initcall_end) = .;
#define SECURITY_INITCALL   VMLINUX_SYMBOL(__security_initcall_start) = .;   *(.security_initcall.init)   VMLINUX_SYMBOL(__security_initcall_end) = .;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define INIT_RAM_FS
#define DISCARDS   /DISCARD/ : {   EXIT_TEXT   EXIT_DATA   EXIT_CALL   *(.discard)   *(.discard.*)   }
#define PERCPU_INPUT(cacheline)   VMLINUX_SYMBOL(__per_cpu_start) = .;   *(.data..percpu..first)   . = ALIGN(PAGE_SIZE);   *(.data..percpu..page_aligned)   . = ALIGN(cacheline);   *(.data..percpu..readmostly)   . = ALIGN(cacheline);   *(.data..percpu)   *(.data..percpu..shared_aligned)   VMLINUX_SYMBOL(__per_cpu_end) = .;
#define PERCPU_VADDR(cacheline, vaddr, phdr)   VMLINUX_SYMBOL(__per_cpu_load) = .;   .data..percpu vaddr : AT(VMLINUX_SYMBOL(__per_cpu_load)   - LOAD_OFFSET) {   PERCPU_INPUT(cacheline)   } phdr   . = VMLINUX_SYMBOL(__per_cpu_load) + SIZEOF(.data..percpu);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PERCPU_SECTION(cacheline)   . = ALIGN(PAGE_SIZE);   .data..percpu : AT(ADDR(.data..percpu) - LOAD_OFFSET) {   VMLINUX_SYMBOL(__per_cpu_load) = .;   PERCPU_INPUT(cacheline)   }
#define RW_DATA_SECTION(cacheline, pagealigned, inittask)   . = ALIGN(PAGE_SIZE);   .data : AT(ADDR(.data) - LOAD_OFFSET) {   INIT_TASK_DATA(inittask)   NOSAVE_DATA   PAGE_ALIGNED_DATA(pagealigned)   CACHELINE_ALIGNED_DATA(cacheline)   READ_MOSTLY_DATA(cacheline)   DATA_DATA   CONSTRUCTORS   }
#define INIT_TEXT_SECTION(inittext_align)   . = ALIGN(inittext_align);   .init.text : AT(ADDR(.init.text) - LOAD_OFFSET) {   VMLINUX_SYMBOL(_sinittext) = .;   INIT_TEXT   VMLINUX_SYMBOL(_einittext) = .;   }
#define INIT_DATA_SECTION(initsetup_align)   .init.data : AT(ADDR(.init.data) - LOAD_OFFSET) {   INIT_DATA   INIT_SETUP(initsetup_align)   INIT_CALLS   CON_INITCALL   SECURITY_INITCALL   INIT_RAM_FS   }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BSS_SECTION(sbss_align, bss_align, stop_align)   . = ALIGN(sbss_align);   VMLINUX_SYMBOL(__bss_start) = .;   SBSS(sbss_align)   BSS(bss_align)   . = ALIGN(stop_align);   VMLINUX_SYMBOL(__bss_stop) = .;
