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
#ifndef PAGE_FLAGS_H
#define PAGE_FLAGS_H
#include <linux/types.h>
#include <linux/bug.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/mmdebug.h>
#ifndef __GENERATING_BOUNDS_H
#include <linux/mm_types.h>
#include <generated/bounds.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
enum pageflags {
 PG_locked,
 PG_error,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PG_referenced,
 PG_uptodate,
 PG_dirty,
 PG_lru,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PG_active,
 PG_slab,
 PG_owner_priv_1,
 PG_arch_1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PG_reserved,
 PG_private,
 PG_private_2,
 PG_writeback,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PG_compound,
 PG_swapcache,
 PG_mappedtodisk,
 PG_reclaim,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PG_swapbacked,
 PG_unevictable,
 __NR_PAGEFLAGS,
 PG_checked = PG_owner_priv_1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PG_fscache = PG_private_2,
 PG_pinned = PG_owner_priv_1,
 PG_savepinned = PG_dirty,
 PG_slob_free = PG_private,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#ifndef __GENERATING_BOUNDS_H
#define TESTPAGEFLAG(uname, lname)  static inline int Page##uname(const struct page *page)   { return test_bit(PG_##lname, &page->flags); }
#define SETPAGEFLAG(uname, lname)  static inline void SetPage##uname(struct page *page)   { set_bit(PG_##lname, &page->flags); }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CLEARPAGEFLAG(uname, lname)  static inline void ClearPage##uname(struct page *page)   { clear_bit(PG_##lname, &page->flags); }
#define __SETPAGEFLAG(uname, lname)  static inline void __SetPage##uname(struct page *page)   { __set_bit(PG_##lname, &page->flags); }
#define __CLEARPAGEFLAG(uname, lname)  static inline void __ClearPage##uname(struct page *page)   { __clear_bit(PG_##lname, &page->flags); }
#define TESTSETFLAG(uname, lname)  static inline int TestSetPage##uname(struct page *page)   { return test_and_set_bit(PG_##lname, &page->flags); }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TESTCLEARFLAG(uname, lname)  static inline int TestClearPage##uname(struct page *page)   { return test_and_clear_bit(PG_##lname, &page->flags); }
#define __TESTCLEARFLAG(uname, lname)  static inline int __TestClearPage##uname(struct page *page)   { return __test_and_clear_bit(PG_##lname, &page->flags); }
#define PAGEFLAG(uname, lname) TESTPAGEFLAG(uname, lname)   SETPAGEFLAG(uname, lname) CLEARPAGEFLAG(uname, lname)
#define __PAGEFLAG(uname, lname) TESTPAGEFLAG(uname, lname)   __SETPAGEFLAG(uname, lname) __CLEARPAGEFLAG(uname, lname)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PAGEFLAG_FALSE(uname)  static inline int Page##uname(const struct page *page)   { return 0; }
#define TESTSCFLAG(uname, lname)   TESTSETFLAG(uname, lname) TESTCLEARFLAG(uname, lname)
#define SETPAGEFLAG_NOOP(uname)  static inline void SetPage##uname(struct page *page) { }
#define CLEARPAGEFLAG_NOOP(uname)  static inline void ClearPage##uname(struct page *page) { }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __CLEARPAGEFLAG_NOOP(uname)  static inline void __ClearPage##uname(struct page *page) { }
#define TESTCLEARFLAG_FALSE(uname)  static inline int TestClearPage##uname(struct page *page) { return 0; }
#define __TESTCLEARFLAG_FALSE(uname)  static inline int __TestClearPage##uname(struct page *page) { return 0; }
struct page;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __PG_HWPOISON 0
#define PG_head_mask ((1L << PG_compound))
#define PG_head_tail_mask ((1L << PG_compound) | (1L << PG_reclaim))
#define __PG_MLOCKED 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __PG_COMPOUND_LOCK 0
#define PAGE_FLAGS_CHECK_AT_FREE   (1 << PG_lru | 1 << PG_locked |   1 << PG_private | 1 << PG_private_2 |   1 << PG_writeback | 1 << PG_reserved |   1 << PG_slab | 1 << PG_swapcache | 1 << PG_active |   1 << PG_unevictable | __PG_MLOCKED | __PG_HWPOISON |   __PG_COMPOUND_LOCK)
#define PAGE_FLAGS_CHECK_AT_PREP ((1 << NR_PAGEFLAGS) - 1)
#define PAGE_FLAGS_PRIVATE   (1 << PG_private | 1 << PG_private_2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#endif
