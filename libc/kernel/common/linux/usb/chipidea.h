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
#ifndef __LINUX_USB_CHIPIDEA_H
#define __LINUX_USB_CHIPIDEA_H
#include <linux/usb/otg.h>
struct ci_hdrc;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ci_hdrc_platform_data {
 const char *name;
 uintptr_t capoffset;
 unsigned power_budget;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct usb_phy *phy;
 enum usb_phy_interface phy_mode;
 unsigned long flags;
#define CI_HDRC_REGS_SHARED BIT(0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CI_HDRC_REQUIRE_TRANSCEIVER BIT(1)
#define CI_HDRC_SUPPORTS_RUNTIME_PM BIT(2)
#define CI_HDRC_DISABLE_STREAMING BIT(3)
#define CI_HDRC_DUAL_ROLE_NOT_OTG BIT(4)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CI_HDRC_IMX28_WRITE_FIX BIT(5)
#define CI_HDRC_IMX_EHCI_QUIRK BIT(6)
 enum usb_dr_mode dr_mode;
#define CI_HDRC_CONTROLLER_RESET_EVENT 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CI_HDRC_CONTROLLER_STOPPED_EVENT 1
#define CI_HDRC_CONTROLLER_CHARGER_EVENT 2
#define CI_HDRC_CONTROLLER_CHARGER_POST_EVENT 3
 int (*notify_event) (struct ci_hdrc *ci, unsigned event);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CI_HDRC_NOTIFY_RET_DEFER_EVENT 1
 struct regulator *reg_vbus;
};
#define DEF_CAPOFFSET 0x100
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct platform_device *ci_hdrc_add_device(struct device *dev,
 struct resource *res, int nres,
 struct ci_hdrc_platform_data *platdata);
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
