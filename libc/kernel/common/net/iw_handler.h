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
#ifndef _IW_HANDLER_H
#define _IW_HANDLER_H
#include <linux/wireless.h>
#include <linux/if_ether.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IW_HANDLER_VERSION 8
#define IW_WIRELESS_SPY
#define IW_WIRELESS_THRSPY
#define EIWCOMMIT EINPROGRESS
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IW_REQUEST_FLAG_COMPAT 0x0001
#define IW_HEADER_TYPE_NULL 0
#define IW_HEADER_TYPE_CHAR 2
#define IW_HEADER_TYPE_UINT 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IW_HEADER_TYPE_FREQ 5
#define IW_HEADER_TYPE_ADDR 6
#define IW_HEADER_TYPE_POINT 8
#define IW_HEADER_TYPE_PARAM 9
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IW_HEADER_TYPE_QUAL 10
#define IW_DESCR_FLAG_NONE 0x0000
#define IW_DESCR_FLAG_DUMP 0x0001
#define IW_DESCR_FLAG_EVENT 0x0002
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IW_DESCR_FLAG_RESTRICT 0x0004
#define IW_DESCR_FLAG_NOMAX 0x0008
#define IW_DESCR_FLAG_WAIT 0x0100
struct iw_request_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 cmd;
 __u16 flags;
};
struct net_device;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef int (*iw_handler)(struct net_device *dev, struct iw_request_info *info,
 union iwreq_data *wrqu, char *extra);
struct iw_handler_def {
 const iw_handler * standard;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 num_standard;
 struct iw_statistics* (*get_wireless_stats)(struct net_device *dev);
};
struct iw_ioctl_description {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 header_type;
 __u8 token_type;
 __u16 token_size;
 __u16 min_tokens;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 max_tokens;
 __u32 flags;
};
struct iw_spy_data {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int spy_number;
 u_char spy_address[IW_MAX_SPY][ETH_ALEN];
 struct iw_quality spy_stat[IW_MAX_SPY];
 struct iw_quality spy_thr_low;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct iw_quality spy_thr_high;
 u_char spy_thr_under[IW_MAX_SPY];
};
struct libipw_device;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct iw_public_data {
 struct iw_spy_data * spy_data;
 struct libipw_device * libipw;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
