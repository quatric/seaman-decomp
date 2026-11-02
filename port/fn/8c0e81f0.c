#include "../decls.h"
undefined4 FUN_8c0e81f0_def(int ar4,short *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)
           (0xa4 +
           ar4 + *(short *)(0x226 + ar4) * 0x80 + *(short *)(0x224 + ar4) * 0x20);
  *(undefined4 *)(0xa4 + ar4 + ar5[1] * 0x80 + *ar5 * 0x20) = 0;
  *(int *)(0x410 + ar4) = *(int *)(0x410 + ar4) + -1;
  *(undefined4 *)(0x440 + ar4) = 1;
  return uVar1;
}

__asm__(".globl _FUN_8c0e81f0\n.set _FUN_8c0e81f0, _FUN_8c0e81f0_def\n");
