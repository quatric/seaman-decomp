#include "../decls.h"
undefined4 FUN_8c0e8d80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float in_fr4;
  
  if (in_fr4 < 0.0) {
    in_fr4 = 0.0;
  }
  *(float *)(ar4 + 0xeb40) = in_fr4;
  return 0xeb40;
}

__asm__(".globl _FUN_8c0e8d80\n.set _FUN_8c0e8d80, _FUN_8c0e8d80_def\n");
