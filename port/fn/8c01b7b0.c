#include "../decls.h"
undefined4 FUN_8c01b7b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar5_00;
  int iVar2;
  int ar5_01;
  undefined4 ar7_00;
  
  if (*(undefined4 *)0x8c2791b0 == 3) {
    uVar1 = ar7;
    ar7_00 = ar7;
    ar5_00 = FUN_8c01b87c(ar4,ar5,ar7,ar7);
    if (ar5_00 < 0) {
      uVar1 = 0;
    }
    else {
      ar5_01 = ar5_00;
      iVar2 = FUN_8c01acd0(ar4,ar5_00,uVar1,ar7_00);
      if (iVar2 == 0) {
        (*(code *)(&FUN_8c1fb57c))
                  (*(undefined4 *)(0x2470 + ar5_00 * 0x28 + ar4),ar5_01,uVar1,ar7_00);
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(0x2470 + ar5_00 * 0x28 + ar4);
        memmove(ar6,uVar1,ar7,ar7_00);
        (*(code *)(&FUN_8c1fb57c))
                  (*(undefined4 *)(0x2470 + ar5_00 * 0x28 + ar4),uVar1,ar7,ar7_00);
        uVar1 = 1;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01b7b0\n.set _FUN_8c01b7b0, _FUN_8c01b7b0_def\n");
