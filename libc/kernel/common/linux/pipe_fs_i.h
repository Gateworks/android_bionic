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
#ifndef _LINUX_PIPE_FS_I_H
#define _LINUX_PIPE_FS_I_H
#define PIPE_DEF_BUFFERS 16
#define PIPE_BUF_FLAG_LRU 0x01
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PIPE_BUF_FLAG_ATOMIC 0x02
#define PIPE_BUF_FLAG_GIFT 0x04
#define PIPE_BUF_FLAG_PACKET 0x08
struct pipe_buffer {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct page *page;
 unsigned int offset, len;
 const struct pipe_buf_operations *ops;
 unsigned int flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long private;
};
struct pipe_inode_info {
 struct mutex mutex;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 wait_queue_head_t wait;
 unsigned int nrbufs, curbuf, buffers;
 unsigned int readers;
 unsigned int writers;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int files;
 unsigned int waiting_writers;
 unsigned int r_counter;
 unsigned int w_counter;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct page *tmp_page;
 struct fasync_struct *fasync_readers;
 struct fasync_struct *fasync_writers;
 struct pipe_buffer *bufs;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct pipe_buf_operations {
 int can_merge;
 void * (*map)(struct pipe_inode_info *, struct pipe_buffer *, int);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*unmap)(struct pipe_inode_info *, struct pipe_buffer *, void *);
 int (*confirm)(struct pipe_inode_info *, struct pipe_buffer *);
 void (*release)(struct pipe_inode_info *, struct pipe_buffer *);
 int (*steal)(struct pipe_inode_info *, struct pipe_buffer *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*get)(struct pipe_inode_info *, struct pipe_buffer *);
};
#define PIPE_SIZE PAGE_SIZE
struct pipe_inode_info *alloc_pipe_info(void);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct pipe_inode_info *get_pipe_info(struct file *file);
#endif
