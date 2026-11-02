#include "../decls.h"
undefined4 FUN_8c0de6c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  float in_fr4;
  
  if (in_fr4 < 0.0) {
    in_fr4 = 0.0;
  }
  *(float *)(ar4 + 0xc) = in_fr4;
  return ain0;
}

__asm__(".globl _FUN_8c0de6c0\n.set _FUN_8c0de6c0, _FUN_8c0de6c0_def\n");
