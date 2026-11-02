#include "../decls.h"
undefined4 FUN_8c23b208_def(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float in_fr11;
  float fVar6;
  
  fVar1 = *(float *)(ar4 + 0x60);
  if (fVar1 != 0.0) {
                    
    in_r0 = 4;
    if (0.0 < in_fr11) {
      fVar6 = in_fr11 * in_fr11;
      fVar5 = *(float *)(ar4 + 0x70);
      fVar4 = *(float *)(ar4 + 0x74);
      fVar3 = *(float *)(ar4 + 0x10c);
      fVar2 = *(float *)(ar4 + 0x110);
      ar5[1] = in_fr11 * *(float *)(ar4 + 0x108) + ar5[1];
      ar5[2] = in_fr11 * fVar3 + ar5[2];
      ar5[3] = in_fr11 * fVar2 + ar5[3];
      if (fVar4 < fVar6) {
        if (fVar6 < fVar5) {
          in_r0 = 0x100;
          if ((int)(fVar6 * 256.0) < 0x100) {
            fVar1 = *(float *)(&DAT_8c26d970 +
                              (*(int *)(ar4 + 0x88) * 0x100 + (int)(fVar6 * 256.0)) * 4) *
                    *(float *)(ar4 + 0x80) * fVar1;
          }
        }
        fVar4 = *(float *)(ar4 + 0x114);
        fVar3 = *(float *)(ar4 + 0x11c);
        fVar2 = *(float *)(ar4 + 0x120);
        ar5[5] = fVar1 * *(float *)(ar4 + 0x118) + ar5[5];
        ar5[6] = fVar1 * fVar3 + ar5[6];
        ar5[7] = fVar1 * fVar2 + ar5[7];
        *ar5 = fVar1 * fVar4 + *ar5;
      }
    }
  }
  return in_r0;
}

__asm__(".globl _FUN_8c23b208\n.set _FUN_8c23b208, _FUN_8c23b208_def\n");
