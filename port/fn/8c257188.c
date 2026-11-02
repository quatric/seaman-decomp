#include "../decls.h"
undefined4 FUN_8c257188_def(undefined4 *ar4,undefined4 ar5,int ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 in_r0;
  
  *ar4 = ar5;
  ar4[4] = ar7;
  ar4[5] = s0;
  ar4[1] = ar6 << 0x10;
  return in_r0;
}

__asm__(".globl _FUN_8c257188\n.set _FUN_8c257188, _FUN_8c257188_def\n");
