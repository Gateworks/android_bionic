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
#ifndef _LINUX_RESET_CONTROLLER_H_
#define _LINUX_RESET_CONTROLLER_H_
#include <linux/list.h>
struct reset_controller_dev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct reset_control_ops {
 int (*reset)(struct reset_controller_dev *rcdev, unsigned long id);
 int (*assert)(struct reset_controller_dev *rcdev, unsigned long id);
 int (*deassert)(struct reset_controller_dev *rcdev, unsigned long id);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct module;
struct device_node;
struct reset_controller_dev {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct reset_control_ops *ops;
 struct module *owner;
 struct device_node *of_node;
 int of_reset_n_cells;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*of_xlate)(struct reset_controller_dev *rcdev,
 const struct of_phandle_args *reset_spec);
 unsigned int nr_resets;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
