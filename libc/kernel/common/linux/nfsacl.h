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
#ifndef __LINUX_NFSACL_H
#define __LINUX_NFSACL_H
#include <linux/posix_acl.h>
#include <linux/sunrpc/xdr.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <uapi/linux/nfsacl.h>
#define NFS_ACL_MAX_ENTRIES 1024
#define NFSACL_MAXWORDS (2*(2+3*NFS_ACL_MAX_ENTRIES))
#define NFSACL_MAXPAGES ((2*(8+12*NFS_ACL_MAX_ENTRIES) + PAGE_SIZE-1)   >> PAGE_SHIFT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFS_ACL_MAX_ENTRIES_INLINE (5)
#define NFS_ACL_INLINE_BUFSIZE ((2*(2+3*NFS_ACL_MAX_ENTRIES_INLINE)) << 2)
#endif
