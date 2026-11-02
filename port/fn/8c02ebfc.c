#include "../decls.h"
int FUN_8c02ebfc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int aiStack_38 [9];
  
  iVar3 = 0;
  iVar4 = 0;
  uVar2 = ar5;
  uVar1 = FUN_8c02c4e8(ar5,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 8) = uVar1;
  uVar1 = FUN_8c02bd9c(ar5,uVar2,ar6,ar7);
  *(undefined4 *)(ar4 + 0xc) = uVar1;
  uVar1 = FUN_8c02c668(ar5,uVar2,ar6,ar7);
  *(undefined4 *)(ar4 + 0x10) = uVar1;
  uVar1 = FUN_8c02d4c4(ar5,uVar2,ar6,ar7);
  *(undefined4 *)(ar4 + 0x18) = uVar1;
  uVar1 = FUN_8c02d478(ar5,uVar2,ar6,ar7);
  *(undefined4 *)(ar4 + 0x14) = uVar1;
  uVar1 = FUN_8c02d410(ar5,uVar2,ar6,ar7);
  *(undefined4 *)(ar4 + 0x24) = uVar1;
  uVar1 = FUN_8c02d3e8(ar5,uVar2,ar6,ar7);
  *(undefined4 *)(ar4 + 0x20) = uVar1;
  uVar2 = FUN_8c02ede0(ar5,uVar2,ar6,ar7);
  *(undefined4 *)(ar4 + 0x1c) = uVar2;
  if (100 < *(int *)(ar4 + 0x14)) {
    *(undefined4 *)(ar4 + 0x14) = 100;
  }
  if (100 < *(int *)(ar4 + 0x18)) {
    *(undefined4 *)(ar4 + 0x18) = 100;
  }
  iVar5 = 0xc7;
  if ((0 < *(int *)(ar4 + 0xc)) && (*(int *)(ar4 + 8) != 0)) {
    for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
      aiStack_38[iVar5] = 0;
    }
    aiStack_38[2] = FUN_8c02ee48(ar4,2,*(undefined4 *)(ar4 + 0x10),ar7);
    aiStack_38[3] = FUN_8c02ee48(ar4,3,*(undefined4 *)(ar4 + 0x14),ar7);
    aiStack_38[4] = FUN_8c02ee48(ar4,4,*(undefined4 *)(ar4 + 0x18),ar7);
    aiStack_38[5] = FUN_8c02ee48(ar4,5,*(undefined4 *)(ar4 + 0x24),ar7);
    aiStack_38[6] = FUN_8c02ee48(ar4,6,*(undefined4 *)(ar4 + 0x20),ar7);
    aiStack_38[7] = FUN_8c02ee48(ar4,7,*(undefined4 *)(ar4 + 0x1c),ar7);
    for (iVar6 = 0; iVar5 = iVar3, iVar6 < 8; iVar6 = iVar6 + 1) {
      if (iVar4 < aiStack_38[iVar6]) {
        iVar4 = aiStack_38[iVar6];
        iVar3 = iVar6 * 100 + aiStack_38[iVar6];
      }
    }
  }
  return iVar5;
}

__asm__(".globl _FUN_8c02ebfc\n.set _FUN_8c02ebfc, _FUN_8c02ebfc_def\n");
