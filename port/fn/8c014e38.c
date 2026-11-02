#include "../decls.h"
undefined4 FUN_8c014e38_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float in_fr5;
  float in_fr4;
  float in_fr6;
  
  *(float *)(ar4 + 0x54) = *(float *)(ar4 + 0x54) + in_fr4;
  *(float *)(ar4 + 0x58) = *(float *)(ar4 + 0x58) + in_fr5;
  *(float *)(ar4 + 0x5c) = *(float *)(ar4 + 0x5c) + in_fr6;
  uVar1 = FUN_8c014ea0(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c014e38\n.set _FUN_8c014e38, _FUN_8c014e38_def\n");
