#include "../decls.h"
undefined4 FUN_8c121ef0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 *ar7,int s0)

{
  undefined4 *puVar1;
  
  if (s0 != 2) {
    return 1;
  }
  puVar1 = (undefined4 *)(0x24c + ar4);
  *puVar1 = *ar7;
  puVar1[1] = ar7[1];
  puVar1[2] = ar7[2];
  puVar1[3] = ar7[3];
  puVar1[4] = ar7[4];
  puVar1[5] = ar7[5];
  puVar1[6] = ar7[6];
  return 0;
}

__asm__(".globl _FUN_8c121ef0\n.set _FUN_8c121ef0, _FUN_8c121ef0_def\n");
