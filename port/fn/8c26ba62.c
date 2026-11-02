#include "../decls.h"
undefined4 * FUN_8c26ba62_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = *(int *)(ar4 + 0xc);
  *(int *)(ar4 + 0x14) = iVar5;
  for (iVar3 = 0; iVar3 < *(int *)(ar4 + 0x10) + -1; iVar3 = iVar3 + 1) {
    piVar1 = (int *)(iVar3 * 0x10 + iVar5);
    *piVar1 = (iVar3 + 1) * 0x10 + iVar5;
    piVar1[2] = 0;
    piVar1[3] = 0;
  }
  puVar2 = (undefined4 *)(iVar3 * 0x10 + iVar5);
  puVar4 = (undefined4 *)(ar4 + 0x18);
  *puVar2 = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  } while (puVar4 < (undefined4 *)(ar4 + 0x28));
  return puVar2;
}

__asm__(".globl _FUN_8c26ba62\n.set _FUN_8c26ba62, _FUN_8c26ba62_def\n");
