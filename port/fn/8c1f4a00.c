#include "../decls.h"
undefined4 FUN_8c1f4a00_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = 0x8c4727b4;
  iVar2 = (int)0xfcc;
  iVar4 = *(undefined4 *)0x8c4727b4;
  iVar5 = (int)0x700;
  *(int *)(iVar2 + iVar4) = *(int *)(iVar2 + iVar4) + *(int *)(iVar2 + 0xc + iVar4) * 4;
  piVar3 = *(int **)(iVar2 + *piVar1);
  iVar2 = 0;
  if (0 < ar4) {
    do {
      iVar2 = iVar2 + 1;
      *piVar3 = iVar5;
      piVar3 = piVar3 + 1;
    } while (iVar2 < ar4);
  }
  iVar2 = (int)0xfd8;
  *(int *)(iVar2 + *piVar1) = ar4;
  iVar2 = iVar2 + 4;
  *(int *)(iVar2 + *piVar1) = *(int *)(iVar2 + *piVar1) + ar4 * 4;
  return 0;
}

__asm__(".globl _FUN_8c1f4a00\n.set _FUN_8c1f4a00, _FUN_8c1f4a00_def\n");
