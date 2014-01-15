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
#ifndef __WUSB_H__
#define __WUSB_H__
#include <linux/types.h>
#include <linux/kernel.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/uwb/spec.h>
#include <linux/usb/ch9.h>
#include <linux/param.h>
struct wuie_hdr {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 bLength;
 u8 bIEIdentifier;
} __attribute__((packed));
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 WUIE_ID_WCTA = 0x80,
 WUIE_ID_CONNECTACK,
 WUIE_ID_HOST_INFO,
 WUIE_ID_CHANGE_ANNOUNCE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 WUIE_ID_DEVICE_DISCONNECT,
 WUIE_ID_HOST_DISCONNECT,
 WUIE_ID_KEEP_ALIVE = 0x89,
 WUIE_ID_ISOCH_DISCARD,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 WUIE_ID_RESET_DEVICE,
};
#define WUIE_ELT_MAX 4
struct wusb_ckhdid {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 data[16];
} __attribute__((packed));
#define WUSB_CKHDID_STRSIZE (3 * sizeof(struct wusb_ckhdid) + 1)
struct wuie_host_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct wuie_hdr hdr;
 __le16 attributes;
 struct wusb_ckhdid CHID;
} __attribute__((packed));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct wuie_connect_ack {
 struct wuie_hdr hdr;
 struct {
 struct wusb_ckhdid CDID;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 bDeviceAddress;
 u8 bReserved;
 } blk[WUIE_ELT_MAX];
} __attribute__((packed));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
 WUIE_HI_CAP_RECONNECT = 0,
 WUIE_HI_CAP_LIMITED,
 WUIE_HI_CAP_RESERVED,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 WUIE_HI_CAP_ALL,
};
struct wuie_channel_stop {
 struct wuie_hdr hdr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 attributes;
 u8 timestamp[3];
} __attribute__((packed));
struct wuie_keep_alive {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct wuie_hdr hdr;
 u8 bDeviceAddress[WUIE_ELT_MAX];
} __attribute__((packed));
struct wuie_reset {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct wuie_hdr hdr;
 struct wusb_ckhdid CDID;
} __attribute__((packed));
struct wuie_disconnect {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct wuie_hdr hdr;
 u8 bDeviceAddress;
 u8 padding;
} __attribute__((packed));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct wuie_host_disconnect {
 struct wuie_hdr hdr;
} __attribute__((packed));
struct wusb_dn_hdr {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 bType;
 u8 notifdata[];
} __attribute__((packed));
enum WUSB_DN {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 WUSB_DN_CONNECT = 0x01,
 WUSB_DN_DISCONNECT = 0x02,
 WUSB_DN_EPRDY = 0x03,
 WUSB_DN_MASAVAILCHANGED = 0x04,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 WUSB_DN_RWAKE = 0x05,
 WUSB_DN_SLEEP = 0x06,
 WUSB_DN_ALIVE = 0x07,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct wusb_dn_connect {
 struct wusb_dn_hdr hdr;
 __le16 attributes;
 struct wusb_ckhdid CDID;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __attribute__((packed));
struct wusb_dn_alive {
 struct wusb_dn_hdr hdr;
} __attribute__((packed));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct wusb_dn_disconnect {
 struct wusb_dn_hdr hdr;
} __attribute__((packed));
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 WUSB_TRUST_TIMEOUT_MS = 4000,
};
#define WUSB_KEY_INDEX_TYPE_PTK 0
#define WUSB_KEY_INDEX_TYPE_ASSOC 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WUSB_KEY_INDEX_TYPE_GTK 2
#define WUSB_KEY_INDEX_ORIGINATOR_HOST 0
#define WUSB_KEY_INDEX_ORIGINATOR_DEVICE 1
struct aes_ccm_nonce {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 sfn[6];
 u8 tkid[3];
 struct uwb_dev_addr dest_addr;
 struct uwb_dev_addr src_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __attribute__((packed));
struct aes_ccm_label {
 u8 data[14];
} __attribute__((packed));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct wusb_keydvt_in {
 u8 hnonce[16];
 u8 dnonce[16];
} __attribute__((packed));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct wusb_keydvt_out {
 u8 kck[16];
 u8 ptk[16];
} __attribute__((packed));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
