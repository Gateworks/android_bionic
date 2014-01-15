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
#ifndef ASM_GLUE_PROC_H
#define ASM_GLUE_PROC_H
#include <asm/glue.h>
#undef MULTI_CPU
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#undef CPU_NAME
#ifndef MULTI_CPU
#define cpu_proc_init __glue(CPU_NAME,_proc_init)
#define cpu_proc_fin __glue(CPU_NAME,_proc_fin)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cpu_reset __glue(CPU_NAME,_reset)
#define cpu_do_idle __glue(CPU_NAME,_do_idle)
#define cpu_dcache_clean_area __glue(CPU_NAME,_dcache_clean_area)
#define cpu_do_switch_mm __glue(CPU_NAME,_switch_mm)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cpu_set_pte_ext __glue(CPU_NAME,_set_pte_ext)
#define cpu_suspend_size __glue(CPU_NAME,_suspend_size)
#define cpu_do_suspend __glue(CPU_NAME,_do_suspend)
#define cpu_do_resume __glue(CPU_NAME,_do_resume)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#endif
