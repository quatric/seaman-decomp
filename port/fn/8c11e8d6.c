#include "../decls.h"
undefined4 FUN_8c11e8d6_def(int ar4,int *ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int a6;
  
  a6 = ar6;
  iVar1 = FUN_8c11c9d2(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    if (ar5 == (int *)0x0) {
      FUN_8c11cd02(ar4,0x13,a6,ar7);
    }
    else if (*ar5 == 2) {
      if ((ar6 != 0) || (ar5 = (int *)FUN_8c11e896(ar4,ar5,a6,ar7), ar5 != (int *)0x0)) {
        iVar1 = ar4 + 8;
        puVar2 = (undefined4 *)(**(code **)(ar4 + 0x14))(0x1c,iVar1,a6,ar7);
        if (puVar2 != (undefined4 *)0x0) {
          puVar2[1] = 0;
          puVar2[2] = (uint)(ar6 == 0);
          uVar3 = (**(code **)(ar4 + 0x1c))(ar4 + 8,iVar1,a6,ar7);
          puVar2[3] = uVar3;
          uVar4 = (**(code **)(ar4 + 0x20))(ar4 + 8,iVar1,a6,ar7);
          uVar3 = 0x2783d5f5;
          puVar2[4] = uVar4;
          puVar2[6] = uVar3;
          *puVar2 = ar5;
          puVar2[5] = ar4;
          return puVar2;
        }
        FUN_8c11cd02(ar4,0x71,a6,ar7);
      }
    }
    else {
      FUN_8c11cd02(ar4,0xd,a6,ar7);
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c11e8d6\n.set _FUN_8c11e8d6, _FUN_8c11e8d6_def\n");
