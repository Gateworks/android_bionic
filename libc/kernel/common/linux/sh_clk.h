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
#ifndef __SH_CLOCK_H
#define __SH_CLOCK_H
#include <linux/list.h>
#include <linux/seq_file.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/cpufreq.h>
#include <linux/types.h>
#include <linux/kref.h>
#include <linux/clk.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/err.h>
struct clk;
struct clk_mapping {
 phys_addr_t phys;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void __iomem *base;
 unsigned long len;
 struct kref ref;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct sh_clk_ops {
 int (*enable)(struct clk *clk);
 void (*disable)(struct clk *clk);
 unsigned long (*recalc)(struct clk *clk);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*set_rate)(struct clk *clk, unsigned long rate);
 int (*set_parent)(struct clk *clk, struct clk *parent);
 long (*round_rate)(struct clk *clk, unsigned long rate);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SH_CLK_DIV_MSK(div) ((1 << (div)) - 1)
#define SH_CLK_DIV4_MSK SH_CLK_DIV_MSK(4)
#define SH_CLK_DIV6_MSK SH_CLK_DIV_MSK(6)
struct clk {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct clk *parent;
 struct clk **parent_table;
 unsigned short parent_num;
 unsigned char src_shift;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char src_width;
 struct sh_clk_ops *ops;
 int usecount;
 unsigned long rate;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long flags;
 void __iomem *enable_reg;
 unsigned int enable_bit;
 void __iomem *mapped_reg;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int div_mask;
 unsigned long arch_flags;
 void *priv;
 struct clk_mapping *mapping;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct cpufreq_frequency_table *freq_table;
 unsigned int nr_freqs;
};
#define CLK_ENABLE_ON_INIT BIT(0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CLK_ENABLE_REG_32BIT BIT(1)
#define CLK_ENABLE_REG_16BIT BIT(2)
#define CLK_ENABLE_REG_8BIT BIT(3)
#define CLK_MASK_DIV_ON_DISABLE BIT(4)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CLK_ENABLE_REG_MASK (CLK_ENABLE_REG_32BIT |   CLK_ENABLE_REG_16BIT |   CLK_ENABLE_REG_8BIT)
struct clk_div_mult_table {
 unsigned int *divisors;
 unsigned int nr_divisors;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int *multipliers;
 unsigned int nr_multipliers;
};
struct cpufreq_frequency_table;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SH_CLK_MSTP(_parent, _enable_reg, _enable_bit, _flags)  {   .parent = _parent,   .enable_reg = (void __iomem *)_enable_reg,   .enable_bit = _enable_bit,   .flags = _flags,  }
#define SH_CLK_MSTP32(_p, _r, _b, _f)   SH_CLK_MSTP(_p, _r, _b, _f | CLK_ENABLE_REG_32BIT)
#define SH_CLK_MSTP16(_p, _r, _b, _f)   SH_CLK_MSTP(_p, _r, _b, _f | CLK_ENABLE_REG_16BIT)
#define SH_CLK_MSTP8(_p, _r, _b, _f)   SH_CLK_MSTP(_p, _r, _b, _f | CLK_ENABLE_REG_8BIT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SH_CLK_DIV4(_parent, _reg, _shift, _div_bitmap, _flags)  {   .parent = _parent,   .enable_reg = (void __iomem *)_reg,   .enable_bit = _shift,   .arch_flags = _div_bitmap,   .div_mask = SH_CLK_DIV4_MSK,   .flags = _flags,  }
struct clk_div_table {
 struct clk_div_mult_table *div_mult_table;
 void (*kick)(struct clk *clk);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define clk_div4_table clk_div_table
#define SH_CLK_DIV6_EXT(_reg, _flags, _parents,   _num_parents, _src_shift, _src_width)  {   .enable_reg = (void __iomem *)_reg,   .enable_bit = 0,     .flags = _flags | CLK_MASK_DIV_ON_DISABLE,   .div_mask = SH_CLK_DIV6_MSK,   .parent_table = _parents,   .parent_num = _num_parents,   .src_shift = _src_shift,   .src_width = _src_width,  }
#define SH_CLK_DIV6(_parent, _reg, _flags)  {   .parent = _parent,   .enable_reg = (void __iomem *)_reg,   .enable_bit = 0,     .div_mask = SH_CLK_DIV6_MSK,   .flags = _flags | CLK_MASK_DIV_ON_DISABLE,  }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CLKDEV_CON_ID(_id, _clk) { .con_id = _id, .clk = _clk }
#define CLKDEV_DEV_ID(_id, _clk) { .dev_id = _id, .clk = _clk }
#define CLKDEV_ICK_ID(_cid, _did, _clk) { .con_id = _cid, .dev_id = _did, .clk = _clk }
#define SH_CLK_FSIDIV(_reg, _parent)  {   .enable_reg = (void __iomem *)_reg,   .parent = _parent,  }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
