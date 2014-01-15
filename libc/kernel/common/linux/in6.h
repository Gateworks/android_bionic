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
#ifndef _LINUX_IN6_H
#define _LINUX_IN6_H
#include <uapi/linux/in6.h>
#define IN6ADDR_ANY_INIT { { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 } } }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IN6ADDR_LOOPBACK_INIT { { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 } } }
#define IN6ADDR_LINKLOCAL_ALLNODES_INIT   { { { 0xff,2,0,0,0,0,0,0,0,0,0,0,0,0,0,1 } } }
#define IN6ADDR_LINKLOCAL_ALLROUTERS_INIT   { { { 0xff,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2 } } }
#define IN6ADDR_INTERFACELOCAL_ALLNODES_INIT   { { { 0xff,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1 } } }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IN6ADDR_INTERFACELOCAL_ALLROUTERS_INIT   { { { 0xff,1,0,0,0,0,0,0,0,0,0,0,0,0,0,2 } } }
#define IN6ADDR_SITELOCAL_ALLROUTERS_INIT   { { { 0xff,5,0,0,0,0,0,0,0,0,0,0,0,0,0,2 } } }
#endif
