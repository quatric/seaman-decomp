#include "../decls.h"
undefined4 FUN_8c23ada8_def(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float in_fr11;
  
  if (*(float *)(ar4 + 0x60) != 0.0) {
                    
    in_r0 = 4;
    fVar1 = *(float *)(ar4 + 0x60) * in_fr11 * in_fr11;
    if (0.0 < in_fr11) {
      if (*(float *)(ar4 + 0x70) < *(float *)(ar4 + 100)) {
        fVar4 = *(float *)(ar4 + 0x114);
        fVar3 = *(float *)(ar4 + 0x11c);
        fVar2 = *(float *)(ar4 + 0x120);
        ar5[5] = fVar1 * *(float *)(ar4 + 0x118) + ar5[5];
        ar5[6] = fVar1 * fVar3 + ar5[6];
        ar5[7] = fVar1 * fVar2 + ar5[7];
        *ar5 = fVar1 * fVar4 + *ar5;
      }
      fVar3 = *(float *)(ar4 + 0x10c);
      fVar2 = *(float *)(ar4 + 0x110);
      ar5[1] = fVar1 * *(float *)(ar4 + 0x108) + ar5[1];
      ar5[2] = fVar1 * fVar3 + ar5[2];
      ar5[3] = fVar1 * fVar2 + ar5[3];
    }
  }
  return in_r0;
}

__asm__(".globl _FUN_8c23ada8\n.set _FUN_8c23ada8, _FUN_8c23ada8_def\n");
