#include "../decls.h"
undefined4 * s_HIGYOLINE_102eee_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff0;
  
  FUN_8c02f064(ar4,ar5,ar6,ar7);
  *ar4 = &DAT_8c12c3c4;
  FUN_8c0300a4(ar4 + 0x27,ar5,ar6,ar7);
  FUN_8c02eac0(ar4 + 0x207,ar5,ar6,ar7);
  *(undefined1 *)(ar4 + 0x20) = 0;
  ar4[0xe1] = 0xffffffff;
  ar4[0x213] = 0;
  ar4[0x214] = 0;
  *(undefined1 *)((int)ar4 + 0x855) = 0;
  ar4[0x217] = 0;
  ar4[0x216] = 0;
  *(undefined1 *)(ar4 + 0x215) = 0;
  strcpy(ar4 + 0xd9,"HIGYOLINE",ar6,ar7,in_stack_fffffff0);
  strcpy(ar4 + 0x27,"HIGYOLINE1",ar6,ar7,in_stack_fffffff0);
  strcpy(ar4 + 0x2f,"STATUS_FORMAT",ar6,ar7,in_stack_fffffff0);
  strcpy(ar4 + 0x37,&DAT_8c1eeec3,ar6,ar7,in_stack_fffffff0);
  ar4[0xe2] = 4;
  ar4[0x210] = 0;
  ar4[0x211] = 0;
  ar4[0x212] = 0x22;
  *(undefined1 *)((int)ar4 + 0x9a) = 2;
  *(undefined1 *)((int)ar4 + 0x865) = 0;
  ar4[0x21c] = 1;
  ar4[0x21b] = 1;
  ar4[0x21a] = 1;
  ar4[0x21c] = 0;
  ar4[0x21d] = 0;
  *(undefined1 *)(ar4 + 0x219) = 0;
  ar4[0x218] = 0x1b;
  ar4[0x21e] = 0;
  *(undefined1 *)(ar4 + 0x21f) = 0;
  ar4[0x220] = 0;
  ar4[0x221] = 0;
  ar4[0x222] = 0;
  ar4[0x223] = 0;
  return ar4;
}

__asm__(".globl _s_HIGYOLINE_102eee\n.set _s_HIGYOLINE_102eee, _s_HIGYOLINE_102eee_def\n");
