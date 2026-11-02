#include "../decls.h"
undefined4 FUN_8c23b930_def(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_fr11;
  float fVar7;
  
  ar5[1] = ar5[1] + *(float *)(ar4 + 0xf8);
  ar5[2] = ar5[2] + *(float *)(ar4 + 0xfc);
  uVar1 = 0xc;
  ar5[3] = ar5[3] + *(float *)(ar4 + 0x100);
  fVar2 = *(float *)(ar4 + 0x60);
  if (fVar2 != 0.0) {
                    
    uVar1 = 4;
    if (0.0 < in_fr11) {
      fVar7 = in_fr11 * in_fr11;
      fVar6 = *(float *)(ar4 + 0x70);
      fVar5 = *(float *)(ar4 + 0x74);
      fVar4 = *(float *)(ar4 + 0x10c);
      fVar3 = *(float *)(ar4 + 0x110);
      ar5[1] = in_fr11 * *(float *)(ar4 + 0x108) + ar5[1];
      ar5[2] = in_fr11 * fVar4 + ar5[2];
      ar5[3] = in_fr11 * fVar3 + ar5[3];
      if (fVar5 < fVar7) {
        if (fVar7 < fVar6) {
          uVar1 = 0x100;
          if ((int)(fVar7 * 256.0) < 0x100) {
            fVar2 = *(float *)(&DAT_8c26d970 +
                              (*(int *)(ar4 + 0x88) * 0x100 + (int)(fVar7 * 256.0)) * 4) *
                    *(float *)(ar4 + 0x80) * fVar2;
          }
        }
        fVar5 = *(float *)(ar4 + 0x114);
        fVar4 = *(float *)(ar4 + 0x11c);
        fVar3 = *(float *)(ar4 + 0x120);
        ar5[5] = fVar2 * *(float *)(ar4 + 0x118) + ar5[5];
        ar5[6] = fVar2 * fVar4 + ar5[6];
        ar5[7] = fVar2 * fVar3 + ar5[7];
        *ar5 = fVar2 * fVar5 + *ar5;
      }
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c23b930\n.set _FUN_8c23b930, _FUN_8c23b930_def\n");
