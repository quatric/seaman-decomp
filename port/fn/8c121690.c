#include "../decls.h"
undefined4 FUN_8c121690_def(int ar4,uint ar5,uint ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint ar5_00;
  uint ar5_01;
  
  ar5_01 = 0;
  ar5_00 = ar5;
  if (*(int *)(0x240 + ar4) != 0) {
    do {
      ar5_00 = ar5_01;
      ar6 = ar5;
      FUN_8c120e12(ar4,ar5_01,ar5,ar7);
      ar5_01 = ar5_01 + 1;
    } while (ar5_01 < *(uint *)(0x240 + ar4));
  }
  if (*(int *)(0x28c + ar4) != 0) {
    FUN_8c120b48(ar4,ar5_00,ar6,ar7);
  }
  FUN_8c120c7c(ar4,ar5,ar6,ar7);
  FUN_8c1213d0(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c121124(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c121690\n.set _FUN_8c121690, _FUN_8c121690_def\n");
