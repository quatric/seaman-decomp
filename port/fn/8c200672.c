#include "../decls.h"
undefined4 FUN_8c200672_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  puVar1 = (&FUN_8c1fbb6c);
  uVar6 = 1;
  iVar4 = ar4 * 0x148 + 0x8c4783e0;
  iVar3 = *(int *)(*(int *)(iVar4 + 0x1c) + 0x10);
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      iVar2 = (*(code *)puVar1)(ar4,*(int *)(*(int *)(iVar4 + 0x1c) + 0xc) + iVar5,
                                iVar5 * 0x200 + *(int *)(iVar4 + 0x24),uVar6);
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return 0;
}

__asm__(".globl _FUN_8c200672\n.set _FUN_8c200672, _FUN_8c200672_def\n");
