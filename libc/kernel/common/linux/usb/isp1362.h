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
#ifndef __LINUX_USB_ISP1362_H__
#define __LINUX_USB_ISP1362_H__
struct isp1362_platform_data {
 unsigned sel15Kres:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned clknotstop:1;
 unsigned oc_enable:1;
 unsigned int_act_high:1;
 unsigned int_edge_triggered:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned dreq_act_high:1;
 unsigned dack_act_high:1;
 unsigned remote_wakeup_connected:1;
 unsigned no_power_switching:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned power_switching_mode:1;
 u8 potpg;
 void (*reset) (struct device *dev, int set);
 void (*clock) (struct device *dev, int start);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*delay) (struct device *dev, unsigned int delay);
};
#endif
