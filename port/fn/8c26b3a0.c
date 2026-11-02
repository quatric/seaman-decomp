#include "../decls.h"
undefined4 FUN_8c26b3a0_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  int *a6;
  
  if ((0 < ar6[1]) && (*ar6 != 0)) {
    a6 = ar6;
    uVar1 = FUN_8c26b1e0(ar4,ar5,ar6,ar7);
    if ((ar5 != 0) && (ar5 != 1)) {
      ar6[1] = 0;
      *ar6 = 0;
      if (*(int *)(ar4 + 0x1c) != 0) {
        (**(code **)(ar4 + 0x1c))(*(undefined4 *)(ar4 + 0x20),0xfffffffd,a6,ar7);
      }
    }
    uVar1 = FUN_8c26b1f8(ar4,uVar1,a6,ar7);
    return uVar1;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c26b3a0\n.set _FUN_8c26b3a0, _FUN_8c26b3a0_def\n");
