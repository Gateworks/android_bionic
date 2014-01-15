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
#ifndef _ASM_GENERIC_TOPOLOGY_H
#define _ASM_GENERIC_TOPOLOGY_H
#ifndef cpu_to_node
#define cpu_to_node(cpu) ((void)(cpu),0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef set_numa_node
#define set_numa_node(node)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef set_cpu_numa_node
#define set_cpu_numa_node(cpu, node)
#endif
#ifndef cpu_to_mem
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cpu_to_mem(cpu) ((void)(cpu),0)
#endif
#ifndef parent_node
#define parent_node(node) ((void)(node),0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef cpumask_of_node
#define cpumask_of_node(node) ((void)node, cpu_online_mask)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef pcibus_to_node
#define pcibus_to_node(bus) ((void)(bus), -1)
#endif
#ifndef cpumask_of_pcibus
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cpumask_of_pcibus(bus) (pcibus_to_node(bus) == -1 ?   cpu_all_mask :   cpumask_of_node(pcibus_to_node(bus)))
#endif
#ifndef set_numa_mem
#define set_numa_mem(node)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef set_cpu_numa_mem
#define set_cpu_numa_mem(cpu, node)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
