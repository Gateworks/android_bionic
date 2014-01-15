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
#ifndef _LINUX_KDEV_T_H
#define _LINUX_KDEV_T_H
#include <uapi/linux/kdev_t.h>
#define MINORBITS 20
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MINORMASK ((1U << MINORBITS) - 1)
#define print_dev_t(buffer, dev)   sprintf((buffer), "%u:%u\n", MAJOR(dev), MINOR(dev))
#define format_dev_t(buffer, dev)   ({   sprintf(buffer, "%u:%u", MAJOR(dev), MINOR(dev));   buffer;   })
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
