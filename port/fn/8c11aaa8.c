#include "../decls.h"
undefined4 FUN_8c11aaa8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *(int *)(0x19c + ar4);
  if (iVar5 != 0) {
    puVar3 = *(ushort **)(iVar5 + 0xc);
    if (*(undefined **)(0x134 + ar4) == (&FUN_8c119320)) {
      iVar2 = (int)puVar3 - *(int *)(ar4 + 0x48);
      uVar4 = (int)(iVar2 + (uint)(iVar2 < 0)) >> 1;
      if ((uVar4 < *(uint *)(ar4 + 0x38)) ||
         (*(int *)(0x1b4 + ar4) + *(uint *)(ar4 + 0x38) <= uVar4)) {
        *(undefined2 *)(ar4 + 0x34) = 0;
      }
      else {
        *(short *)(ar4 + 0x34) = *(short *)(ar4 + 0x34) + 1;
      }
    }
    else {
      uVar1 = *puVar3;
      while ((uVar1 & 1) == 0) {
        puVar3 = puVar3 + 1;
        uVar1 = *puVar3;
      }
      iVar2 = *(int *)(puVar3 + 1);
      if (((*(ushort *)(iVar2 * 2 + *(int *)(0xc0 + ar4)) & 2) == 0) ||
         (iVar2 != *(int *)(0x150 + ar4))) {
        *(undefined2 *)(ar4 + 0x34) = 0;
      }
      else {
        *(short *)(ar4 + 0x34) = *(short *)(ar4 + 0x34) + 1;
      }
      *(int *)(0x150 + ar4) = iVar2;
    }
    if (*(uint *)(0x14c + ar4) < (uint)*(ushort *)(ar4 + 0x34)) {
      if (*(undefined **)(0x134 + ar4) == (&FUN_8c119320)) {
        iVar5 = *(int *)(iVar5 + 8);
        uVar1 = 0;
        if (iVar5 != 0) {
          iVar2 = *(int *)(iVar5 + 0x10);
          while (iVar2 != 0) {
            iVar2 = *(int *)(iVar5 + 0x10) - *(int *)(ar4 + 0x48);
            iVar5 = *(int *)(iVar5 + 4);
            if ((uint)((int)(iVar2 + (uint)(iVar2 < 0)) >> 1) <
                (uint)(*(int *)(ar4 + 0x40) + *(int *)(0x1b4 + ar4) * -2)) {
              uVar1 = uVar1 + 1;
            }
            if (iVar5 == 0) break;
            iVar2 = *(int *)(iVar5 + 0x10);
          }
        }
        if (uVar1 < 0x10) {
          *(undefined2 *)(ar4 + 0x34) = 0;
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c11aaa8\n.set _FUN_8c11aaa8, _FUN_8c11aaa8_def\n");
