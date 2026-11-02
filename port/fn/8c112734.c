#include "../decls.h"
undefined4 FUN_8c112734_def(float *ar4,float *ar5,int ar6,undefined4 ar7)

{
  char cVar1;
  float fVar2;
  float *ain0;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *ar5_00;
  float ar6_00;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar15;
  undefined8 in_xd2;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined8 uVar14;
  
  fVar3 = ar4[1];
  fVar2 = *ar4;
  ar6_00 = (float)(ar6 + 1);
  fVar4 = ar4[3];
  ain0 = (float *)((int)ar5[2] * 4 + (int)ar5[3]);
  pfVar5 = ar4;
  ar5_00 = ar5;
  fVar8 = ar6_00;
  if ((uint)ar6_00 < (uint)ar4[1]) {
    do {
      pfVar7 = (float *)((int)fVar8 * (int)*ar4 * 4 + (int)ar4[3]);
      pfVar9 = pfVar7 + (int)fVar8;
      fVar15 = *pfVar9;
      pfVar6 = pfVar7 + -(int)*ar4;
      fVar13 = pfVar9[-1];
      uVar14 = CONCAT44(fVar15,fVar13);
      fVar11 = fVar13;
      if (fVar13 <= 0.0) {
        fVar11 = -fVar13;
      }
      fVar10 = fVar15;
      if (fVar15 <= 0.0) {
        fVar10 = -fVar15;
      }
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      if (fVar10 <= fVar11) {
        fVar13 = -fVar15 / fVar13;
        fVar11 = fVar13;
        FUN_8c11fbb6(pfVar5,ar5_00,ar6_00,ar7,ain0);
        cVar1 = (char)((((uint)bVar16 << 0x12 | (uint)bVar17 << 0x13 | (uint)bVar18 << 0x14) &
                       0x100000) >> 0x14);
        if (cVar1 == '\0') {
          fVar15 = 1.0;
        }
        else {
          fVar15 = 0.0;
        }
        uVar12 = in_xd2;
        if (cVar1 == '\0') {
          uVar12 = CONCAT44(fVar15 / fVar13,fVar15 / fVar13);
        }
        fVar13 = (float)((ulonglong)uVar12 >> 0x20);
        fVar11 = (float)uVar12 * fVar11;
      }
      else {
        fVar15 = -fVar13 / fVar15;
        fVar13 = fVar15;
        FUN_8c11fbb6(pfVar5,ar5_00,ar6_00,ar7,ain0);
        cVar1 = (char)((((uint)bVar16 << 0x12 | (uint)bVar17 << 0x13 | (uint)bVar18 << 0x14) &
                       0x100000) >> 0x14);
        if (cVar1 == '\0') {
          fVar11 = 1.0;
        }
        else {
          fVar11 = -INFINITY;
        }
        uVar12 = in_xd2;
        if (cVar1 == '\0') {
          uVar12 = CONCAT44(fVar11 / fVar15,fVar11 / fVar15);
        }
        fVar11 = (float)uVar12;
        fVar13 = (float)((ulonglong)uVar12 >> 0x20) * fVar13;
      }
      fVar15 = 1.4013e-45;
      if (1 < (uint)fVar8) {
        do {
          fVar10 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          fVar15 = (float)((int)fVar15 + 1);
          *pfVar6 = fVar10;
          pfVar6 = pfVar6 + 1;
        } while ((uint)fVar15 < (uint)fVar8);
      }
      *pfVar6 = (float)uVar14 * fVar13 - (float)((ulonglong)uVar14 >> 0x20) * fVar11;
      for (pfVar5 = pfVar9 + -1 + (int)*ar4;
          pfVar5 < (float *)((int)fVar2 * (int)fVar3 * 4 + (int)fVar4); pfVar5 = pfVar5 + (int)*ar4)
      {
        fVar15 = *pfVar5;
        *pfVar5 = (float)*(undefined8 *)pfVar5 * fVar13 -
                  (float)((ulonglong)*(undefined8 *)pfVar5 >> 0x20) * fVar11;
        pfVar5[1] = fVar11 * fVar15 + pfVar5[1] * fVar13;
      }
      for (pfVar5 = (float *)((int)fVar8 * 4 + (int)ar5[3]); pfVar5 < ain0;
          pfVar5 = pfVar5 + (int)*ar5) {
        ar5_00 = pfVar5 + -1;
        fVar15 = *ar5_00;
        *ar5_00 = fVar15 * fVar13 - *pfVar5 * fVar11;
        *pfVar5 = fVar11 * fVar15 + *pfVar5 * fVar13;
      }
      fVar8 = (float)((int)fVar8 + 1);
    } while ((uint)fVar8 < (uint)ar4[1]);
  }
  ar4[1] = (float)((int)ar4[1] + -1);
  return 0;
}

__asm__(".globl _FUN_8c112734\n.set _FUN_8c112734, _FUN_8c112734_def\n");
