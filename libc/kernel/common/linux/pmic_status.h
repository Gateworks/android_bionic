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
#ifndef __ASM_ARCH_MXC_PMIC_STATUS_H__
#define __ASM_ARCH_MXC_PMIC_STATUS_H__
#include <asm-generic/errno-base.h>
typedef enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PMIC_SUCCESS = 0,
 PMIC_ERROR = -1,
 PMIC_PARAMETER_ERROR = -2,
 PMIC_NOT_SUPPORTED = -3,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PMIC_SYSTEM_ERROR_EINTR = -EINTR,
 PMIC_MALLOC_ERROR = -5,
 PMIC_UNSUBSCRIBE_ERROR = -6,
 PMIC_EVENT_NOT_SUBSCRIBED = -7,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PMIC_EVENT_CALL_BACK = -8,
 PMIC_CLIENT_NBOVERFLOW = -9,
} PMIC_STATUS;
#define BITFMASK(field) (((1U << (field ## _WID)) - 1) << (field ## _LSH))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BITFVAL(field, val) ((val) << (field ## _LSH))
#define BITFEXT(var, bit) ((var & BITFMASK(bit)) >> (bit ## _LSH))
#define CHECK_ERROR(a)  do {   int ret = (a);   if (ret != PMIC_SUCCESS)   return ret;  } while (0)
#define CHECK_ERROR_KFREE(func, freeptrs)  do {   int ret = (func);   if (ret != PMIC_SUCCESS) {   freeptrs;   return ret;   }  } while (0);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
