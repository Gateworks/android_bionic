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
#ifndef SPLICE_H
#define SPLICE_H
#include <linux/pipe_fs_i.h>
#define SPLICE_F_MOVE (0x01)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SPLICE_F_NONBLOCK (0x02)
#define SPLICE_F_MORE (0x04)
#define SPLICE_F_GIFT (0x08)
struct splice_desc {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int len, total_len;
 unsigned int flags;
 union {
 void __user *userptr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct file *file;
 void *data;
 } u;
 loff_t pos;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 loff_t *opos;
 size_t num_spliced;
 bool need_wakeup;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct partial_page {
 unsigned int offset;
 unsigned int len;
 unsigned long private;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct splice_pipe_desc {
 struct page **pages;
 struct partial_page *partial;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int nr_pages;
 unsigned int nr_pages_max;
 unsigned int flags;
 const struct pipe_buf_operations *ops;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*spd_release)(struct splice_pipe_desc *, unsigned int);
};
typedef int (splice_actor)(struct pipe_inode_info *, struct pipe_buffer *,
 struct splice_desc *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef int (splice_direct_actor)(struct pipe_inode_info *,
 struct splice_desc *);
#endif
