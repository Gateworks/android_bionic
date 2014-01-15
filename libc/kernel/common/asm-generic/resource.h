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
#ifndef _ASM_GENERIC_RESOURCE_H
#define _ASM_GENERIC_RESOURCE_H
#include <uapi/asm-generic/resource.h>
#define INIT_RLIMITS  {   [RLIMIT_CPU] = { RLIM_INFINITY, RLIM_INFINITY },   [RLIMIT_FSIZE] = { RLIM_INFINITY, RLIM_INFINITY },   [RLIMIT_DATA] = { RLIM_INFINITY, RLIM_INFINITY },   [RLIMIT_STACK] = { _STK_LIM, _STK_LIM_MAX },   [RLIMIT_CORE] = { 0, RLIM_INFINITY },   [RLIMIT_RSS] = { RLIM_INFINITY, RLIM_INFINITY },   [RLIMIT_NPROC] = { 0, 0 },   [RLIMIT_NOFILE] = { INR_OPEN_CUR, INR_OPEN_MAX },   [RLIMIT_MEMLOCK] = { MLOCK_LIMIT, MLOCK_LIMIT },   [RLIMIT_AS] = { RLIM_INFINITY, RLIM_INFINITY },   [RLIMIT_LOCKS] = { RLIM_INFINITY, RLIM_INFINITY },   [RLIMIT_SIGPENDING] = { 0, 0 },   [RLIMIT_MSGQUEUE] = { MQ_BYTES_MAX, MQ_BYTES_MAX },   [RLIMIT_NICE] = { 0, 0 },   [RLIMIT_RTPRIO] = { 0, 0 },   [RLIMIT_RTTIME] = { RLIM_INFINITY, RLIM_INFINITY },  }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
