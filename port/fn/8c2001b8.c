#include "../decls.h"
undefined4 FUN_8c2001b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  
  uVar1 = 0xfffa;
  uVar9 = 1;
  iVar7 = 0;
  iVar3 = ar4 * 0x148 + 0x8c4783e0;
  iVar5 = (int)0x200;
  iVar4 = *(int *)(iVar3 + 0x1c);
  iVar6 = *(int *)(iVar4 + 0x18);
  uVar8 = *(uint *)(iVar4 + 0x14);
  iVar3 = *(int *)(iVar3 + 0x28);
  if (0 < iVar6) {
    do {
      iVar4 = iVar3;
      iVar2 = FUN_8c1fbb6c(ar4,uVar8 & 0xffff,uVar9);
      if (iVar2 < 0) {
        return iVar2;
      }
      uVar8 = FUN_8c2009d0(ar4,uVar8 & 0xffff,iVar4,ar7);
      if ((uVar8 & 0xffff) == uVar1) {
        return 0;
      }
      iVar7 = iVar7 + 1;
      iVar3 = iVar3 + iVar5;
    } while (iVar7 < iVar6);
  }
  return 0;
}

__asm__(".globl _FUN_8c2001b8\n.set _FUN_8c2001b8, _FUN_8c2001b8_def\n");
