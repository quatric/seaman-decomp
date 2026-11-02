#include "../decls.h"
int FUN_8c10d29c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)0x114;
  *(undefined4 *)(iVar1 + ar4) = 0;
  *(undefined4 *)(iVar1 + 4 + ar4) = 0;
  iVar3 = *(int *)(0x84 + ar4);
  iVar1 = 0x84 + 0xc;
  iVar2 = 0;
  if (*(short *)(iVar1 + ar4) != 0) {
    do {
      iVar1 = 0;
      if (*(short *)(iVar3 + 4) != 0) {
        do {
          *(undefined1 *)(*(int *)(iVar3 + 8) + iVar1) = 0;
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)(uint)*(ushort *)(iVar3 + 4));
      }
      iVar1 = (int)0x90;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar2 < (int)(uint)*(ushort *)(iVar1 + ar4));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c10d29c\n.set _FUN_8c10d29c, _FUN_8c10d29c_def\n");
