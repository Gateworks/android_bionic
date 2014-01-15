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
#ifndef __ASM_ARCH_MSM_HSUSB_H
#define __ASM_ARCH_MSM_HSUSB_H
#include <linux/types.h>
#include <linux/usb/otg.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum usb_mode_type {
 USB_NONE = 0,
 USB_PERIPHERAL,
 USB_HOST,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 USB_OTG,
};
enum otg_control_type {
 OTG_NO_CONTROL = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 OTG_PHY_CONTROL,
 OTG_PMIC_CONTROL,
 OTG_USER_CONTROL,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum msm_usb_phy_type {
 INVALID_PHY = 0,
 CI_45NM_INTEGRATED_PHY,
 SNPS_28NM_INTEGRATED_PHY,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define IDEV_CHG_MAX 1500
#define IUNIT 100
enum usb_chg_state {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 USB_CHG_STATE_UNDEFINED = 0,
 USB_CHG_STATE_WAIT_FOR_DCD,
 USB_CHG_STATE_DCD_DONE,
 USB_CHG_STATE_PRIMARY_DONE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 USB_CHG_STATE_SECONDARY_DONE,
 USB_CHG_STATE_DETECTED,
};
enum usb_chg_type {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 USB_INVALID_CHARGER = 0,
 USB_SDP_CHARGER,
 USB_DCP_CHARGER,
 USB_CDP_CHARGER,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct msm_otg_platform_data {
 int *phy_init_seq;
 void (*vbus_power)(bool on);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned power_budget;
 enum usb_mode_type mode;
 enum otg_control_type otg_control;
 enum usb_mode_type default_mode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum msm_usb_phy_type phy_type;
 void (*setup_gpio)(enum usb_otg_state state);
 char *pclk_src_name;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct msm_otg {
 struct usb_phy phy;
 struct msm_otg_platform_data *pdata;
 int irq;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct clk *clk;
 struct clk *pclk;
 struct clk *pclk_src;
 struct clk *phy_reset_clk;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct clk *core_clk;
 void __iomem *regs;
#define ID 0
#define B_SESS_VLD 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long inputs;
 atomic_t in_lpm;
 int async_int;
 unsigned cur_power;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct delayed_work chg_work;
 enum usb_chg_state chg_state;
 enum usb_chg_type chg_type;
 u8 dcd_retries;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
