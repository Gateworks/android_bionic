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
#ifndef __ASSEMBLY__
struct tag;
struct meminfo;
struct pt_regs;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct smp_operations;
#define smp_ops(ops) (struct smp_operations *)NULL
struct machine_desc {
 unsigned int nr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const char *name;
 unsigned long atag_offset;
 const char *const *dt_compat;
 unsigned int nr_irqs;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int video_start;
 unsigned int video_end;
 unsigned char reserve_lp0 :1;
 unsigned char reserve_lp1 :1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char reserve_lp2 :1;
 char restart_mode;
 struct smp_operations *smp;
 void (*fixup)(struct tag *, char **,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct meminfo *);
 void (*reserve)(void);
 void (*map_io)(void);
 void (*init_early)(void);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*init_irq)(void);
 void (*init_time)(void);
 void (*init_machine)(void);
 void (*init_late)(void);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*restart)(char, const char *);
};
#define for_each_machine_desc(p)   for (p = __arch_info_begin; p < __arch_info_end; p++)
#define MACHINE_START(_type,_name)  static const struct machine_desc __mach_desc_##_type   __used   __attribute__((__section__(".arch.info.init"))) = {   .nr = MACH_TYPE_##_type,   .name = _name,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MACHINE_END  };
#define DT_MACHINE_START(_name, _namestr)  static const struct machine_desc __mach_desc_##_name   __used   __attribute__((__section__(".arch.info.init"))) = {   .nr = ~0,   .name = _namestr,
#endif
