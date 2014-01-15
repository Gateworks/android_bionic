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
#ifndef __LINUX_PERCPU_H
#define __LINUX_PERCPU_H
#include <linux/preempt.h>
#include <linux/smp.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/cpumask.h>
#include <linux/pfn.h>
#include <linux/init.h>
#include <asm/percpu.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PERCPU_MODULE_RESERVE 0
#ifndef PERCPU_ENOUGH_ROOM
#define PERCPU_ENOUGH_ROOM   (ALIGN(__per_cpu_end - __per_cpu_start, SMP_CACHE_BYTES) +   PERCPU_MODULE_RESERVE)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define get_cpu_var(var) (*({   preempt_disable();   &__get_cpu_var(var); }))
#define put_cpu_var(var) do {   (void)&(var);   preempt_enable();  } while (0)
#define get_cpu_ptr(var) ({   preempt_disable();   this_cpu_ptr(var); })
#define put_cpu_ptr(var) do {   (void)(var);   preempt_enable();  } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PCPU_MIN_UNIT_SIZE PFN_ALIGN(32 << 10)
#define PERCPU_DYNAMIC_EARLY_SLOTS 128
#define PERCPU_DYNAMIC_EARLY_SIZE (12 << 10)
#if BITS_PER_LONG > 32
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PERCPU_DYNAMIC_RESERVE (20 << 10)
#else
#define PERCPU_DYNAMIC_RESERVE (12 << 10)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct pcpu_group_info {
 int nr_units;
 unsigned long base_offset;
 unsigned int *cpu_map;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct pcpu_alloc_info {
 size_t static_size;
 size_t reserved_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 size_t dyn_size;
 size_t unit_size;
 size_t atom_size;
 size_t alloc_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 size_t __ai_size;
 int nr_groups;
 struct pcpu_group_info groups[];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum pcpu_fc {
 PCPU_FC_AUTO,
 PCPU_FC_EMBED,
 PCPU_FC_PAGE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PCPU_FC_NR,
};
typedef void * (*pcpu_fc_alloc_fn_t)(unsigned int cpu, size_t size,
 size_t align);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef void (*pcpu_fc_free_fn_t)(void *ptr, size_t size);
typedef void (*pcpu_fc_populate_pte_fn_t)(unsigned long addr);
typedef int (pcpu_fc_cpu_distance_fn_t)(unsigned int from, unsigned int to);
#define per_cpu_ptr(ptr, cpu) ({ (void)(cpu); VERIFY_PERCPU_PTR((ptr)); })
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define alloc_percpu(type)   (typeof(type) __percpu *)__alloc_percpu(sizeof(type), __alignof__(type))
#define __pcpu_size_call_return(stem, variable)  ({ typeof(variable) pscr_ret__;   __verify_pcpu_ptr(&(variable));   switch(sizeof(variable)) {   case 1: pscr_ret__ = stem##1(variable);break;   case 2: pscr_ret__ = stem##2(variable);break;   case 4: pscr_ret__ = stem##4(variable);break;   case 8: pscr_ret__ = stem##8(variable);break;   default:   __bad_size_call_parameter();break;   }   pscr_ret__;  })
#define __pcpu_size_call_return2(stem, variable, ...)  ({   typeof(variable) pscr2_ret__;   __verify_pcpu_ptr(&(variable));   switch(sizeof(variable)) {   case 1: pscr2_ret__ = stem##1(variable, __VA_ARGS__); break;   case 2: pscr2_ret__ = stem##2(variable, __VA_ARGS__); break;   case 4: pscr2_ret__ = stem##4(variable, __VA_ARGS__); break;   case 8: pscr2_ret__ = stem##8(variable, __VA_ARGS__); break;   default:   __bad_size_call_parameter(); break;   }   pscr2_ret__;  })
#define __pcpu_double_call_return_bool(stem, pcp1, pcp2, ...)  ({   bool pdcrb_ret__;   __verify_pcpu_ptr(&pcp1);   BUILD_BUG_ON(sizeof(pcp1) != sizeof(pcp2));   VM_BUG_ON((unsigned long)(&pcp1) % (2 * sizeof(pcp1)));   VM_BUG_ON((unsigned long)(&pcp2) !=   (unsigned long)(&pcp1) + sizeof(pcp1));   switch(sizeof(pcp1)) {   case 1: pdcrb_ret__ = stem##1(pcp1, pcp2, __VA_ARGS__); break;   case 2: pdcrb_ret__ = stem##2(pcp1, pcp2, __VA_ARGS__); break;   case 4: pdcrb_ret__ = stem##4(pcp1, pcp2, __VA_ARGS__); break;   case 8: pdcrb_ret__ = stem##8(pcp1, pcp2, __VA_ARGS__); break;   default:   __bad_size_call_parameter(); break;   }   pdcrb_ret__;  })
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __pcpu_size_call(stem, variable, ...)  do {   __verify_pcpu_ptr(&(variable));   switch(sizeof(variable)) {   case 1: stem##1(variable, __VA_ARGS__);break;   case 2: stem##2(variable, __VA_ARGS__);break;   case 4: stem##4(variable, __VA_ARGS__);break;   case 8: stem##8(variable, __VA_ARGS__);break;   default:   __bad_size_call_parameter();break;   }  } while (0)
#define _this_cpu_generic_read(pcp)  ({ typeof(pcp) ret__;   preempt_disable();   ret__ = *this_cpu_ptr(&(pcp));   preempt_enable();   ret__;  })
#ifndef this_cpu_read
#ifndef this_cpu_read_1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define this_cpu_read_1(pcp) _this_cpu_generic_read(pcp)
#endif
#ifndef this_cpu_read_2
#define this_cpu_read_2(pcp) _this_cpu_generic_read(pcp)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef this_cpu_read_4
#define this_cpu_read_4(pcp) _this_cpu_generic_read(pcp)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef this_cpu_read_8
#define this_cpu_read_8(pcp) _this_cpu_generic_read(pcp)
#endif
#define this_cpu_read(pcp) __pcpu_size_call_return(this_cpu_read_, (pcp))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define _this_cpu_generic_to_op(pcp, val, op)  do {   unsigned long flags;   raw_local_irq_save(flags);   *__this_cpu_ptr(&(pcp)) op val;   raw_local_irq_restore(flags);  } while (0)
#ifndef this_cpu_write
#ifndef this_cpu_write_1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define this_cpu_write_1(pcp, val) _this_cpu_generic_to_op((pcp), (val), =)
#endif
#ifndef this_cpu_write_2
#define this_cpu_write_2(pcp, val) _this_cpu_generic_to_op((pcp), (val), =)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef this_cpu_write_4
#define this_cpu_write_4(pcp, val) _this_cpu_generic_to_op((pcp), (val), =)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef this_cpu_write_8
#define this_cpu_write_8(pcp, val) _this_cpu_generic_to_op((pcp), (val), =)
#endif
#define this_cpu_write(pcp, val) __pcpu_size_call(this_cpu_write_, (pcp), (val))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef this_cpu_add
#ifndef this_cpu_add_1
#define this_cpu_add_1(pcp, val) _this_cpu_generic_to_op((pcp), (val), +=)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef this_cpu_add_2
#define this_cpu_add_2(pcp, val) _this_cpu_generic_to_op((pcp), (val), +=)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef this_cpu_add_4
#define this_cpu_add_4(pcp, val) _this_cpu_generic_to_op((pcp), (val), +=)
#endif
#ifndef this_cpu_add_8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define this_cpu_add_8(pcp, val) _this_cpu_generic_to_op((pcp), (val), +=)
#endif
#define this_cpu_add(pcp, val) __pcpu_size_call(this_cpu_add_, (pcp), (val))
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef this_cpu_sub
#define this_cpu_sub(pcp, val) this_cpu_add((pcp), -(val))
#endif
#ifndef this_cpu_inc
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define this_cpu_inc(pcp) this_cpu_add((pcp), 1)
#endif
#ifndef this_cpu_dec
#define this_cpu_dec(pcp) this_cpu_sub((pcp), 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef this_cpu_and
#ifndef this_cpu_and_1
#define this_cpu_and_1(pcp, val) _this_cpu_generic_to_op((pcp), (val), &=)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef this_cpu_and_2
#define this_cpu_and_2(pcp, val) _this_cpu_generic_to_op((pcp), (val), &=)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef this_cpu_and_4
#define this_cpu_and_4(pcp, val) _this_cpu_generic_to_op((pcp), (val), &=)
#endif
#ifndef this_cpu_and_8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define this_cpu_and_8(pcp, val) _this_cpu_generic_to_op((pcp), (val), &=)
#endif
#define this_cpu_and(pcp, val) __pcpu_size_call(this_cpu_and_, (pcp), (val))
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef this_cpu_or
#ifndef this_cpu_or_1
#define this_cpu_or_1(pcp, val) _this_cpu_generic_to_op((pcp), (val), |=)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef this_cpu_or_2
#define this_cpu_or_2(pcp, val) _this_cpu_generic_to_op((pcp), (val), |=)
#endif
#ifndef this_cpu_or_4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define this_cpu_or_4(pcp, val) _this_cpu_generic_to_op((pcp), (val), |=)
#endif
#ifndef this_cpu_or_8
#define this_cpu_or_8(pcp, val) _this_cpu_generic_to_op((pcp), (val), |=)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define this_cpu_or(pcp, val) __pcpu_size_call(this_cpu_or_, (pcp), (val))
#endif
#ifndef this_cpu_xor
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef this_cpu_xor_1
#define this_cpu_xor_1(pcp, val) _this_cpu_generic_to_op((pcp), (val), ^=)
#endif
#ifndef this_cpu_xor_2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define this_cpu_xor_2(pcp, val) _this_cpu_generic_to_op((pcp), (val), ^=)
#endif
#ifndef this_cpu_xor_4
#define this_cpu_xor_4(pcp, val) _this_cpu_generic_to_op((pcp), (val), ^=)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef this_cpu_xor_8
#define this_cpu_xor_8(pcp, val) _this_cpu_generic_to_op((pcp), (val), ^=)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define this_cpu_xor(pcp, val) __pcpu_size_call(this_cpu_or_, (pcp), (val))
#endif
#define _this_cpu_generic_add_return(pcp, val)  ({   typeof(pcp) ret__;   unsigned long flags;   raw_local_irq_save(flags);   __this_cpu_add(pcp, val);   ret__ = __this_cpu_read(pcp);   raw_local_irq_restore(flags);   ret__;  })
#ifndef this_cpu_add_return
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef this_cpu_add_return_1
#define this_cpu_add_return_1(pcp, val) _this_cpu_generic_add_return(pcp, val)
#endif
#ifndef this_cpu_add_return_2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define this_cpu_add_return_2(pcp, val) _this_cpu_generic_add_return(pcp, val)
#endif
#ifndef this_cpu_add_return_4
#define this_cpu_add_return_4(pcp, val) _this_cpu_generic_add_return(pcp, val)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef this_cpu_add_return_8
#define this_cpu_add_return_8(pcp, val) _this_cpu_generic_add_return(pcp, val)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define this_cpu_add_return(pcp, val) __pcpu_size_call_return2(this_cpu_add_return_, pcp, val)
#endif
#define this_cpu_sub_return(pcp, val) this_cpu_add_return(pcp, -(val))
#define this_cpu_inc_return(pcp) this_cpu_add_return(pcp, 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define this_cpu_dec_return(pcp) this_cpu_add_return(pcp, -1)
#define _this_cpu_generic_xchg(pcp, nval)  ({ typeof(pcp) ret__;   unsigned long flags;   raw_local_irq_save(flags);   ret__ = __this_cpu_read(pcp);   __this_cpu_write(pcp, nval);   raw_local_irq_restore(flags);   ret__;  })
#ifndef this_cpu_xchg
#ifndef this_cpu_xchg_1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define this_cpu_xchg_1(pcp, nval) _this_cpu_generic_xchg(pcp, nval)
#endif
#ifndef this_cpu_xchg_2
#define this_cpu_xchg_2(pcp, nval) _this_cpu_generic_xchg(pcp, nval)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef this_cpu_xchg_4
#define this_cpu_xchg_4(pcp, nval) _this_cpu_generic_xchg(pcp, nval)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef this_cpu_xchg_8
#define this_cpu_xchg_8(pcp, nval) _this_cpu_generic_xchg(pcp, nval)
#endif
#define this_cpu_xchg(pcp, nval)   __pcpu_size_call_return2(this_cpu_xchg_, (pcp), nval)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define _this_cpu_generic_cmpxchg(pcp, oval, nval)  ({   typeof(pcp) ret__;   unsigned long flags;   raw_local_irq_save(flags);   ret__ = __this_cpu_read(pcp);   if (ret__ == (oval))   __this_cpu_write(pcp, nval);   raw_local_irq_restore(flags);   ret__;  })
#ifndef this_cpu_cmpxchg
#ifndef this_cpu_cmpxchg_1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define this_cpu_cmpxchg_1(pcp, oval, nval) _this_cpu_generic_cmpxchg(pcp, oval, nval)
#endif
#ifndef this_cpu_cmpxchg_2
#define this_cpu_cmpxchg_2(pcp, oval, nval) _this_cpu_generic_cmpxchg(pcp, oval, nval)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef this_cpu_cmpxchg_4
#define this_cpu_cmpxchg_4(pcp, oval, nval) _this_cpu_generic_cmpxchg(pcp, oval, nval)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef this_cpu_cmpxchg_8
#define this_cpu_cmpxchg_8(pcp, oval, nval) _this_cpu_generic_cmpxchg(pcp, oval, nval)
#endif
#define this_cpu_cmpxchg(pcp, oval, nval)   __pcpu_size_call_return2(this_cpu_cmpxchg_, pcp, oval, nval)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define _this_cpu_generic_cmpxchg_double(pcp1, pcp2, oval1, oval2, nval1, nval2)  ({   int ret__;   unsigned long flags;   raw_local_irq_save(flags);   ret__ = __this_cpu_generic_cmpxchg_double(pcp1, pcp2,   oval1, oval2, nval1, nval2);   raw_local_irq_restore(flags);   ret__;  })
#ifndef this_cpu_cmpxchg_double
#ifndef this_cpu_cmpxchg_double_1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define this_cpu_cmpxchg_double_1(pcp1, pcp2, oval1, oval2, nval1, nval2)   _this_cpu_generic_cmpxchg_double(pcp1, pcp2, oval1, oval2, nval1, nval2)
#endif
#ifndef this_cpu_cmpxchg_double_2
#define this_cpu_cmpxchg_double_2(pcp1, pcp2, oval1, oval2, nval1, nval2)   _this_cpu_generic_cmpxchg_double(pcp1, pcp2, oval1, oval2, nval1, nval2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef this_cpu_cmpxchg_double_4
#define this_cpu_cmpxchg_double_4(pcp1, pcp2, oval1, oval2, nval1, nval2)   _this_cpu_generic_cmpxchg_double(pcp1, pcp2, oval1, oval2, nval1, nval2)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef this_cpu_cmpxchg_double_8
#define this_cpu_cmpxchg_double_8(pcp1, pcp2, oval1, oval2, nval1, nval2)   _this_cpu_generic_cmpxchg_double(pcp1, pcp2, oval1, oval2, nval1, nval2)
#endif
#define this_cpu_cmpxchg_double(pcp1, pcp2, oval1, oval2, nval1, nval2)   __pcpu_double_call_return_bool(this_cpu_cmpxchg_double_, (pcp1), (pcp2), (oval1), (oval2), (nval1), (nval2))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef __this_cpu_read
#ifndef __this_cpu_read_1
#define __this_cpu_read_1(pcp) (*__this_cpu_ptr(&(pcp)))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef __this_cpu_read_2
#define __this_cpu_read_2(pcp) (*__this_cpu_ptr(&(pcp)))
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef __this_cpu_read_4
#define __this_cpu_read_4(pcp) (*__this_cpu_ptr(&(pcp)))
#endif
#ifndef __this_cpu_read_8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __this_cpu_read_8(pcp) (*__this_cpu_ptr(&(pcp)))
#endif
#define __this_cpu_read(pcp) __pcpu_size_call_return(__this_cpu_read_, (pcp))
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __this_cpu_generic_to_op(pcp, val, op)  do {   *__this_cpu_ptr(&(pcp)) op val;  } while (0)
#ifndef __this_cpu_write
#ifndef __this_cpu_write_1
#define __this_cpu_write_1(pcp, val) __this_cpu_generic_to_op((pcp), (val), =)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef __this_cpu_write_2
#define __this_cpu_write_2(pcp, val) __this_cpu_generic_to_op((pcp), (val), =)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef __this_cpu_write_4
#define __this_cpu_write_4(pcp, val) __this_cpu_generic_to_op((pcp), (val), =)
#endif
#ifndef __this_cpu_write_8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __this_cpu_write_8(pcp, val) __this_cpu_generic_to_op((pcp), (val), =)
#endif
#define __this_cpu_write(pcp, val) __pcpu_size_call(__this_cpu_write_, (pcp), (val))
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef __this_cpu_add
#ifndef __this_cpu_add_1
#define __this_cpu_add_1(pcp, val) __this_cpu_generic_to_op((pcp), (val), +=)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef __this_cpu_add_2
#define __this_cpu_add_2(pcp, val) __this_cpu_generic_to_op((pcp), (val), +=)
#endif
#ifndef __this_cpu_add_4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __this_cpu_add_4(pcp, val) __this_cpu_generic_to_op((pcp), (val), +=)
#endif
#ifndef __this_cpu_add_8
#define __this_cpu_add_8(pcp, val) __this_cpu_generic_to_op((pcp), (val), +=)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define __this_cpu_add(pcp, val) __pcpu_size_call(__this_cpu_add_, (pcp), (val))
#endif
#ifndef __this_cpu_sub
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __this_cpu_sub(pcp, val) __this_cpu_add((pcp), -(val))
#endif
#ifndef __this_cpu_inc
#define __this_cpu_inc(pcp) __this_cpu_add((pcp), 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef __this_cpu_dec
#define __this_cpu_dec(pcp) __this_cpu_sub((pcp), 1)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef __this_cpu_and
#ifndef __this_cpu_and_1
#define __this_cpu_and_1(pcp, val) __this_cpu_generic_to_op((pcp), (val), &=)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef __this_cpu_and_2
#define __this_cpu_and_2(pcp, val) __this_cpu_generic_to_op((pcp), (val), &=)
#endif
#ifndef __this_cpu_and_4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __this_cpu_and_4(pcp, val) __this_cpu_generic_to_op((pcp), (val), &=)
#endif
#ifndef __this_cpu_and_8
#define __this_cpu_and_8(pcp, val) __this_cpu_generic_to_op((pcp), (val), &=)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define __this_cpu_and(pcp, val) __pcpu_size_call(__this_cpu_and_, (pcp), (val))
#endif
#ifndef __this_cpu_or
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef __this_cpu_or_1
#define __this_cpu_or_1(pcp, val) __this_cpu_generic_to_op((pcp), (val), |=)
#endif
#ifndef __this_cpu_or_2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __this_cpu_or_2(pcp, val) __this_cpu_generic_to_op((pcp), (val), |=)
#endif
#ifndef __this_cpu_or_4
#define __this_cpu_or_4(pcp, val) __this_cpu_generic_to_op((pcp), (val), |=)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef __this_cpu_or_8
#define __this_cpu_or_8(pcp, val) __this_cpu_generic_to_op((pcp), (val), |=)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __this_cpu_or(pcp, val) __pcpu_size_call(__this_cpu_or_, (pcp), (val))
#endif
#ifndef __this_cpu_xor
#ifndef __this_cpu_xor_1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __this_cpu_xor_1(pcp, val) __this_cpu_generic_to_op((pcp), (val), ^=)
#endif
#ifndef __this_cpu_xor_2
#define __this_cpu_xor_2(pcp, val) __this_cpu_generic_to_op((pcp), (val), ^=)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef __this_cpu_xor_4
#define __this_cpu_xor_4(pcp, val) __this_cpu_generic_to_op((pcp), (val), ^=)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef __this_cpu_xor_8
#define __this_cpu_xor_8(pcp, val) __this_cpu_generic_to_op((pcp), (val), ^=)
#endif
#define __this_cpu_xor(pcp, val) __pcpu_size_call(__this_cpu_xor_, (pcp), (val))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define __this_cpu_generic_add_return(pcp, val)  ({   __this_cpu_add(pcp, val);   __this_cpu_read(pcp);  })
#ifndef __this_cpu_add_return
#ifndef __this_cpu_add_return_1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __this_cpu_add_return_1(pcp, val) __this_cpu_generic_add_return(pcp, val)
#endif
#ifndef __this_cpu_add_return_2
#define __this_cpu_add_return_2(pcp, val) __this_cpu_generic_add_return(pcp, val)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef __this_cpu_add_return_4
#define __this_cpu_add_return_4(pcp, val) __this_cpu_generic_add_return(pcp, val)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef __this_cpu_add_return_8
#define __this_cpu_add_return_8(pcp, val) __this_cpu_generic_add_return(pcp, val)
#endif
#define __this_cpu_add_return(pcp, val)   __pcpu_size_call_return2(__this_cpu_add_return_, pcp, val)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define __this_cpu_sub_return(pcp, val) __this_cpu_add_return(pcp, -(val))
#define __this_cpu_inc_return(pcp) __this_cpu_add_return(pcp, 1)
#define __this_cpu_dec_return(pcp) __this_cpu_add_return(pcp, -1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __this_cpu_generic_xchg(pcp, nval)  ({ typeof(pcp) ret__;   ret__ = __this_cpu_read(pcp);   __this_cpu_write(pcp, nval);   ret__;  })
#ifndef __this_cpu_xchg
#ifndef __this_cpu_xchg_1
#define __this_cpu_xchg_1(pcp, nval) __this_cpu_generic_xchg(pcp, nval)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef __this_cpu_xchg_2
#define __this_cpu_xchg_2(pcp, nval) __this_cpu_generic_xchg(pcp, nval)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef __this_cpu_xchg_4
#define __this_cpu_xchg_4(pcp, nval) __this_cpu_generic_xchg(pcp, nval)
#endif
#ifndef __this_cpu_xchg_8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __this_cpu_xchg_8(pcp, nval) __this_cpu_generic_xchg(pcp, nval)
#endif
#define __this_cpu_xchg(pcp, nval)   __pcpu_size_call_return2(__this_cpu_xchg_, (pcp), nval)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __this_cpu_generic_cmpxchg(pcp, oval, nval)  ({   typeof(pcp) ret__;   ret__ = __this_cpu_read(pcp);   if (ret__ == (oval))   __this_cpu_write(pcp, nval);   ret__;  })
#ifndef __this_cpu_cmpxchg
#ifndef __this_cpu_cmpxchg_1
#define __this_cpu_cmpxchg_1(pcp, oval, nval) __this_cpu_generic_cmpxchg(pcp, oval, nval)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef __this_cpu_cmpxchg_2
#define __this_cpu_cmpxchg_2(pcp, oval, nval) __this_cpu_generic_cmpxchg(pcp, oval, nval)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef __this_cpu_cmpxchg_4
#define __this_cpu_cmpxchg_4(pcp, oval, nval) __this_cpu_generic_cmpxchg(pcp, oval, nval)
#endif
#ifndef __this_cpu_cmpxchg_8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __this_cpu_cmpxchg_8(pcp, oval, nval) __this_cpu_generic_cmpxchg(pcp, oval, nval)
#endif
#define __this_cpu_cmpxchg(pcp, oval, nval)   __pcpu_size_call_return2(__this_cpu_cmpxchg_, pcp, oval, nval)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __this_cpu_generic_cmpxchg_double(pcp1, pcp2, oval1, oval2, nval1, nval2)  ({   int __ret = 0;   if (__this_cpu_read(pcp1) == (oval1) &&   __this_cpu_read(pcp2) == (oval2)) {   __this_cpu_write(pcp1, (nval1));   __this_cpu_write(pcp2, (nval2));   __ret = 1;   }   (__ret);  })
#ifndef __this_cpu_cmpxchg_double
#ifndef __this_cpu_cmpxchg_double_1
#define __this_cpu_cmpxchg_double_1(pcp1, pcp2, oval1, oval2, nval1, nval2)   __this_cpu_generic_cmpxchg_double(pcp1, pcp2, oval1, oval2, nval1, nval2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef __this_cpu_cmpxchg_double_2
#define __this_cpu_cmpxchg_double_2(pcp1, pcp2, oval1, oval2, nval1, nval2)   __this_cpu_generic_cmpxchg_double(pcp1, pcp2, oval1, oval2, nval1, nval2)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef __this_cpu_cmpxchg_double_4
#define __this_cpu_cmpxchg_double_4(pcp1, pcp2, oval1, oval2, nval1, nval2)   __this_cpu_generic_cmpxchg_double(pcp1, pcp2, oval1, oval2, nval1, nval2)
#endif
#ifndef __this_cpu_cmpxchg_double_8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __this_cpu_cmpxchg_double_8(pcp1, pcp2, oval1, oval2, nval1, nval2)   __this_cpu_generic_cmpxchg_double(pcp1, pcp2, oval1, oval2, nval1, nval2)
#endif
#define __this_cpu_cmpxchg_double(pcp1, pcp2, oval1, oval2, nval1, nval2)   __pcpu_double_call_return_bool(__this_cpu_cmpxchg_double_, (pcp1), (pcp2), (oval1), (oval2), (nval1), (nval2))
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
