#include "../decls.h"
undefined4 FUN_8c11bb94_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *ar5_00;
  int ar7_00;
  
  ar5_00 = *(undefined4 **)(ar4 + 0x2c);
  ar7_00 = *(int *)(ar4 + 0x54);
  if (ar5_00 < ar5_00 + ar7_00 + *(int *)(ar4 + 0x54)) {
    do {
      *ar5_00 = 0x3f800000;
      ar5_00 = ar5_00 + 1;
    } while (ar5_00 < (undefined4 *)(*(int *)(ar4 + 0x2c) + ar7_00 * 4 + *(int *)(ar4 + 0x54) * 4));
  }
  *(undefined2 *)(ar4 + 0x2a) = 0;
  uVar1 = FUN_8c11bb54(ar4,ar5_00,ar7_00 * 4,ar7_00);
  return uVar1;
}

__asm__(".globl _FUN_8c11bb94\n.set _FUN_8c11bb94, _FUN_8c11bb94_def\n");
