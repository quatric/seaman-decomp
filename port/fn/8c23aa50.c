#include "../decls.h"
undefined4 * FUN_8c23aa50_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float in_fr11;
  
                    
  fVar1 = (1.0 - in_fr11) * 0.5;
  fVar3 = *(float *)(ar4 + 0x10c);
  fVar2 = *(float *)(ar4 + 0x110);
  *(float *)(ar5 + 4) = fVar1 * *(float *)(ar4 + 0x108) + *(float *)(ar5 + 4);
  *(float *)(ar5 + 8) = fVar1 * fVar3 + *(float *)(ar5 + 8);
  *(float *)(ar5 + 0xc) = fVar1 * fVar2 + *(float *)(ar5 + 0xc);
  return &DAT_8c23aaa0;
}

__asm__(".globl _FUN_8c23aa50\n.set _FUN_8c23aa50, _FUN_8c23aa50_def\n");
