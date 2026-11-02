#include "../decls.h"
int * FUN_8c11b5a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *ar5_00;
  
  iVar6 = *(int *)(ar4 + 0x54);
  uVar4 = 1;
  if (1 < *(ushort *)(ar4 + 0x50)) {
    do {
      uVar4 = uVar4 + 1;
      iVar6 = *(int *)(iVar6 + 0x18);
    } while (uVar4 < *(ushort *)(ar4 + 0x50));
  }
  piVar5 = *(int **)(iVar6 + 8);
  ar5_00 = piVar5;
  if (*(int *)(0x1b4 + ar4) == 0) {
    sVar1 = *(short *)(0x1b0 + ar4);
    ar5_00 = *(int **)(0x114 + ar4);
    if (ar5_00[1] == 0) {
      uVar2 = FUN_8c112fd8(ar4,ar5_00,ar6,ar7);
      *(undefined4 *)(0x114 + ar4) = uVar2;
    }
    else {
      *(int *)(0x114 + ar4) = ar5_00[1];
    }
    iVar3 = (int)0x12c;
    ar5_00[1] = (int)piVar5;
    *piVar5 = *piVar5 + 1;
    ar5_00[4] = *(int *)(iVar6 + 0xc);
    *ar5_00 = 0;
    iVar6 = (int)0x1ac;
    ar5_00[5] = *(int *)(iVar3 + ar4);
    ar5_00[3] = (int)sVar1 + *(int *)(iVar6 + ar4);
    ar5_00[5] = ar5_00[5] + 1;
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c11b5a0\n.set _FUN_8c11b5a0, _FUN_8c11b5a0_def\n");
