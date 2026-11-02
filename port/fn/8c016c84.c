#include "../decls.h"
undefined4 FUN_8c016c84_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = *ar5;
  *(undefined4 *)(ar4 + 0x30) = uVar1;
  *(undefined4 *)(ar4 + 4) = uVar1;
  uVar1 = ar5[1];
  *(undefined4 *)(ar4 + 0x34) = uVar1;
  *(undefined4 *)(ar4 + 8) = uVar1;
  uVar1 = ar5[2];
  *(undefined4 *)(ar4 + 0x38) = uVar1;
  *(undefined4 *)(ar4 + 0xc) = uVar1;
  return 0;
}

__asm__(".globl _FUN_8c016c84\n.set _FUN_8c016c84, _FUN_8c016c84_def\n");
