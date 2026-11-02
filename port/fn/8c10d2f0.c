#include "../decls.h"
int FUN_8c10d2f0_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (int)0x114;
  *(undefined4 *)(iVar1 + ar4) = *ar5;
  puVar3 = ar5 + 2;
  *(undefined4 *)(iVar1 + 4 + ar4) = ar5[1];
  iVar1 = (int)0x90;
  iVar4 = 0;
  if (*(short *)(iVar1 + ar4) != 0) {
    do {
      iVar5 = iVar4 * 0xc;
      iVar1 = 0;
      if (*(short *)(*(int *)(0x84 + ar4) + iVar5 + 4) != 0) {
        do {
          puVar2 = (undefined1 *)((int)puVar3 + 1);
          *(undefined1 *)(*(int *)(0xc0 + ar4 + iVar4 * 4) + iVar1) = *(undefined1 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 2);
          *(undefined1 *)(*(int *)(*(int *)(0x84 + ar4) + iVar5 + 8) + iVar1) = *puVar2;
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)(uint)*(ushort *)(*(int *)(0x84 + ar4) + iVar5 + 4));
      }
      iVar1 = (int)0x90;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(ushort *)(iVar1 + ar4));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c10d2f0\n.set _FUN_8c10d2f0, _FUN_8c10d2f0_def\n");
