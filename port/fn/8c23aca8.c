#include "../decls.h"
uint FUN_8c23aca8_def(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  float fVar2;
  float in_fr3;
  float fVar3;
  float fVar4;
  float fVar5;
  float in_fr11;
  
                    
                    
  fVar5 = 1.0 / in_fr11;
                    
  fVar2 = in_fr3 * in_fr3 * fVar5;
  fVar3 = in_fr3 * in_fr3 * fVar5;
  uVar1 = (((uint)(0.0 < in_fr3) << 1 | (uint)(in_fr11 < *(float *)(ar4 + 0x6c))) << 1 |
          (uint)(0.0 < -in_fr3)) << 1 | (uint)(*(float *)(ar4 + 0x74) < fVar3);
  if (uVar1 == 0xf) {
    if (*(float *)(ar4 + 0x68) < in_fr11) {
      fVar2 = fVar2 * *(float *)(ar4 + 0x68) * fVar5;
    }
    if (*(float *)(ar4 + 0x70) <= fVar3) {
      fVar4 = *(float *)(ar4 + 0x114);
      fVar5 = *(float *)(ar4 + 0x11c);
      fVar3 = *(float *)(ar4 + 0x120);
      ar5[5] = fVar2 * *(float *)(ar4 + 0x118) + ar5[5];
      ar5[6] = fVar2 * fVar5 + ar5[6];
      ar5[7] = fVar2 * fVar3 + ar5[7];
      *ar5 = fVar2 * fVar4 + *ar5;
    }
    else {
      fVar2 = fVar2 * *(float *)(ar4 + 0x80) * (fVar3 - *(float *)(ar4 + 0x74));
    }
    uVar1 = 4;
    fVar5 = *(float *)(ar4 + 0x10c);
    fVar3 = *(float *)(ar4 + 0x110);
    ar5[1] = fVar2 * *(float *)(ar4 + 0x108) + ar5[1];
    ar5[2] = fVar2 * fVar5 + ar5[2];
    ar5[3] = fVar2 * fVar3 + ar5[3];
  }
  return uVar1;
}

__asm__(".globl _FUN_8c23aca8\n.set _FUN_8c23aca8, _FUN_8c23aca8_def\n");
