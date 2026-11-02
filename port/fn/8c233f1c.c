#include "../decls.h"
undefined4 FUN_8c233f1c_def(int *ar4,int ar5,int ar6,undefined4 *ar7)

{
  float fVar1;
  undefined4 uVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_fr5;
  float in_fr4;
  float in_fr7;
  float in_fr6;
  undefined4 uVar9;
  undefined8 in_xd0;
  float in_xf2;
  float in_xf3;
  float in_xf4;
  float in_xf5;
  float in_xf6;
  float in_xf7;
  undefined8 in_xd8;
  undefined8 in_xd10;
  float in_xf12;
  float in_xf13;
  float in_xf14;
  float in_xf15;
  bool bVar10;
  
  puVar4 = (undefined4 *)(ar4[1] + ar5 * 4);
  pfVar3 = (float *)(*ar4 + ar5 * 0xc);
  uVar2 = 0;
  do {
    fVar6 = *pfVar3;
    fVar5 = pfVar3[1];
    fVar8 = pfVar3[2];
    pfVar3 = pfVar3 + 3;
                    
    fVar1 = in_xf3 * fVar5 + in_xf7 * fVar6 + (float)((ulonglong)in_xd10 >> 0x20) * 1.0 +
            in_xf15 * fVar8;
    uVar9 = 0xffffffff;
    if (puVar4 != (undefined4 *)0x0) {
      uVar9 = *puVar4;
      puVar4 = puVar4 + 1;
    }
    fVar7 = (in_xf2 * fVar5 + in_xf6 * fVar6 + (float)in_xd10 * 1.0 + in_xf14 * fVar8) / fVar1;
    if (_DAT_8c4aa4d8 < fVar1) {
      return 0xffffffff;
    }
    bVar10 = fVar1 <= _DAT_8c4aa4d4;
    ar7[3] = ((float)((ulonglong)in_xd0 >> 0x20) * fVar5 + in_xf5 * fVar6 +
              (float)((ulonglong)in_xd8 >> 0x20) * 1.0 + in_xf13 * fVar8) * in_fr4 * fVar7 + in_fr6;
    ar7[2] = ((float)in_xd0 * fVar5 + in_xf4 * fVar6 + (float)in_xd8 * 1.0 + in_xf12 * fVar8) *
             in_fr5 * fVar7 + in_fr7;
    ar7[1] = fVar7;
    *ar7 = uVar9;
    if (bVar10) {
      uVar2 = 1;
    }
    ar6 = ar6 + -1;
    ar7 = ar7 + 4;
  } while (ar6 != 0);
  return uVar2;
}

__asm__(".globl _FUN_8c233f1c\n.set _FUN_8c233f1c, _FUN_8c233f1c_def\n");
