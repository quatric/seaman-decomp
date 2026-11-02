#include "../decls.h"
undefined4 FUN_8c11ace2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 a5;
  int unaff_r14;
  
  FUN_8c11a88c(ar4,0,ar6,ar7);
  *(undefined **)(0x1a4 + unaff_r14) = (&FUN_8c11ac4c);
  a5 = *(undefined4 *)(0x100 + unaff_r14);
  uVar1 = FUN_8c11abc6(unaff_r14,a5,ar6,ar7);
  if ((uVar1 & 0xff) != 0) {
    return 1;
  }
  FUN_8c113c46(unaff_r14,a5,ar6,ar7);
  FUN_8c113bcc(unaff_r14,a5,ar6,ar7);
  *(undefined1 *)(unaff_r14 + 0x7c) = 0;
  *(undefined1 *)(0x1d8 + unaff_r14) = 0;
  return 0;
}

__asm__(".globl _FUN_8c11ace2\n.set _FUN_8c11ace2, _FUN_8c11ace2_def\n");
