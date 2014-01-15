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
#ifndef _LINUX_LOGGER_H
#define _LINUX_LOGGER_H
#include <linux/types.h>
#include <linux/ioctl.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct user_logger_entry_compat {
 __u16 len;
 __u16 __pad;
 __s32 pid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __s32 tid;
 __s32 sec;
 __s32 nsec;
 char msg[0];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct logger_entry {
 __u16 len;
 __u16 hdr_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __s32 pid;
 __s32 tid;
 __s32 sec;
 __s32 nsec;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 kuid_t euid;
 char msg[0];
};
#define LOGGER_LOG_RADIO "log_radio"
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LOGGER_LOG_EVENTS "log_events"
#define LOGGER_LOG_SYSTEM "log_system"
#define LOGGER_LOG_MAIN "log_main"
#define LOGGER_ENTRY_MAX_PAYLOAD 4076
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __LOGGERIO 0xAE
#define LOGGER_GET_LOG_BUF_SIZE _IO(__LOGGERIO, 1)
#define LOGGER_GET_LOG_LEN _IO(__LOGGERIO, 2)
#define LOGGER_GET_NEXT_ENTRY_LEN _IO(__LOGGERIO, 3)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LOGGER_FLUSH_LOG _IO(__LOGGERIO, 4)
#define LOGGER_GET_VERSION _IO(__LOGGERIO, 5)
#define LOGGER_SET_VERSION _IO(__LOGGERIO, 6)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
