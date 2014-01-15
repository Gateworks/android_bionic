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
#ifndef _PCI_HOTPLUG_H
#define _PCI_HOTPLUG_H
enum pcie_link_width {
 PCIE_LNK_WIDTH_RESRV = 0x00,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PCIE_LNK_X1 = 0x01,
 PCIE_LNK_X2 = 0x02,
 PCIE_LNK_X4 = 0x04,
 PCIE_LNK_X8 = 0x08,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PCIE_LNK_X12 = 0x0C,
 PCIE_LNK_X16 = 0x10,
 PCIE_LNK_X32 = 0x20,
 PCIE_LNK_WIDTH_UNKNOWN = 0xFF,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct hotplug_slot_ops {
 struct module *owner;
 const char *mod_name;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*enable_slot) (struct hotplug_slot *slot);
 int (*disable_slot) (struct hotplug_slot *slot);
 int (*set_attention_status) (struct hotplug_slot *slot, u8 value);
 int (*hardware_test) (struct hotplug_slot *slot, u32 value);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*get_power_status) (struct hotplug_slot *slot, u8 *value);
 int (*get_attention_status) (struct hotplug_slot *slot, u8 *value);
 int (*get_latch_status) (struct hotplug_slot *slot, u8 *value);
 int (*get_adapter_status) (struct hotplug_slot *slot, u8 *value);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct hotplug_slot_info {
 u8 power_status;
 u8 attention_status;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 latch_status;
 u8 adapter_status;
};
struct hotplug_slot {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct hotplug_slot_ops *ops;
 struct hotplug_slot_info *info;
 void (*release) (struct hotplug_slot *slot);
 void *private;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct pci_slot *pci_slot;
};
#define to_hotplug_slot(n) container_of(n, struct hotplug_slot, kobj)
#define pci_hp_register(slot, pbus, devnr, name)   __pci_hp_register(slot, pbus, devnr, name, THIS_MODULE, KBUILD_MODNAME)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct hpp_type0 {
 u32 revision;
 u8 cache_line_size;
 u8 latency_timer;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 enable_serr;
 u8 enable_perr;
};
struct hpp_type1 {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 revision;
 u8 max_mem_read;
 u8 avg_max_split;
 u16 tot_max_split;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct hpp_type2 {
 u32 revision;
 u32 unc_err_mask_and;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 unc_err_mask_or;
 u32 unc_err_sever_and;
 u32 unc_err_sever_or;
 u32 cor_err_mask_and;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 cor_err_mask_or;
 u32 adv_err_cap_and;
 u32 adv_err_cap_or;
 u16 pci_exp_devctl_and;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 pci_exp_devctl_or;
 u16 pci_exp_lnkctl_and;
 u16 pci_exp_lnkctl_or;
 u32 sec_unc_err_sever_and;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 sec_unc_err_sever_or;
 u32 sec_unc_err_mask_and;
 u32 sec_unc_err_mask_or;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct hotplug_params {
 struct hpp_type0 *t0;
 struct hpp_type1 *t1;
 struct hpp_type2 *t2;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct hpp_type0 type0_data;
 struct hpp_type1 type1_data;
 struct hpp_type2 type2_data;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
