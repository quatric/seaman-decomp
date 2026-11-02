#include "../decls.h"
undefined4 FUN_8c0fa83c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar5_00;
  undefined1 auStack_14 [16];
  
  *(undefined1 *)(ar4 + 5) = 0;
  *(undefined1 *)(ar4 + 0xf) = 0;
  ar4[0xe] = 0;
  ar4[0xd] = 0;
  *(undefined1 *)(ar4 + 0x17) = 0;
  *(undefined4 *)(0x84 + (int)ar4) = 0;
  *(undefined4 *)(0x88 + (int)ar4) = 0;
  *(undefined1 *)(0x90 + (int)ar4) = 0;
  *(undefined4 *)(0xb4 + (int)ar4) = 0;
  *(undefined4 *)(0xb0 + (int)ar4) = 0;
  FUN_8c1f8176(auStack_14,ar5,ar6,ar7);
  ar5_00 = (int)ar4 + 0xc8;
  FUN_8c1f826c(auStack_14,ar5_00,ar6,ar7);
  uVar1 = FUN_8c01f528(0x8c3dd7dc,ar5_00,ar6,ar7);
  ar4[2] = uVar1;
  uVar1 = FUN_8c01f520(0x8c3dd7dc,ar5_00,ar6,ar7);
  ar4[3] = uVar1;
  *ar4 = 1;
  FUN_8c0fda80(ar4,ar5_00,ar6,ar7);
  FUN_8c01c970(ar4[3],(int)ar4 + 0xc4,ar6,ar7);
  return 1;
}

__asm__(".globl _FUN_8c0fa83c\n.set _FUN_8c0fa83c, _FUN_8c0fa83c_def\n");
