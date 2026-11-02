#include "../decls.h"
undefined4 FUN_8c112958_def(uint *ar4,int ar5,int ar6,undefined4 ar7)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  
  pfVar8 = (float *)(uint)ar4[3];
  pfVar5 = *(float **)(ar5 + 0xc);
  uVar4 = 0;
  pfVar3 = *(float **)(ar6 + 0xc);
  while (bVar12 = uVar4 < ar4[1], uVar4 = uVar4 + 1, bVar12) {
    fVar11 = *pfVar3;
    pfVar7 = pfVar3 + 1;
    pfVar8 = pfVar8 + uVar4;
    pfVar1 = pfVar7;
    uVar2 = uVar4;
    pfVar6 = pfVar8;
    if (uVar4 < *ar4) {
      do {
        uVar2 = uVar2 + 1;
        fVar9 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        fVar10 = *pfVar1;
        pfVar1 = pfVar1 + 1;
        fVar11 = fVar9 * fVar10 + fVar11;
      } while (uVar2 < *ar4);
    }
    fVar9 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    *pfVar3 = *pfVar3 - fVar11 * fVar9;
    uVar2 = uVar4;
    pfVar3 = pfVar7;
    if (uVar4 < *ar4) {
      do {
        uVar2 = uVar2 + 1;
        fVar10 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        *pfVar7 = *pfVar7 - fVar11 * fVar9 * fVar10;
        pfVar7 = pfVar7 + 1;
      } while (uVar2 < *ar4);
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c112958\n.set _FUN_8c112958, _FUN_8c112958_def\n");
