#include "../decls.h"
undefined1 * FUN_8c02d7c8_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(ar4 + 0xc) = ar5;
  *(undefined4 *)(ar4 + 0x10) = ar6;
  uVar1 = libgcc_divide_helper_0101e4(ar7 * 0x3840,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x14) = uVar1;
  *ar4 = 0;
  *(undefined4 *)(ar4 + 4) = 0;
  *(undefined4 *)(ar4 + 8) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c02d7c8\n.set _FUN_8c02d7c8, _FUN_8c02d7c8_def\n");
