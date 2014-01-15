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
#ifndef _LINUX_RXRPC_H
#define _LINUX_RXRPC_H
#include <linux/in.h>
#include <linux/in6.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct sockaddr_rxrpc {
 sa_family_t srx_family;
 u16 srx_service;
 u16 transport_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 transport_len;
 union {
 sa_family_t family;
 struct sockaddr_in sin;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct sockaddr_in6 sin6;
 } transport;
};
#define RXRPC_SECURITY_KEY 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RXRPC_SECURITY_KEYRING 2
#define RXRPC_EXCLUSIVE_CONNECTION 3
#define RXRPC_MIN_SECURITY_LEVEL 4
#define RXRPC_USER_CALL_ID 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RXRPC_ABORT 2
#define RXRPC_ACK 3
#define RXRPC_NET_ERROR 5
#define RXRPC_BUSY 6
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RXRPC_LOCAL_ERROR 7
#define RXRPC_NEW_CALL 8
#define RXRPC_ACCEPT 9
#define RXRPC_SECURITY_PLAIN 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RXRPC_SECURITY_AUTH 1
#define RXRPC_SECURITY_ENCRYPT 2
#define RXRPC_SECURITY_NONE 0
#define RXRPC_SECURITY_RXKAD 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RXRPC_SECURITY_RXGK 4
#define RXRPC_SECURITY_RXK5 5
#endif
