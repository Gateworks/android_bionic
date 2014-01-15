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
#ifndef _FLEX_ARRAY_H
#define _FLEX_ARRAY_H
#include <linux/types.h>
#include <asm/page.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FLEX_ARRAY_PART_SIZE PAGE_SIZE
#define FLEX_ARRAY_BASE_SIZE PAGE_SIZE
struct flex_array_part;
struct flex_array {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 union {
 struct {
 int element_size;
 int total_nr_elements;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int elems_per_part;
 u32 reciprocal_elems;
 struct flex_array_part *parts[];
 };
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char padding[FLEX_ARRAY_BASE_SIZE];
 };
};
#define FLEX_ARRAY_BASE_BYTES_LEFT   (FLEX_ARRAY_BASE_SIZE - offsetof(struct flex_array, parts))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FLEX_ARRAY_NR_BASE_PTRS   (FLEX_ARRAY_BASE_BYTES_LEFT / sizeof(struct flex_array_part *))
#define FLEX_ARRAY_ELEMENTS_PER_PART(size)   (FLEX_ARRAY_PART_SIZE / size)
#define DEFINE_FLEX_ARRAY(__arrayname, __element_size, __total)   struct flex_array __arrayname = { { {   .element_size = (__element_size),   .total_nr_elements = (__total),   } } };   static inline void __arrayname##_invalid_parameter(void)   {   BUILD_BUG_ON((__total) > FLEX_ARRAY_NR_BASE_PTRS *   FLEX_ARRAY_ELEMENTS_PER_PART(__element_size));   }
struct flex_array *flex_array_alloc(int element_size, unsigned int total,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 gfp_t flags);
#define flex_array_put_ptr(fa, nr, src, gfp)   flex_array_put(fa, nr, (void *)&(src), gfp)
#endif
