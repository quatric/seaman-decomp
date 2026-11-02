#include "../decls.h"
undefined4 FUN_8c2006dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar6_00;
  int iVar1;
  int ar6_01;
  int iVar2;
  int iVar3;
  int iVar4;
  
  ar6_00 = 0xfffa;
  iVar4 = 0;
  iVar3 = ar4 * 0x148 + 0x8c4783e0;
  iVar2 = *(int *)(*(int *)(iVar3 + 0x1c) + 0x10);
  ar6_01 = 0xfffa + 5;
  if (0 < iVar2) {
    do {
      iVar1 = (*(code *)(&FUN_8c1fbc44))
                        (ar4,*(int *)(*(int *)(iVar3 + 0x1c) + 0xc) + iVar4,
                         iVar4 * 0x200 + *(int *)(iVar3 + 0x24));
      if (iVar1 < 0) {
        FUN_8c20099e(ar4,*(int *)(*(int *)(iVar3 + 0x1c) + 0xc) + iVar4,ar6_01,ar7);
        return iVar1;
      }
      FUN_8c20099e(ar4,*(int *)(*(int *)(iVar3 + 0x1c) + 0xc) + iVar4,ar6_00,ar7);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return 0;
}

__asm__(".globl _FUN_8c2006dc\n.set _FUN_8c2006dc, _FUN_8c2006dc_def\n");
