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
#ifndef __LINUX_NET_AFUNIX_H
#define __LINUX_NET_AFUNIX_H
#include <linux/socket.h>
#include <linux/un.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/mutex.h>
#include <net/sock.h>
#define UNIX_HASH_SIZE 256
#define UNIX_HASH_BITS 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct unix_address {
 atomic_t refcnt;
 int len;
 unsigned int hash;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct sockaddr_un name[0];
};
struct unix_skb_parms {
 struct pid *pid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 kuid_t uid;
 kgid_t gid;
 struct scm_fp_list *fp;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define UNIXCB(skb) (*(struct unix_skb_parms *)&((skb)->cb))
#define UNIXSID(skb) (&UNIXCB((skb)).secid)
#define unix_state_lock(s) spin_lock(&unix_sk(s)->lock)
#define unix_state_unlock(s) spin_unlock(&unix_sk(s)->lock)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define unix_state_lock_nested(s)   spin_lock_nested(&unix_sk(s)->lock,   SINGLE_DEPTH_NESTING)
#endif
