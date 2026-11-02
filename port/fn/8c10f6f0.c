#include "../decls.h"
undefined4 FUN_8c10f6f0_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  *(undefined4 *)(ar4 + 0x28) = *ar5;
  puVar1 = ar5 + 2;
  *(short *)(ar4 + 0x30) = (short)ar5[1];
  if (*(int *)(ar4 + 0x78) != 0) {
    do {
      uVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      *(undefined4 *)(*(int *)(ar4 + 0x44) + uVar2 * 4) = uVar3;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(ar4 + 0x78));
  }
  *(undefined4 *)(ar4 + 0x48) = *puVar1;
  *(undefined4 *)(ar4 + 0x4c) = puVar1[1];
  *(undefined4 *)(ar4 + 0x50) = puVar1[2];
  *(undefined4 *)(ar4 + 0x54) = puVar1[3];
  return 0x54;
}

__asm__(".globl _FUN_8c10f6f0\n.set _FUN_8c10f6f0, _FUN_8c10f6f0_def\n");
