#include "../decls.h"
undefined4 FUN_8c23b484_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float in_fr11;
  float fVar4;
  
  *(float *)(ar5 + 4) = *(float *)(ar5 + 4) + *(float *)(ar4 + 0xf8);
  *(float *)(ar5 + 8) = *(float *)(ar5 + 8) + *(float *)(ar4 + 0xfc);
  uVar1 = 0xc;
  *(float *)(ar5 + 0xc) = *(float *)(ar5 + 0xc) + *(float *)(ar4 + 0x100);
  if (*(float *)(ar4 + 0x60) != 0.0) {
    uVar1 = 4;
                    
    fVar3 = *(float *)(ar4 + 0x10c);
    fVar2 = *(float *)(ar4 + 0x110);
    if (0.0 < in_fr11) {
      fVar4 = in_fr11 * *(float *)(ar4 + 0x60);
      *(float *)(ar5 + 4) = fVar4 * *(float *)(ar4 + 0x108) + *(float *)(ar5 + 4);
      *(float *)(ar5 + 8) = fVar4 * fVar3 + *(float *)(ar5 + 8);
      *(float *)(ar5 + 0xc) = fVar4 * fVar2 + *(float *)(ar5 + 0xc);
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c23b484\n.set _FUN_8c23b484, _FUN_8c23b484_def\n");
