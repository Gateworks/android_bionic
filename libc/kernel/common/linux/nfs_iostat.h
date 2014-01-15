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
#ifndef _LINUX_NFS_IOSTAT
#define _LINUX_NFS_IOSTAT
#define NFS_IOSTAT_VERS "1.1"
enum nfs_stat_bytecounters {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NFSIOS_NORMALREADBYTES = 0,
 NFSIOS_NORMALWRITTENBYTES,
 NFSIOS_DIRECTREADBYTES,
 NFSIOS_DIRECTWRITTENBYTES,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NFSIOS_SERVERREADBYTES,
 NFSIOS_SERVERWRITTENBYTES,
 NFSIOS_READPAGES,
 NFSIOS_WRITEPAGES,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __NFSIOS_BYTESMAX,
};
enum nfs_stat_eventcounters {
 NFSIOS_INODEREVALIDATE = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NFSIOS_DENTRYREVALIDATE,
 NFSIOS_DATAINVALIDATE,
 NFSIOS_ATTRINVALIDATE,
 NFSIOS_VFSOPEN,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NFSIOS_VFSLOOKUP,
 NFSIOS_VFSACCESS,
 NFSIOS_VFSUPDATEPAGE,
 NFSIOS_VFSREADPAGE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NFSIOS_VFSREADPAGES,
 NFSIOS_VFSWRITEPAGE,
 NFSIOS_VFSWRITEPAGES,
 NFSIOS_VFSGETDENTS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NFSIOS_VFSSETATTR,
 NFSIOS_VFSFLUSH,
 NFSIOS_VFSFSYNC,
 NFSIOS_VFSLOCK,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NFSIOS_VFSRELEASE,
 NFSIOS_CONGESTIONWAIT,
 NFSIOS_SETATTRTRUNC,
 NFSIOS_EXTENDWRITE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NFSIOS_SILLYRENAME,
 NFSIOS_SHORTREAD,
 NFSIOS_SHORTWRITE,
 NFSIOS_DELAY,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NFSIOS_PNFS_READ,
 NFSIOS_PNFS_WRITE,
 __NFSIOS_COUNTSMAX,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum nfs_stat_fscachecounters {
 NFSIOS_FSCACHE_PAGES_READ_OK,
 NFSIOS_FSCACHE_PAGES_READ_FAIL,
 NFSIOS_FSCACHE_PAGES_WRITTEN_OK,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NFSIOS_FSCACHE_PAGES_WRITTEN_FAIL,
 NFSIOS_FSCACHE_PAGES_UNCACHED,
 __NFSIOS_FSCACHEMAX,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
