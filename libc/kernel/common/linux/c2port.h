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
#include <linux/kmemcheck.h>
#define C2PORT_NAME_LEN 32
struct device;
struct c2port_ops;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct c2port_device {
 kmemcheck_bitfield_begin(flags);
 unsigned int access:1;
 unsigned int flash_access:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 kmemcheck_bitfield_end(flags);
 int id;
 char name[C2PORT_NAME_LEN];
 struct c2port_ops *ops;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct mutex mutex;
 struct device *dev;
 void *private_data;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct c2port_ops {
 unsigned short block_size;
 unsigned short blocks_num;
 void (*access)(struct c2port_device *dev, int status);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*c2d_dir)(struct c2port_device *dev, int dir);
 int (*c2d_get)(struct c2port_device *dev);
 void (*c2d_set)(struct c2port_device *dev, int status);
 void (*c2ck_set)(struct c2port_device *dev, int status);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
