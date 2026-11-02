#include "../decls.h"
undefined4 FUN_8c11e2de_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = ar6;
  iVar1 = FUN_8c11c9d2(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    if (ar5 == 0) {
      FUN_8c11cd02(ar4,0x13,iVar5,ar7);
    }
    else {
      iVar1 = ar5;
      if (ar6 == 0) {
        iVar1 = (**(code **)(ar4 + 0x14))(*(undefined4 *)(ar5 + 4),ar4 + 8,iVar5,ar7);
        if (iVar1 == 0) {
          FUN_8c11cd02(ar4,0x71,iVar5,ar7);
          return 0;
        }
        iVar5 = *(int *)(ar5 + 4);
        memmove(iVar1,ar5,iVar5,ar7);
      }
      iVar4 = ar4 + 8;
      piVar2 = (int *)(**(code **)(ar4 + 0x14))(0x1c,iVar4,iVar5,ar7);
      if (piVar2 != (int *)0x0) {
        piVar2[1] = 0;
        piVar2[2] = (uint)(ar6 == 0);
        iVar3 = (**(code **)(ar4 + 0x1c))(ar4 + 8,iVar4,iVar5,ar7);
        piVar2[3] = iVar3;
        iVar4 = (**(code **)(ar4 + 0x20))(ar4 + 8,iVar4,iVar5,ar7);
        iVar5 = 0x2d79b6f5;
        piVar2[4] = iVar4;
        piVar2[6] = iVar5;
        *piVar2 = iVar1;
        piVar2[5] = ar4;
        return piVar2;
      }
      FUN_8c11cd02(ar4,0x71,iVar5,ar7);
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c11e2de\n.set _FUN_8c11e2de, _FUN_8c11e2de_def\n");
