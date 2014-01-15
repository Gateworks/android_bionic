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
#define DTLK_MINOR 0
#define DTLK_IO_EXTENT 0x02
#define DTLK_INTERROGATE 0xa390
#define DTLK_STATUS 0xa391
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DTLK_CLEAR 0x18
#define DTLK_MAX_RETRIES (loops_per_jiffy/(10000/HZ))
#define TTS_READABLE 0x80
#define TTS_SPEAKING 0x40
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TTS_SPEAKING2 0x20
#define TTS_WRITABLE 0x10
#define TTS_ALMOST_FULL 0x08
#define TTS_ALMOST_EMPTY 0x04
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LPC_5220_NORMAL 0x60
#define LPC_5220_FAST 0x64
#define LPC_D6_NORMAL 0x20
#define LPC_D6_FAST 0x24
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LPC_SPEAKING 0x80
#define LPC_BUFFER_LOW 0x40
#define LPC_BUFFER_EMPTY 0x20
struct dtlk_settings
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
{
 unsigned short serial_number;
 unsigned char rom_version[24];
 unsigned char mode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char punc_level;
 unsigned char formant_freq;
 unsigned char pitch;
 unsigned char speed;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char volume;
 unsigned char tone;
 unsigned char expression;
 unsigned char ext_dict_loaded;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char ext_dict_status;
 unsigned char free_ram;
 unsigned char articulation;
 unsigned char reverb;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char eob;
 unsigned char has_indexing;
};
