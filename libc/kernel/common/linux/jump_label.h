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
#ifndef _LINUX_JUMP_LABEL_H
#define _LINUX_JUMP_LABEL_H
#include <linux/types.h>
#include <linux/compiler.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/workqueue.h>
#if defined(CC_HAVE_ASM_GOTO) && defined(CONFIG_JUMP_LABEL)
struct static_key {
 atomic_t enabled;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct jump_entry *entries;
};
struct static_key_deferred {
 struct static_key key;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long timeout;
 struct delayed_work work;
};
#include <asm/jump_label.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HAVE_JUMP_LABEL
#endif
enum jump_label_type {
 JUMP_LABEL_DISABLE = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 JUMP_LABEL_ENABLE,
};
struct module;
#ifdef HAVE_JUMP_LABEL
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define JUMP_LABEL_TRUE_BRANCH 1UL
#define STATIC_KEY_INIT_TRUE ((struct static_key)   { .enabled = ATOMIC_INIT(1), .entries = (void *)1 })
#define STATIC_KEY_INIT_FALSE ((struct static_key)   { .enabled = ATOMIC_INIT(0), .entries = (void *)0 })
#else
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/atomic.h>
struct static_key {
 atomic_t enabled;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct static_key_deferred {
 struct static_key key;
};
#define STATIC_KEY_INIT_TRUE ((struct static_key)   { .enabled = ATOMIC_INIT(1) })
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STATIC_KEY_INIT_FALSE ((struct static_key)   { .enabled = ATOMIC_INIT(0) })
#endif
#define STATIC_KEY_INIT STATIC_KEY_INIT_FALSE
#define jump_label_enabled static_key_enabled
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
