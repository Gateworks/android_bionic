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
#ifndef _LINUX_SFI_H
#define _LINUX_SFI_H
#define SFI_SIG_SYST "SYST"
#define SFI_SIG_FREQ "FREQ"
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SFI_SIG_IDLE "IDLE"
#define SFI_SIG_CPUS "CPUS"
#define SFI_SIG_MTMR "MTMR"
#define SFI_SIG_MRTC "MRTC"
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SFI_SIG_MMAP "MMAP"
#define SFI_SIG_APIC "APIC"
#define SFI_SIG_XSDT "XSDT"
#define SFI_SIG_WAKE "WAKE"
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SFI_SIG_DEVS "DEVS"
#define SFI_SIG_GPIO "GPIO"
#define SFI_SIGNATURE_SIZE 4
#define SFI_OEM_ID_SIZE 6
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SFI_OEM_TABLE_ID_SIZE 8
#define SFI_NAME_LEN 16
#define SFI_SYST_SEARCH_BEGIN 0x000E0000
#define SFI_SYST_SEARCH_END 0x000FFFFF
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SFI_GET_NUM_ENTRIES(ptable, entry_type)   ((ptable->header.len - sizeof(struct sfi_table_header)) /   (sizeof(entry_type)))
struct sfi_table_header {
 char sig[SFI_SIGNATURE_SIZE];
 u32 len;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 rev;
 u8 csum;
 char oem_id[SFI_OEM_ID_SIZE];
 char oem_table_id[SFI_OEM_TABLE_ID_SIZE];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __packed;
struct sfi_table_simple {
 struct sfi_table_header header;
 u64 pentry[1];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __packed;
struct sfi_mem_entry {
 u32 type;
 u64 phys_start;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u64 virt_start;
 u64 pages;
 u64 attrib;
} __packed;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct sfi_cpu_table_entry {
 u32 apic_id;
} __packed;
struct sfi_cstate_table_entry {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 hint;
 u32 latency;
} __packed;
struct sfi_apic_table_entry {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u64 phys_addr;
} __packed;
struct sfi_freq_table_entry {
 u32 freq_mhz;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 latency;
 u32 ctrl_val;
} __packed;
struct sfi_wake_table_entry {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u64 phys_addr;
} __packed;
struct sfi_timer_table_entry {
 u64 phys_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 freq_hz;
 u32 irq;
} __packed;
struct sfi_rtc_table_entry {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u64 phys_addr;
 u32 irq;
} __packed;
struct sfi_device_table_entry {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 type;
#define SFI_DEV_TYPE_SPI 0
#define SFI_DEV_TYPE_I2C 1
#define SFI_DEV_TYPE_UART 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SFI_DEV_TYPE_HSI 3
#define SFI_DEV_TYPE_IPC 4
 u8 host_num;
 u16 addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 irq;
 u32 max_freq;
 char name[SFI_NAME_LEN];
} __packed;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct sfi_gpio_table_entry {
 char controller_name[SFI_NAME_LEN];
 u16 pin_no;
 char pin_name[SFI_NAME_LEN];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __packed;
typedef int (*sfi_table_handler) (struct sfi_table_header *table);
#define sfi_disabled 0
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
