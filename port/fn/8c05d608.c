#include "../decls.h"
undefined4 * FUN_8c05d608_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  ar4[3] = ar5[3];
  uVar1 = ar5[5];
  ar4[4] = ar5[4];
  ar4[5] = uVar1;
  return ar4;
}

__asm__(".globl _FUN_8c05d608\n.set _FUN_8c05d608, _FUN_8c05d608_def\n");
