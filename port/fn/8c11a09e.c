#include "../decls.h"
undefined4 * FUN_8c11a09e_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar4 = ar4[3];
  puVar3 = (undefined4 *)(uint)ar4[2];
  puVar2 = ar4;
  while (puVar1 = puVar3, puVar1 != (undefined4 *)0x0) {
    if ((uint)puVar1[3] < uVar4) {
      uVar5 = *ar4;
      puVar2[2] = puVar1[2];
      puVar1[2] = ar4;
      *ar4 = 1;
      *puVar1 = uVar5;
      uVar4 = puVar1[3];
      puVar3 = (undefined4 *)puVar2[2];
      ar4 = puVar1;
    }
    else {
      puVar3 = (undefined4 *)puVar1[2];
      puVar2 = puVar1;
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c11a09e\n.set _FUN_8c11a09e, _FUN_8c11a09e_def\n");
