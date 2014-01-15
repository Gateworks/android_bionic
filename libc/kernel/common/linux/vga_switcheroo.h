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
#ifndef _LINUX_VGA_SWITCHEROO_H_
#define _LINUX_VGA_SWITCHEROO_H_
#include <linux/fb.h>
struct pci_dev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum vga_switcheroo_state {
 VGA_SWITCHEROO_OFF,
 VGA_SWITCHEROO_ON,
 VGA_SWITCHEROO_INIT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 VGA_SWITCHEROO_NOT_FOUND,
};
enum vga_switcheroo_client_id {
 VGA_SWITCHEROO_IGD,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 VGA_SWITCHEROO_DIS,
 VGA_SWITCHEROO_MAX_CLIENTS,
};
struct vga_switcheroo_handler {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*switchto)(enum vga_switcheroo_client_id id);
 int (*power_state)(enum vga_switcheroo_client_id id,
 enum vga_switcheroo_state state);
 int (*init)(void);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*get_client_id)(struct pci_dev *pdev);
};
struct vga_switcheroo_client_ops {
 void (*set_gpu_state)(struct pci_dev *dev, enum vga_switcheroo_state);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*reprobe)(struct pci_dev *dev);
 bool (*can_switch)(struct pci_dev *dev);
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
