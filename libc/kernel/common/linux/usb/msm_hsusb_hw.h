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
#ifndef __LINUX_USB_GADGET_MSM72K_UDC_H__
#define __LINUX_USB_GADGET_MSM72K_UDC_H__
#define USB_AHBBURST (MSM_USB_BASE + 0x0090)
#define USB_AHBMODE (MSM_USB_BASE + 0x0098)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_CAPLENGTH (MSM_USB_BASE + 0x0100)
#define USB_USBCMD (MSM_USB_BASE + 0x0140)
#define USB_PORTSC (MSM_USB_BASE + 0x0184)
#define USB_OTGSC (MSM_USB_BASE + 0x01A4)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_USBMODE (MSM_USB_BASE + 0x01A8)
#define USB_PHY_CTRL (MSM_USB_BASE + 0x0240)
#define USBCMD_RESET 2
#define USB_USBINTR (MSM_USB_BASE + 0x0148)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PORTSC_PHCD (1 << 23)
#define PORTSC_PTS_MASK (3 << 30)
#define PORTSC_PTS_ULPI (3 << 30)
#define USB_ULPI_VIEWPORT (MSM_USB_BASE + 0x0170)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ULPI_RUN (1 << 30)
#define ULPI_WRITE (1 << 29)
#define ULPI_READ (0 << 29)
#define ULPI_ADDR(n) (((n) & 255) << 16)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ULPI_DATA(n) ((n) & 255)
#define ULPI_DATA_READ(n) (((n) >> 8) & 255)
#define ASYNC_INTR_CTRL (1 << 29)
#define ULPI_STP_CTRL (1 << 30)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PHY_RETEN (1 << 1)
#define OTGSC_INTSTS_MASK (0x7f << 16)
#define OTGSC_ID (1 << 8)
#define OTGSC_BSV (1 << 11)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OTGSC_IDIS (1 << 16)
#define OTGSC_BSVIS (1 << 19)
#define OTGSC_IDIE (1 << 24)
#define OTGSC_BSVIE (1 << 27)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
