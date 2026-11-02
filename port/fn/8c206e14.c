#include "../decls.h"
undefined4 FUN_8c206e14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uStack_24;
  
  iVar1 = 0x8c4aa0b4;
  iVar5 = (int)(int)0xffffff40;
  if (ar4 == 0) {
    iVar3 = (int)0x2000;
    uVar7 = 0;
    iVar4 = 0;
    do {
      iVar6 = 0x8c4aa034;
      if ((uint)(*(int *)(0x8c4aa034 + uVar7) + iVar3) <
          (uint)(*(int *)(0x8c4aa034 + -0x10 + uVar7) + iVar5)) {
        *(int *)(0x8c4aa034 + iVar4) = *(int *)(0x8c4aa034 + iVar4) + iVar3;
        *(int *)(iVar6 + -0xc + iVar4) = *(int *)(iVar6 + iVar4) + (int)0xc0;
        *(undefined4 *)(iVar1 + 0x14) = 0;
      }
      else if (*(int *)(iVar1 + 0x14) != 0) {
        FUN_8c2062c8(3,ar5,ar6,ar7);
      }
      uVar7 = uVar7 + 0x20;
      iVar4 = iVar4 + 0x20;
    } while (uVar7 < 0x40);
  }
  else if (ar4 == 1) {
    iVar6 = (int)(int)0xfffff800;
    iVar3 = 0;
    iVar4 = 0;
    uStack_24 = 0;
    iVar8 = 0;
    do {
      iVar2 = 0x8c4aa028;
      if ((uint)(*(int *)(0x8c4aa028 + 8 + uStack_24 * 0x20) + (int)0x140) <
          (uint)(*(int *)(0x8c4aa028 + uStack_24 * 0x20) + iVar6)) {
        if (*(uint *)(iVar1 + 0x24 + iVar3) < (uint)(*(int *)(0x8c4aa028 + iVar4) + iVar6)) {
          *(int *)(0x8c4aa028 + iVar8) = *(int *)(0x8c4aa028 + iVar8) - (int)0x800;
          *(int *)(0x8c4aa034 + iVar8) = *(int *)(iVar2 + iVar8) + iVar5;
        }
        *(undefined4 *)(iVar1 + 0x10) = 0;
      }
      else if (10 < *(uint *)(iVar1 + 0x10)) {
        FUN_8c2062c8(3,ar5,ar6,ar7);
      }
      iVar4 = iVar4 + 0x20;
      uStack_24 = uStack_24 + 1;
      iVar8 = iVar8 + 0x20;
      iVar3 = iVar3 + 4;
    } while (uStack_24 < 2);
  }
  return 0;
}

__asm__(".globl _FUN_8c206e14\n.set _FUN_8c206e14, _FUN_8c206e14_def\n");
