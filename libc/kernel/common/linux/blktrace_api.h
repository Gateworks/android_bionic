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
#ifndef BLKTRACE_H
#define BLKTRACE_H
#include <linux/blkdev.h>
#include <linux/relay.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/compat.h>
#include <uapi/linux/blktrace_api.h>
#define blk_trace_ioctl(bdev, cmd, arg) (-ENOTTY)
#define blk_trace_shutdown(q) do { } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define do_blk_trace_setup(q, name, dev, bdev, buts) (-ENOTTY)
#define blk_add_driver_data(q, rq, data, len) do {} while (0)
#define blk_trace_setup(q, name, dev, bdev, arg) (-ENOTTY)
#define blk_trace_startstop(q, start) (-ENOTTY)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define blk_trace_remove(q) (-ENOTTY)
#define blk_add_trace_msg(q, fmt, ...) do { } while (0)
#define blk_trace_remove_sysfs(dev) do { } while (0)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
