#include "../decls.h"
uint FUN_8c10e7de_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = 0;
  if (*(short *)(ar4 + 4) != 0) {
    do {
      *(byte *)(iVar2 + ar5) =
           *(byte *)(*(int *)((uint)*(byte *)(*(int *)(ar4 + 8) + iVar2) * 4 + ar6) +
                    (uint)*(byte *)(iVar2 + ar5));
      *(undefined1 *)(*(int *)(ar4 + 8) + iVar2) = 0;
      iVar2 = iVar2 + 1;
      uVar1 = (uint)*(ushort *)(ar4 + 4);
    } while (iVar2 < (int)uVar1);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c10e7de\n.set _FUN_8c10e7de, _FUN_8c10e7de_def\n");
