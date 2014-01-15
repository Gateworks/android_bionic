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
#ifndef __LINUX_CPUMASK_H
#define __LINUX_CPUMASK_H
#include <linux/kernel.h>
#include <linux/threads.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/bitmap.h>
#include <linux/bug.h>
typedef struct cpumask { DECLARE_BITMAP(bits, NR_CPUS); } cpumask_t;
#define cpumask_bits(maskp) ((maskp)->bits)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#if NR_CPUS == 1
#define nr_cpu_ids 1
#else
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define nr_cpumask_bits NR_CPUS
#if NR_CPUS > 1
#define num_online_cpus() cpumask_weight(cpu_online_mask)
#define num_possible_cpus() cpumask_weight(cpu_possible_mask)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define num_present_cpus() cpumask_weight(cpu_present_mask)
#define num_active_cpus() cpumask_weight(cpu_active_mask)
#define cpu_online(cpu) cpumask_test_cpu((cpu), cpu_online_mask)
#define cpu_possible(cpu) cpumask_test_cpu((cpu), cpu_possible_mask)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cpu_present(cpu) cpumask_test_cpu((cpu), cpu_present_mask)
#define cpu_active(cpu) cpumask_test_cpu((cpu), cpu_active_mask)
#else
#define num_online_cpus() 1U
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define num_possible_cpus() 1U
#define num_present_cpus() 1U
#define num_active_cpus() 1U
#define cpu_online(cpu) ((cpu) == 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cpu_possible(cpu) ((cpu) == 0)
#define cpu_present(cpu) ((cpu) == 0)
#define cpu_active(cpu) ((cpu) == 0)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#if NR_CPUS == 1
#define for_each_cpu(cpu, mask)   for ((cpu) = 0; (cpu) < 1; (cpu)++, (void)mask)
#define for_each_cpu_not(cpu, mask)   for ((cpu) = 0; (cpu) < 1; (cpu)++, (void)mask)
#else
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define for_each_cpu(cpu, mask)   for ((cpu) = -1;   (cpu) = cpumask_next((cpu), (mask)),   (cpu) < nr_cpu_ids;)
#define for_each_cpu_not(cpu, mask)   for ((cpu) = -1;   (cpu) = cpumask_next_zero((cpu), (mask)),   (cpu) < nr_cpu_ids;)
#define for_each_cpu_and(cpu, mask, and)   for ((cpu) = -1;   (cpu) = cpumask_next_and((cpu), (mask), (and)),   (cpu) < nr_cpu_ids;)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CPU_BITS_NONE  {   [0 ... BITS_TO_LONGS(NR_CPUS)-1] = 0UL  }
#define CPU_BITS_CPU0  {   [0] = 1UL  }
#define cpumask_test_cpu(cpu, cpumask)   test_bit(cpumask_check(cpu), cpumask_bits((cpumask)))
#define cpumask_any(srcp) cpumask_first(srcp)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cpumask_first_and(src1p, src2p) cpumask_next_and(-1, (src1p), (src2p))
#define cpumask_any_and(mask1, mask2) cpumask_first_and((mask1), (mask2))
#define cpumask_of(cpu) (get_cpu_mask(cpu))
typedef struct cpumask cpumask_var_t[1];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cpu_all_mask to_cpumask(cpu_all_bits)
#define cpu_none_mask to_cpumask(cpu_bit_bitmap[0])
#define for_each_possible_cpu(cpu) for_each_cpu((cpu), cpu_possible_mask)
#define for_each_online_cpu(cpu) for_each_cpu((cpu), cpu_online_mask)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define for_each_present_cpu(cpu) for_each_cpu((cpu), cpu_present_mask)
#define to_cpumask(bitmap)   ((struct cpumask *)(1 ? (bitmap)   : (void *)sizeof(__check_is_bitmap(bitmap))))
#define cpu_is_offline(cpu) unlikely(!cpu_online(cpu))
#if NR_CPUS <= BITS_PER_LONG
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CPU_BITS_ALL  {   [BITS_TO_LONGS(NR_CPUS)-1] = CPU_MASK_LAST_WORD  }
#else
#define CPU_BITS_ALL  {   [0 ... BITS_TO_LONGS(NR_CPUS)-2] = ~0UL,   [BITS_TO_LONGS(NR_CPUS)-1] = CPU_MASK_LAST_WORD  }
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cpumask_of_cpu(cpu) (*get_cpu_mask(cpu))
#define CPU_MASK_LAST_WORD BITMAP_LAST_WORD_MASK(NR_CPUS)
#if NR_CPUS <= BITS_PER_LONG
#define CPU_MASK_ALL  (cpumask_t) { {   [BITS_TO_LONGS(NR_CPUS)-1] = CPU_MASK_LAST_WORD  } }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#else
#define CPU_MASK_ALL  (cpumask_t) { {   [0 ... BITS_TO_LONGS(NR_CPUS)-2] = ~0UL,   [BITS_TO_LONGS(NR_CPUS)-1] = CPU_MASK_LAST_WORD  } }
#endif
#define CPU_MASK_NONE  (cpumask_t) { {   [0 ... BITS_TO_LONGS(NR_CPUS)-1] = 0UL  } }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CPU_MASK_CPU0  (cpumask_t) { {   [0] = 1UL  } }
#if NR_CPUS == 1
#define first_cpu(src) ({ (void)(src); 0; })
#define next_cpu(n, src) ({ (void)(src); 1; })
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define any_online_cpu(mask) 0
#define for_each_cpu_mask(cpu, mask)   for ((cpu) = 0; (cpu) < 1; (cpu)++, (void)mask)
#else
#define first_cpu(src) __first_cpu(&(src))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define next_cpu(n, src) __next_cpu((n), &(src))
#define any_online_cpu(mask) cpumask_any_and(&mask, cpu_online_mask)
#define for_each_cpu_mask(cpu, mask)   for ((cpu) = -1;   (cpu) = next_cpu((cpu), (mask)),   (cpu) < NR_CPUS; )
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#if NR_CPUS <= 64
#define for_each_cpu_mask_nr(cpu, mask) for_each_cpu_mask(cpu, mask)
#else
#define for_each_cpu_mask_nr(cpu, mask)   for ((cpu) = -1;   (cpu) = __next_cpu_nr((cpu), &(mask)),   (cpu) < nr_cpu_ids; )
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define cpus_addr(src) ((src).bits)
#define cpu_set(cpu, dst) __cpu_set((cpu), &(dst))
#define cpu_clear(cpu, dst) __cpu_clear((cpu), &(dst))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cpus_setall(dst) __cpus_setall(&(dst), NR_CPUS)
#define cpus_clear(dst) __cpus_clear(&(dst), NR_CPUS)
#define cpu_isset(cpu, cpumask) test_bit((cpu), (cpumask).bits)
#define cpu_test_and_set(cpu, cpumask) __cpu_test_and_set((cpu), &(cpumask))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cpus_and(dst, src1, src2) __cpus_and(&(dst), &(src1), &(src2), NR_CPUS)
#define cpus_or(dst, src1, src2) __cpus_or(&(dst), &(src1), &(src2), NR_CPUS)
#define cpus_xor(dst, src1, src2) __cpus_xor(&(dst), &(src1), &(src2), NR_CPUS)
#define cpus_andnot(dst, src1, src2)   __cpus_andnot(&(dst), &(src1), &(src2), NR_CPUS)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cpus_equal(src1, src2) __cpus_equal(&(src1), &(src2), NR_CPUS)
#define cpus_intersects(src1, src2) __cpus_intersects(&(src1), &(src2), NR_CPUS)
#define cpus_subset(src1, src2) __cpus_subset(&(src1), &(src2), NR_CPUS)
#define cpus_empty(src) __cpus_empty(&(src), NR_CPUS)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cpus_weight(cpumask) __cpus_weight(&(cpumask), NR_CPUS)
#define cpus_shift_left(dst, src, n)   __cpus_shift_left(&(dst), &(src), (n), NR_CPUS)
#endif
