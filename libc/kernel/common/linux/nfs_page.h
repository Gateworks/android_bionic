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
#ifndef _LINUX_NFS_PAGE_H
#define _LINUX_NFS_PAGE_H
#include <linux/list.h>
#include <linux/pagemap.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/wait.h>
#include <linux/sunrpc/auth.h>
#include <linux/nfs_xdr.h>
#include <linux/kref.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
 PG_BUSY = 0,
 PG_MAPPED,
 PG_CLEAN,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PG_NEED_COMMIT,
 PG_NEED_RESCHED,
 PG_COMMIT_TO_DS,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct nfs_inode;
struct nfs_page {
 struct page *wb_page;
 struct nfs_open_context *wb_context;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct nfs_lock_context *wb_lock_context;
 pgoff_t wb_index;
 unsigned int wb_offset,
 wb_pgbase,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 wb_bytes;
 struct kref wb_kref;
 unsigned long wb_flags;
 struct nfs_write_verifier wb_verf;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct nfs_pageio_descriptor;
struct nfs_pageio_ops {
 void (*pg_init)(struct nfs_pageio_descriptor *, struct nfs_page *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 bool (*pg_test)(struct nfs_pageio_descriptor *, struct nfs_page *, struct nfs_page *);
 int (*pg_doio)(struct nfs_pageio_descriptor *);
};
struct nfs_pageio_descriptor {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long pg_bytes_written;
 size_t pg_count;
 size_t pg_bsize;
 unsigned int pg_base;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char pg_moreio : 1,
 pg_recoalesce : 1;
 struct inode *pg_inode;
 const struct nfs_pageio_ops *pg_ops;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int pg_ioflags;
 int pg_error;
 const struct rpc_call_ops *pg_rpc_callops;
 const struct nfs_pgio_completion_ops *pg_completion_ops;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct pnfs_layout_segment *pg_lseg;
 struct nfs_direct_req *pg_dreq;
 void *pg_layout_private;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFS_WBACK_BUSY(req) (test_bit(PG_BUSY,&(req)->wb_flags))
#endif
