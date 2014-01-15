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
#ifndef __DMA_BUF_H__
#define __DMA_BUF_H__
#include <linux/file.h>
#include <linux/err.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/scatterlist.h>
#include <linux/list.h>
#include <linux/dma-mapping.h>
#include <linux/fs.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct device;
struct dma_buf;
struct dma_buf_attachment;
struct dma_buf_ops {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*attach)(struct dma_buf *, struct device *,
 struct dma_buf_attachment *);
 void (*detach)(struct dma_buf *, struct dma_buf_attachment *);
 struct sg_table * (*map_dma_buf)(struct dma_buf_attachment *,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum dma_data_direction);
 void (*unmap_dma_buf)(struct dma_buf_attachment *,
 struct sg_table *,
 enum dma_data_direction);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*release)(struct dma_buf *);
 int (*begin_cpu_access)(struct dma_buf *, size_t, size_t,
 enum dma_data_direction);
 void (*end_cpu_access)(struct dma_buf *, size_t, size_t,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum dma_data_direction);
 void *(*kmap_atomic)(struct dma_buf *, unsigned long);
 void (*kunmap_atomic)(struct dma_buf *, unsigned long, void *);
 void *(*kmap)(struct dma_buf *, unsigned long);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*kunmap)(struct dma_buf *, unsigned long, void *);
 int (*mmap)(struct dma_buf *, struct vm_area_struct *vma);
 void *(*vmap)(struct dma_buf *);
 void (*vunmap)(struct dma_buf *, void *vaddr);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct dma_buf {
 size_t size;
 struct file *file;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct dma_buf_ops *ops;
 struct mutex lock;
 unsigned vmapping_counter;
 void *vmap_ptr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const char *exp_name;
 void *priv;
};
struct dma_buf_attachment {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct dma_buf *dmabuf;
 struct device *dev;
 void *priv;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct dma_buf_attachment *dma_buf_attach(struct dma_buf *dmabuf,
 struct device *dev);
struct dma_buf *dma_buf_export_named(void *priv, const struct dma_buf_ops *ops,
 size_t size, int flags, const char *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define dma_buf_export(priv, ops, size, flags)   dma_buf_export_named(priv, ops, size, flags, __FILE__)
struct dma_buf *dma_buf_get(int fd);
struct sg_table *dma_buf_map_attachment(struct dma_buf_attachment *,
 enum dma_data_direction);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
