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
#ifndef _LINUX_FIREWIRE_H
#define _LINUX_FIREWIRE_H
#include <linux/completion.h>
#include <linux/device.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/dma-mapping.h>
#include <linux/kernel.h>
#include <linux/kref.h>
#include <linux/list.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/mutex.h>
#include <linux/spinlock.h>
#include <linux/sysfs.h>
#include <linux/timer.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/types.h>
#include <linux/workqueue.h>
#include <linux/atomic.h>
#include <asm/byteorder.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CSR_REGISTER_BASE 0xfffff0000000ULL
#define CSR_STATE_CLEAR 0x0
#define CSR_STATE_SET 0x4
#define CSR_NODE_IDS 0x8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CSR_RESET_START 0xc
#define CSR_SPLIT_TIMEOUT_HI 0x18
#define CSR_SPLIT_TIMEOUT_LO 0x1c
#define CSR_CYCLE_TIME 0x200
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CSR_BUS_TIME 0x204
#define CSR_BUSY_TIMEOUT 0x210
#define CSR_PRIORITY_BUDGET 0x218
#define CSR_BUS_MANAGER_ID 0x21c
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CSR_BANDWIDTH_AVAILABLE 0x220
#define CSR_CHANNELS_AVAILABLE 0x224
#define CSR_CHANNELS_AVAILABLE_HI 0x224
#define CSR_CHANNELS_AVAILABLE_LO 0x228
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CSR_MAINT_UTILITY 0x230
#define CSR_BROADCAST_CHANNEL 0x234
#define CSR_CONFIG_ROM 0x400
#define CSR_CONFIG_ROM_END 0x800
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CSR_OMPR 0x900
#define CSR_OPCR(i) (0x904 + (i) * 4)
#define CSR_IMPR 0x980
#define CSR_IPCR(i) (0x984 + (i) * 4)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CSR_FCP_COMMAND 0xB00
#define CSR_FCP_RESPONSE 0xD00
#define CSR_FCP_END 0xF00
#define CSR_TOPOLOGY_MAP 0x1000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CSR_TOPOLOGY_MAP_END 0x1400
#define CSR_SPEED_MAP 0x2000
#define CSR_SPEED_MAP_END 0x3000
#define CSR_OFFSET 0x40
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CSR_LEAF 0x80
#define CSR_DIRECTORY 0xc0
#define CSR_DESCRIPTOR 0x01
#define CSR_VENDOR 0x03
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CSR_HARDWARE_VERSION 0x04
#define CSR_UNIT 0x11
#define CSR_SPECIFIER_ID 0x12
#define CSR_VERSION 0x13
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CSR_DEPENDENT_INFO 0x14
#define CSR_MODEL 0x17
#define CSR_DIRECTORY_ID 0x20
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
