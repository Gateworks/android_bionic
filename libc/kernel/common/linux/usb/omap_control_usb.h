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
#ifndef __OMAP_CONTROL_USB_H__
#define __OMAP_CONTROL_USB_H__
struct omap_control_usb {
 struct device *dev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 __iomem *dev_conf;
 u32 __iomem *otghs_control;
 u32 __iomem *phy_power;
 struct clk *sys_clk;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 type;
};
struct omap_control_usb_platform_data {
 u8 type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum omap_control_usb_mode {
 USB_MODE_UNDEFINED = 0,
 USB_MODE_HOST,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 USB_MODE_DEVICE,
 USB_MODE_DISCONNECT,
};
#define OMAP_CTRL_DEV_TYPE1 0x1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAP_CTRL_DEV_TYPE2 0x2
#define OMAP_CTRL_DEV_PHY_PD BIT(0)
#define OMAP_CTRL_DEV_AVALID BIT(0)
#define OMAP_CTRL_DEV_BVALID BIT(1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAP_CTRL_DEV_VBUSVALID BIT(2)
#define OMAP_CTRL_DEV_SESSEND BIT(3)
#define OMAP_CTRL_DEV_IDDIG BIT(4)
#define OMAP_CTRL_USB_PWRCTL_CLK_CMD_MASK 0x003FC000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAP_CTRL_USB_PWRCTL_CLK_CMD_SHIFT 0xE
#define OMAP_CTRL_USB_PWRCTL_CLK_FREQ_MASK 0xFFC00000
#define OMAP_CTRL_USB_PWRCTL_CLK_FREQ_SHIFT 0x16
#define OMAP_CTRL_USB3_PHY_TX_RX_POWERON 0x3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAP_CTRL_USB3_PHY_TX_RX_POWEROFF 0x0
#if ???
#else
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
