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
#ifndef _LINUX_RPMSG_H
#define _LINUX_RPMSG_H
#include <linux/types.h>
#include <linux/device.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/mod_devicetable.h>
#include <linux/kref.h>
#include <linux/mutex.h>
#define VIRTIO_RPMSG_F_NS 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct rpmsg_hdr {
 u32 src;
 u32 dst;
 u32 reserved;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 len;
 u16 flags;
 u8 data[0];
} __packed;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct rpmsg_ns_msg {
 char name[RPMSG_NAME_SIZE];
 u32 addr;
 u32 flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __packed;
enum rpmsg_ns_flags {
 RPMSG_NS_CREATE = 0,
 RPMSG_NS_DESTROY = 1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define RPMSG_ADDR_ANY 0xFFFFFFFF
struct virtproc_info;
struct rpmsg_channel {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct virtproc_info *vrp;
 struct device dev;
 struct rpmsg_device_id id;
 u32 src;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 dst;
 struct rpmsg_endpoint *ept;
 bool announce;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef void (*rpmsg_rx_cb_t)(struct rpmsg_channel *, void *, int, void *, u32);
struct rpmsg_endpoint {
 struct rpmsg_channel *rpdev;
 struct kref refcount;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 rpmsg_rx_cb_t cb;
 struct mutex cb_lock;
 u32 addr;
 void *priv;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct rpmsg_driver {
 struct device_driver drv;
 const struct rpmsg_device_id *id_table;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*probe)(struct rpmsg_channel *dev);
 void (*remove)(struct rpmsg_channel *dev);
 void (*callback)(struct rpmsg_channel *, void *, int, void *, u32);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct rpmsg_endpoint *rpmsg_create_ept(struct rpmsg_channel *,
 rpmsg_rx_cb_t cb, void *priv, u32 addr);
#endif
