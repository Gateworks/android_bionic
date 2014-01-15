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
#ifndef _LINUX_VIRTIO_CONFIG_H
#define _LINUX_VIRTIO_CONFIG_H
#include <linux/err.h>
#include <linux/bug.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/virtio.h>
#include <uapi/linux/virtio_config.h>
typedef void vq_callback_t(struct virtqueue *);
struct virtio_config_ops {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*get)(struct virtio_device *vdev, unsigned offset,
 void *buf, unsigned len);
 void (*set)(struct virtio_device *vdev, unsigned offset,
 const void *buf, unsigned len);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 (*get_status)(struct virtio_device *vdev);
 void (*set_status)(struct virtio_device *vdev, u8 status);
 void (*reset)(struct virtio_device *vdev);
 int (*find_vqs)(struct virtio_device *, unsigned nvqs,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct virtqueue *vqs[],
 vq_callback_t *callbacks[],
 const char *names[]);
 void (*del_vqs)(struct virtio_device *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 (*get_features)(struct virtio_device *vdev);
 void (*finalize_features)(struct virtio_device *vdev);
 const char *(*bus_name)(struct virtio_device *vdev);
 int (*set_vq_affinity)(struct virtqueue *vq, int cpu);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define virtio_config_val(vdev, fbit, offset, v)   virtio_config_buf((vdev), (fbit), (offset), (v), sizeof(*v))
#define virtio_config_val_len(vdev, fbit, offset, v, len)   virtio_config_buf((vdev), (fbit), (offset), (v), (len))
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
