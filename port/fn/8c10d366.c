#include "../decls.h"
int FUN_8c10d366_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar2 = (int)0x114;
  *ar5 = *(undefined4 *)(iVar2 + ar4);
  iVar3 = (int)0x90;
  ar5[1] = *(undefined4 *)(iVar2 + 4 + ar4);
  puVar5 = ar5 + 2;
  iVar2 = 0;
  if (*(short *)(iVar3 + ar4) != 0) {
    do {
      iVar6 = iVar2 * 0xc;
      iVar3 = 0;
      if (*(short *)(*(int *)(0x84 + ar4) + iVar6 + 4) != 0) {
        do {
          iVar4 = (int)0x84;
          *(undefined1 *)puVar5 = *(undefined1 *)(*(int *)(0xc0 + ar4 + iVar2 * 4) + iVar3);
          puVar1 = (undefined1 *)(*(int *)(*(int *)(iVar4 + ar4) + iVar6 + 8) + iVar3);
          iVar3 = iVar3 + 1;
          iVar4 = (int)0x84;
          *(undefined1 *)((int)puVar5 + 1) = *puVar1;
          puVar5 = (undefined4 *)((int)puVar5 + 2);
        } while (iVar3 < (int)(uint)*(ushort *)(*(int *)(iVar4 + ar4) + iVar6 + 4));
      }
      iVar3 = (int)0x90;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(ushort *)(iVar3 + ar4));
  }
  return iVar3;
}

__asm__(".globl _FUN_8c10d366\n.set _FUN_8c10d366, _FUN_8c10d366_def\n");
