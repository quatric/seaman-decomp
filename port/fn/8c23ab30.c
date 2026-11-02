#include "../decls.h"
undefined4 FUN_8c23ab30_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  float fVar1;
  float fVar2;
  float in_fr11;
  float fVar3;
  
  if (*(float *)(ar4 + 0x60) != 0.0) {
    in_r0 = 4;
                    
    fVar2 = *(float *)(ar4 + 0x10c);
    fVar1 = *(float *)(ar4 + 0x110);
    if (0.0 < in_fr11) {
      fVar3 = in_fr11 * *(float *)(ar4 + 0x60);
      *(float *)(ar5 + 4) = fVar3 * *(float *)(ar4 + 0x108) + *(float *)(ar5 + 4);
      *(float *)(ar5 + 8) = fVar3 * fVar2 + *(float *)(ar5 + 8);
      *(float *)(ar5 + 0xc) = fVar3 * fVar1 + *(float *)(ar5 + 0xc);
    }
  }
  return in_r0;
}

__asm__(".globl _FUN_8c23ab30\n.set _FUN_8c23ab30, _FUN_8c23ab30_def\n");
