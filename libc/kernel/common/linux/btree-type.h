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
#define __BTREE_TP(pfx, type, sfx) pfx ## type ## sfx
#define _BTREE_TP(pfx, type, sfx) __BTREE_TP(pfx, type, sfx)
#define BTREE_TP(pfx) _BTREE_TP(pfx, BTREE_TYPE_SUFFIX,)
#define BTREE_FN(name) BTREE_TP(btree_ ## name)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BTREE_TYPE_HEAD BTREE_TP(struct btree_head)
#define VISITOR_FN BTREE_TP(visitor)
#define VISITOR_FN_T _BTREE_TP(visitor, BTREE_TYPE_SUFFIX, _t)
#if BITS_PER_LONG > BTREE_TYPE_BITS
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#else
#endif
typedef void (*VISITOR_FN_T)(void *elem, unsigned long opaque,
 BTREE_KEYTYPE key, size_t index);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#undef VISITOR_FN
#undef VISITOR_FN_T
#undef __BTREE_TP
#undef _BTREE_TP
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#undef BTREE_TP
#undef BTREE_FN
#undef BTREE_TYPE_HEAD
#undef BTREE_TYPE_SUFFIX
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#undef BTREE_TYPE_GEO
#undef BTREE_KEYTYPE
#undef BTREE_TYPE_BITS
