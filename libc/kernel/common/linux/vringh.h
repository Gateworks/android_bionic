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
#ifndef _LINUX_VRINGH_H
#define _LINUX_VRINGH_H
#include <uapi/linux/virtio_ring.h>
#include <linux/uio.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/slab.h>
#include <asm/barrier.h>
struct vringh {
 bool event_indices;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 bool weak_barriers;
 u16 last_avail_idx;
 u16 last_used_idx;
 u32 completed;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct vring vring;
 void (*notify)(struct vringh *);
};
struct virtio_device;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef void vrh_callback_t(struct virtio_device *, struct vringh *);
struct vringh_config_ops {
 int (*find_vrhs)(struct virtio_device *vdev, unsigned nhvrs,
 struct vringh *vrhs[], vrh_callback_t *callbacks[]);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*del_vrhs)(struct virtio_device *vdev);
};
struct vringh_range {
 u64 start, end_incl;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u64 offset;
};
struct vringh_iov {
 struct iovec *iov;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 size_t consumed;
 unsigned i, used, max_num;
};
struct vringh_kiov {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct kvec *iov;
 size_t consumed;
 unsigned i, used, max_num;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VRINGH_IOV_ALLOCATED 0x8000000
#endif
