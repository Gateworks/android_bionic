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
#ifndef __TEGRA_USB_PHY_H
#define __TEGRA_USB_PHY_H
#include <linux/clk.h>
#include <linux/usb/otg.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct tegra_utmip_config {
 u8 hssync_start_delay;
 u8 elastic_limit;
 u8 idle_wait_delay;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 term_range_adj;
 u8 xcvr_setup;
 u8 xcvr_lsfslew;
 u8 xcvr_lsrslew;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct tegra_ulpi_config {
 int reset_gpio;
 const char *clk;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum tegra_usb_phy_port_speed {
 TEGRA_USB_PHY_PORT_SPEED_FULL = 0,
 TEGRA_USB_PHY_PORT_SPEED_LOW,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TEGRA_USB_PHY_PORT_SPEED_HIGH,
};
enum tegra_usb_phy_mode {
 TEGRA_USB_PHY_MODE_DEVICE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TEGRA_USB_PHY_MODE_HOST,
};
struct tegra_xtal_freq;
struct tegra_usb_phy {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int instance;
 const struct tegra_xtal_freq *freq;
 void __iomem *regs;
 void __iomem *pad_regs;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct clk *clk;
 struct clk *pll_u;
 struct clk *pad_clk;
 enum tegra_usb_phy_mode mode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *config;
 struct usb_phy *ulpi;
 struct usb_phy u_phy;
 struct device *dev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 bool is_legacy_phy;
 bool is_ulpi_phy;
 void (*set_pts)(struct usb_phy *x, u8 pts_val);
 void (*set_phcd)(struct usb_phy *x, bool enable);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct tegra_usb_phy *tegra_usb_phy_open(struct device *dev, int instance,
 void __iomem *regs, void *config, enum tegra_usb_phy_mode phy_mode,
 void (*set_pts)(struct usb_phy *x, u8 pts_val),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*set_phcd)(struct usb_phy *x, bool enable));
#endif
