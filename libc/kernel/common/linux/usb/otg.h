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
#ifndef __LINUX_USB_OTG_H
#define __LINUX_USB_OTG_H
#include <linux/usb/phy.h>
struct usb_otg {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 default_a;
 struct usb_phy *phy;
 struct usb_bus *host;
 struct usb_gadget *gadget;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*set_host)(struct usb_otg *otg, struct usb_bus *host);
 int (*set_peripheral)(struct usb_otg *otg,
 struct usb_gadget *gadget);
 int (*set_vbus)(struct usb_otg *otg, bool enabled);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*start_srp)(struct usb_otg *otg);
 int (*start_hnp)(struct usb_otg *otg);
};
enum usb_dr_mode {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 USB_DR_MODE_UNKNOWN,
 USB_DR_MODE_HOST,
 USB_DR_MODE_PERIPHERAL,
 USB_DR_MODE_OTG,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
