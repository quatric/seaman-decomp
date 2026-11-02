#include "../decls.h"
undefined4 FUN_8c1f35ba_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int a4;
  
  if ((ar4 == (int *)0x0) || ((short)ar4[0x13] == 0)) {
    uVar1 = 0xfffffff6;
  }
  else {
    if (*(int *)(*ar4 + 0x1c) == 0) {
      a4 = ar4[2] + ar4[5];
      iVar2 = (**(code **)(*(int *)(*ar4 + 0xc) + 0x18))(a4,ar5,ar6,ar7);
      if (iVar2 != 0) {
        ar4[0xf] = iVar2;
        *(undefined2 *)(ar4 + 0x14) = 3;
        *(undefined2 *)(ar4 + 0x12) = 2;
        *(int **)(*ar4 + 0x1c) = ar4;
        (**(code **)(*(int *)(*ar4 + 0xc) + 0x40))(a4,ar5,ar6,ar7);
        uVar1 = FUN_8c1f2f98(ar4,ar5,ar6,ar7);
        return uVar1;
      }
    }
    uVar1 = 0xfffffff3;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f35ba\n.set _FUN_8c1f35ba, _FUN_8c1f35ba_def\n");
