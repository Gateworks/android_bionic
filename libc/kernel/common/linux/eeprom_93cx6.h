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
#define PCI_EEPROM_WIDTH_93C46 6
#define PCI_EEPROM_WIDTH_93C56 8
#define PCI_EEPROM_WIDTH_93C66 8
#define PCI_EEPROM_WIDTH_93C86 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PCI_EEPROM_WIDTH_OPCODE 3
#define PCI_EEPROM_WRITE_OPCODE 0x05
#define PCI_EEPROM_ERASE_OPCODE 0x07
#define PCI_EEPROM_READ_OPCODE 0x06
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PCI_EEPROM_EWDS_OPCODE 0x10
#define PCI_EEPROM_EWEN_OPCODE 0x13
struct eeprom_93cx6 {
 void *data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*register_read)(struct eeprom_93cx6 *eeprom);
 void (*register_write)(struct eeprom_93cx6 *eeprom);
 int width;
 char drive_data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char reg_data_in;
 char reg_data_out;
 char reg_data_clock;
 char reg_chip_select;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
