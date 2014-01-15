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
#ifndef __LINUX_MTD_MAP_H__
#define __LINUX_MTD_MAP_H__
#include <linux/types.h>
#include <linux/list.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/string.h>
#include <linux/bug.h>
#include <linux/kernel.h>
#include <asm/unaligned.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <asm/io.h>
#include <asm/barrier.h>
#define map_bankwidth_is_1(map) (0)
#define map_bankwidth_is_2(map) (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define map_bankwidth_is_4(map) (0)
#define map_calc_words(map) ((map_bankwidth(map) + (sizeof(unsigned long)-1))/ sizeof(unsigned long))
#define map_bankwidth_is_8(map) (0)
#define map_bankwidth_is_16(map) (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define map_bankwidth_is_32(map) (0)
#ifndef map_bankwidth
#warning "No CONFIG_MTD_MAP_BANK_WIDTH_xx selected. No NOR chip support can work"
#define map_bankwidth_is_large(map) (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define map_words(map) (0)
#define MAX_MAP_BANKWIDTH 1
#endif
#define MAX_MAP_LONGS ( ((MAX_MAP_BANKWIDTH*8) + BITS_PER_LONG - 1) / BITS_PER_LONG )
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef union {
 unsigned long x[MAX_MAP_LONGS];
} map_word;
struct map_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const char *name;
 unsigned long size;
 resource_size_t phys;
#define NO_XIP (-1UL)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void __iomem *virt;
 void *cached;
 int swap;
 int bankwidth;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*inval_cache)(struct map_info *, unsigned long, ssize_t);
 void (*set_vpp)(struct map_info *, int);
 unsigned long pfow_base;
 unsigned long map_priv_1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long map_priv_2;
 struct device_node *device_node;
 void *fldrv_priv;
 struct mtd_chip_driver *fldrv;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct mtd_chip_driver {
 struct mtd_info *(*probe)(struct map_info *map);
 void (*destroy)(struct mtd_info *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct module *module;
 char *name;
};
struct mtd_info *do_map_probe(const char *name, struct map_info *map);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ENABLE_VPP(map) do { if(map->set_vpp) map->set_vpp(map, 1); } while(0)
#define DISABLE_VPP(map) do { if(map->set_vpp) map->set_vpp(map, 0); } while(0)
#define INVALIDATE_CACHED_RANGE(map, from, size)   do { if(map->inval_cache) map->inval_cache(map, from, size); } while(0)
#define map_word_andequal(m, a, b, z) map_word_equal(m, z, map_word_and(m, a, b))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#if BITS_PER_LONG >= 64
#endif
#ifdef __LITTLE_ENDIAN
#else
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#if BITS_PER_LONG < 64
#define MAP_FF_LIMIT 4
#else
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MAP_FF_LIMIT 8
#endif
#if BITS_PER_LONG >= 64
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#if BITS_PER_LONG >= 64
#endif
#define map_read(map, ofs) inline_map_read(map, ofs)
#define map_copy_from(map, to, from, len) inline_map_copy_from(map, to, from, len)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define map_write(map, datum, ofs) inline_map_write(map, datum, ofs)
#define map_copy_to(map, to, from, len) inline_map_copy_to(map, to, from, len)
#define simple_map_init(map) BUG_ON(!map_bankwidth_supported((map)->bankwidth))
#define map_is_linear(map) ({ (void)(map); 1; })
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
