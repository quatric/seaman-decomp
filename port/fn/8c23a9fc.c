#include "../decls.h"
undefined4 FUN_8c23a9fc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  float in_fr11;
  float fVar3;
  
                    
  fVar2 = *(float *)(ar4 + 0x10c);
  fVar1 = *(float *)(ar4 + 0x110);
  fVar3 = -in_fr11;
  if (0.0 < fVar3) {
    *(float *)(ar5 + 4) = fVar3 * *(float *)(ar4 + 0x108) + *(float *)(ar5 + 4);
    *(float *)(ar5 + 8) = fVar3 * fVar2 + *(float *)(ar5 + 8);
    *(float *)(ar5 + 0xc) = fVar3 * fVar1 + *(float *)(ar5 + 0xc);
  }
  return 4;
}

__asm__(".globl _FUN_8c23a9fc\n.set _FUN_8c23a9fc, _FUN_8c23a9fc_def\n");
