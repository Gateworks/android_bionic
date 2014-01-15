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
#ifndef __LINUX_USB_EHCI_DEF_H
#define __LINUX_USB_EHCI_DEF_H
struct ehci_caps {
 u32 hc_capbase;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HC_LENGTH(ehci, p) (0x00ff&((p) >>     (ehci_big_endian_capbase(ehci) ? 24 : 0)))
#define HC_VERSION(ehci, p) (0xffff&((p) >>     (ehci_big_endian_capbase(ehci) ? 0 : 16)))
 u32 hcs_params;
#define HCS_DEBUG_PORT(p) (((p)>>20)&0xf)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HCS_INDICATOR(p) ((p)&(1 << 16))
#define HCS_N_CC(p) (((p)>>12)&0xf)
#define HCS_N_PCC(p) (((p)>>8)&0xf)
#define HCS_PORTROUTED(p) ((p)&(1 << 7))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HCS_PPC(p) ((p)&(1 << 4))
#define HCS_N_PORTS(p) (((p)>>0)&0xf)
 u32 hcc_params;
#define HCC_32FRAME_PERIODIC_LIST(p) ((p)&(1 << 19))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HCC_PER_PORT_CHANGE_EVENT(p) ((p)&(1 << 18))
#define HCC_LPM(p) ((p)&(1 << 17))
#define HCC_HW_PREFETCH(p) ((p)&(1 << 16))
#define HCC_EXT_CAPS(p) (((p)>>8)&0xff)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HCC_ISOC_CACHE(p) ((p)&(1 << 7))
#define HCC_ISOC_THRES(p) (((p)>>4)&0x7)
#define HCC_CANPARK(p) ((p)&(1 << 2))
#define HCC_PGM_FRAMELISTLEN(p) ((p)&(1 << 1))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HCC_64BIT_ADDR(p) ((p)&(1))
 u8 portroute[8];
};
struct ehci_regs {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 command;
#define CMD_HIRD (0xf<<24)
#define CMD_PPCEE (1<<15)
#define CMD_FSP (1<<14)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CMD_ASPE (1<<13)
#define CMD_PSPE (1<<12)
#define CMD_PARK (1<<11)
#define CMD_PARK_CNT(c) (((c)>>8)&3)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CMD_LRESET (1<<7)
#define CMD_IAAD (1<<6)
#define CMD_ASE (1<<5)
#define CMD_PSE (1<<4)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CMD_RESET (1<<1)
#define CMD_RUN (1<<0)
 u32 status;
#define STS_PPCE_MASK (0xff<<16)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STS_ASS (1<<15)
#define STS_PSS (1<<14)
#define STS_RECL (1<<13)
#define STS_HALT (1<<12)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STS_IAA (1<<5)
#define STS_FATAL (1<<4)
#define STS_FLR (1<<3)
#define STS_PCD (1<<2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STS_ERR (1<<1)
#define STS_INT (1<<0)
 u32 intr_enable;
 u32 frame_index;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 segment;
 u32 frame_list;
 u32 async_next;
 u32 reserved1[2];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 txfill_tuning;
#define TXFIFO_DEFAULT (8<<16)
 u32 reserved2[6];
 u32 configured_flag;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FLAG_CF (1<<0)
 u32 port_status[0];
#define PORTSC_SUSPEND_STS_ACK 0
#define PORTSC_SUSPEND_STS_NYET 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PORTSC_SUSPEND_STS_STALL 2
#define PORTSC_SUSPEND_STS_ERR 3
#define PORT_DEV_ADDR (0x7f<<25)
#define PORT_SSTS (0x3<<23)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PORT_WKOC_E (1<<22)
#define PORT_WKDISC_E (1<<21)
#define PORT_WKCONN_E (1<<20)
#define PORT_TEST(x) (((x)&0xf)<<16)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PORT_TEST_PKT PORT_TEST(0x4)
#define PORT_TEST_FORCE PORT_TEST(0x5)
#define PORT_LED_OFF (0<<14)
#define PORT_LED_AMBER (1<<14)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PORT_LED_GREEN (2<<14)
#define PORT_LED_MASK (3<<14)
#define PORT_OWNER (1<<13)
#define PORT_POWER (1<<12)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PORT_USB11(x) (((x)&(3<<10)) == (1<<10))
#define PORT_LPM (1<<9)
#define PORT_RESET (1<<8)
#define PORT_SUSPEND (1<<7)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PORT_RESUME (1<<6)
#define PORT_OCC (1<<5)
#define PORT_OC (1<<4)
#define PORT_PEC (1<<3)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PORT_PE (1<<2)
#define PORT_CSC (1<<1)
#define PORT_CONNECT (1<<0)
#define PORT_RWC_BITS (PORT_CSC | PORT_PEC | PORT_OCC)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 reserved3[9];
 u32 usbmode;
#define USBMODE_SDIS (1<<3)
#define USBMODE_BE (1<<2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USBMODE_CM_HC (3<<0)
#define USBMODE_CM_IDLE (0<<0)
 u32 reserved4[6];
 u32 hostpc[1];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HOSTPC_PHCD (1<<22)
#define HOSTPC_PSPD (3<<25)
 u32 reserved5[16];
 u32 usbmode_ex;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USBMODE_EX_VBPS (1<<5)
#define USBMODE_EX_HC (3<<0)
};
struct ehci_dbg_port {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 control;
#define DBGP_OWNER (1<<30)
#define DBGP_ENABLED (1<<28)
#define DBGP_DONE (1<<16)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DBGP_INUSE (1<<10)
#define DBGP_ERRCODE(x) (((x)>>7)&0x07)
#define DBGP_ERR_BAD 1
#define DBGP_ERR_SIGNAL 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DBGP_ERROR (1<<6)
#define DBGP_GO (1<<5)
#define DBGP_OUT (1<<4)
#define DBGP_LEN(x) (((x)>>0)&0x0f)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 pids;
#define DBGP_PID_GET(x) (((x)>>16)&0xff)
#define DBGP_PID_SET(data, tok) (((data)<<8)|(tok))
 u32 data03;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 data47;
 u32 address;
#define DBGP_EPADDR(dev, ep) (((dev)<<8)|(ep))
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct usb_hcd;
#endif
