#include "../decls.h"
undefined4 FUN_8c1f2cce_def(undefined4 ar4,int *ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  int a6;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = ar5 + 4;
  iVar3 = *ar5;
  a6 = ar6;
  uVar1 = FUN_8c1f2b42(ar4,ar5,ar6,ar7);
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      if ((uint)*(byte *)((int)piVar5 + 9) == (uVar1 & 0xff)) {
        if (ar6 == 1) {
          iVar2 = func_0x8c1f2ac0(ar4,(int)piVar5 + 10,a6,ar7);
        }
        else {
          iVar2 = FUN_8c1f2ae2(ar4,(int)piVar5 + 10,a6,ar7);
        }
        if (iVar2 == 1) {
          return iVar4 + 1;
        }
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 0xb;
    } while (iVar4 < iVar3);
  }
  return 0;
}

__asm__(".globl _FUN_8c1f2cce\n.set _FUN_8c1f2cce, _FUN_8c1f2cce_def\n");
