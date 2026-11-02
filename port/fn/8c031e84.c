#include "../decls.h"
float * FUN_8c031e84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float *pfVar1;
  float in_fr5;
  float in_fr4;
  
  *(float *)(ar4 + 0x28) = *(float *)(ar4 + 0x28) - in_fr4;
  pfVar1 = (float *)(ar4 + 0x28);
  if (*pfVar1 <= in_fr5) {
    *(float *)(ar4 + 0x28) = in_fr5;
    pfVar1 = (float *)0x40;
    *(undefined4 *)(ar4 + 0x40) = 5;
  }
  return pfVar1;
}

__asm__(".globl _FUN_8c031e84\n.set _FUN_8c031e84, _FUN_8c031e84_def\n");
