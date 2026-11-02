#include "../decls.h"
undefined4 * s_FROGMANLINE_05d646_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  FUN_8c02f064(ar4,ar5,ar6,ar7);
  *ar4 = &DAT_8c12a078;
  FUN_8c0300a4(ar4 + 0x27,ar5,ar6,ar7);
  FUN_8c02eac0(ar4 + 0x207,ar5,ar6,ar7);
  *(undefined1 *)(ar4 + 0x20) = 0;
  ar4[0xe1] = 0xffffffff;
  ar4[0x214] = 0;
  ar4[0x215] = 0;
  *(undefined1 *)(ar4 + 0x21e) = 0;
  *(undefined1 *)((int)ar4 + 0x879) = 0;
  ar4[0x21b] = 0;
  *(undefined1 *)(ar4 + 0x21c) = 0;
  *(undefined1 *)((int)ar4 + 0x871) = 0;
  ar4[0x216] = 0;
  *(undefined1 *)(ar4 + 0x217) = 0;
  ar4[0x219] = 0;
  ar4[0x21a] = 0;
  ar4[0x21f] = 0;
  ar4[0x220] = 0;
  strcpy(ar4 + 0xd9,s_FROGMANLINE_8c136998,ar6,ar7,in_stack_fffffff4);
  strcpy(ar4 + 0x27,s_FROGMANLINE1_8c1369a4,ar6,ar7,in_stack_fffffff4);
  strcpy(ar4 + 0x2f,s_STATUS_FORMAT_8c1369b1,ar6,ar7,in_stack_fffffff4);
  strcpy(ar4 + 0x37,&DAT_8c1369bf,ar6,ar7,in_stack_fffffff4);
  ar4[0xe2] = 4;
  FUN_8c05d7f8(ar4 + 0x27,1,ar6,ar7);
  *(undefined1 *)((int)ar4 + 0x9a) = 2;
  ar4[0x222] = 1;
  ar4[0x221] = 1;
  ar4[0x218] = 0;
  ar4[0x21d] = 0x1b;
  ar4[0x223] = 0;
  ar4[0x224] = 0;
  ar4[0x225] = 0;
  ar4[0x226] = 0;
  return ar4;
}

__asm__(".globl _s_FROGMANLINE_05d646\n.set _s_FROGMANLINE_05d646, _s_FROGMANLINE_05d646_def\n");
