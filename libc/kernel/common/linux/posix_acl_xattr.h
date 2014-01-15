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
#ifndef _POSIX_ACL_XATTR_H
#define _POSIX_ACL_XATTR_H
#include <linux/posix_acl.h>
#define POSIX_ACL_XATTR_ACCESS "system.posix_acl_access"
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define POSIX_ACL_XATTR_DEFAULT "system.posix_acl_default"
#define POSIX_ACL_XATTR_VERSION 0x0002
#define ACL_UNDEFINED_ID (-1)
typedef struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 e_tag;
 __le16 e_perm;
 __le32 e_id;
} posix_acl_xattr_entry;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef struct {
 __le32 a_version;
 posix_acl_xattr_entry a_entries[0];
} posix_acl_xattr_header;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct posix_acl *posix_acl_from_xattr(struct user_namespace *user_ns,
 const void *value, size_t size);
#endif
