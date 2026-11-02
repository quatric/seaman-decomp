#include "../decls.h"
undefined4 FUN_8c1f3254_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 a7;
  int a4;
  
  if ((ar4 == (int *)0x0) || ((short)ar4[0x13] == 0)) {
    return 0xfffffff6;
  }
  if (*(int *)(*ar4 + 0x1c) == 0) {
    a4 = ar4[5] + ar4[2];
    iVar2 = ar4[2] + ar4[4];
    if (a4 < iVar2) {
      if (iVar2 < ar5 + a4) {
        ar5 = iVar2 - a4;
      }
      if (ar5 != 0) {
        a7 = 0;
        iVar2 = ar5;
        iVar1 = (**(code **)(*(int *)(*ar4 + 0xc) + 4))(a4,ar5,ar6,0);
        if (iVar1 == 0) {
          *(undefined2 *)(ar4 + 0x14) = 1;
          return 0;
        }
        ar4[0xf] = iVar1;
        ar4[7] = ar5;
        *(undefined2 *)(ar4 + 0x14) = 2;
        *(undefined2 *)((int)ar4 + 0x4a) = 1;
        *(undefined2 *)(ar4 + 0x12) = 1;
        ar4[6] = 0;
        *(int **)(*ar4 + 0x1c) = ar4;
        (**(code **)(*(int *)(*ar4 + 0xc) + 0x40))(a4,iVar2,ar6,a7);
        return ar5;
      }
    }
    ar4[6] = 0;
    *(undefined2 *)(ar4 + 0x14) = 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f3254\n.set _FUN_8c1f3254, _FUN_8c1f3254_def\n");
