#include "../decls.h"
uint FUN_8c23b3d8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float in_fr11;
  
  *(float *)(ar5 + 4) = *(float *)(ar5 + 4) + *(float *)(ar4 + 0xf8);
  fVar2 = *(float *)(ar4 + 0xfc);
  *(float *)(ar5 + 8) = *(float *)(ar5 + 8) + fVar2;
  *(float *)(ar5 + 0xc) = *(float *)(ar5 + 0xc) + *(float *)(ar4 + 0x100);
                    
                    
  uVar1 = (uint)(in_fr11 < *(float *)(ar4 + 0x6c)) << 1 | (uint)(0.0 < fVar2);
  if (uVar1 == 3) {
    uVar1 = 4;
    if (*(float *)(ar4 + 0x68) < in_fr11) {
      fVar2 = (fVar2 / in_fr11) * *(float *)(ar4 + 0x68);
    }
    fVar2 = fVar2 * (1.0 / SQRT(in_fr11));
    fVar4 = *(float *)(ar4 + 0x10c);
    fVar3 = *(float *)(ar4 + 0x110);
    *(float *)(ar5 + 4) = fVar2 * *(float *)(ar4 + 0x108) + *(float *)(ar5 + 4);
    *(float *)(ar5 + 8) = fVar2 * fVar4 + *(float *)(ar5 + 8);
    *(float *)(ar5 + 0xc) = fVar2 * fVar3 + *(float *)(ar5 + 0xc);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c23b3d8\n.set _FUN_8c23b3d8, _FUN_8c23b3d8_def\n");
