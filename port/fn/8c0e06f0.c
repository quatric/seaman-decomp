#include "../decls.h"
undefined4 FUN_8c0e06f0_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(ar4 + 0x1698);
  uVar1 = ar5[1];
  *puVar2 = *ar5;
  puVar2[1] = uVar1;
  uVar1 = ar5[3];
  puVar2[2] = ar5[2];
  puVar2[3] = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c0e06f0\n.set _FUN_8c0e06f0, _FUN_8c0e06f0_def\n");
