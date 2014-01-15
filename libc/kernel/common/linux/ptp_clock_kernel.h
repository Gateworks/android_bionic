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
#ifndef _PTP_CLOCK_KERNEL_H_
#define _PTP_CLOCK_KERNEL_H_
#include <linux/device.h>
#include <linux/pps_kernel.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/ptp_clock.h>
struct ptp_clock_request {
 enum {
 PTP_CLK_REQ_EXTTS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PTP_CLK_REQ_PEROUT,
 PTP_CLK_REQ_PPS,
 } type;
 union {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct ptp_extts_request extts;
 struct ptp_perout_request perout;
 };
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ptp_clock_info {
 struct module *owner;
 char name[16];
 s32 max_adj;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int n_alarm;
 int n_ext_ts;
 int n_per_out;
 int pps;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*adjfreq)(struct ptp_clock_info *ptp, s32 delta);
 int (*adjtime)(struct ptp_clock_info *ptp, s64 delta);
 int (*gettime)(struct ptp_clock_info *ptp, struct timespec *ts);
 int (*settime)(struct ptp_clock_info *ptp, const struct timespec *ts);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*enable)(struct ptp_clock_info *ptp,
 struct ptp_clock_request *request, int on);
};
struct ptp_clock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum ptp_clock_events {
 PTP_CLOCK_ALARM,
 PTP_CLOCK_EXTTS,
 PTP_CLOCK_PPS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PTP_CLOCK_PPSUSR,
};
struct ptp_clock_event {
 int type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int index;
 union {
 u64 timestamp;
 struct pps_event_time pps_times;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 };
};
#endif
