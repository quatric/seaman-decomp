#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c10ecd8_def(float *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10ecd8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 92; for (int i_ = 0; i_ < 92; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  uVar4 = 1;
  uVar9 = 0;
  uVar6 = ar5;
  if (1 < ar5) {
    do {
      do {
        uVar6 = uVar6 >> 1;
        uVar9 = uVar9 ^ uVar6;
      } while ((uVar9 & uVar6) == 0);
      if (uVar9 < uVar4) {
        fVar11 = ar4[uVar4];
        ar4[uVar4] = ar4[uVar9];
        ar4[uVar9] = fVar11;
      }
      uVar4 = uVar4 + 1;
      uVar6 = ar5;
    } while (uVar4 < ar5);
  }
  uVar6 = 0;
  if (1 < ar5) {
    do {
      uVar6 = uVar6 + 1;
      if ((int)uVar6 < 0) {
        uVar4 = 1 >> (~uVar6 & 0x1f) + 1;
      }
      else {
        uVar4 = 1 << (uVar6 & 0x1f);
      }
    } while (uVar4 < ar5);
  }
  puVar1 = ((undefined4 *)(unsigned)0x8c10eda0);
  uVar6 = uVar6 & 1;
  pfVar10 = ar4 + ar5;
  pfVar5 = ar4;
  if (uVar6 == 0) {
    for (; pfVar5 < pfVar10; pfVar5 = pfVar5 + 4) {
      fVar12 = pfVar5[1];
      fVar14 = pfVar5[2];
      fVar11 = *pfVar5 - fVar12;
      fVar16 = pfVar5[3];
      fVar12 = fVar12 + *pfVar5;
      fVar13 = fVar14 - fVar16;
      fVar16 = fVar16 + fVar14;
      pfVar5[2] = fVar12 - fVar16;
      *pfVar5 = fVar12 + fVar16;
      pfVar5[3] = fVar11 - fVar13;
      pfVar5[1] = fVar11 + fVar13;
    }
  }
  else {
    pfVar5 = ar4 + 1;
    for (pfVar7 = ar4; pfVar7 < pfVar10; pfVar7 = pfVar7 + 8) {
      fVar16 = *pfVar7 - *pfVar5;
      fVar13 = *pfVar5 + *pfVar7;
      fVar11 = pfVar7[2];
      fVar12 = pfVar5[2];
      fVar14 = fVar11 - fVar12;
      fVar12 = fVar12 + fVar11;
      fVar11 = pfVar7[4];
      fVar22 = pfVar5[4];
      fVar20 = pfVar5[6];
      fVar15 = fVar22 + fVar11;
      fVar19 = pfVar7[6];
      fVar24 = fVar20 + fVar19;
      fVar18 = fVar16 - fVar14;
      fVar16 = fVar16 + fVar14;
      fVar17 = fVar15 - fVar24;
      fVar14 = fVar13 + fVar12;
      fVar13 = fVar13 - fVar12;
      fVar15 = fVar15 + fVar24;
      fVar12 = (fVar11 - fVar22) * 1.4142135;
      fVar11 = (fVar19 - fVar20) * 1.4142135;
      pfVar7[4] = fVar14 - fVar15;
      *pfVar7 = fVar14 + fVar15;
      pfVar7[6] = fVar13 - fVar17;
      pfVar7[2] = fVar13 + fVar17;
      pfVar5[4] = fVar16 - fVar12;
      *pfVar5 = fVar16 + fVar12;
      pfVar5[6] = fVar18 - fVar11;
      pfVar5[2] = fVar18 + fVar11;
      pfVar5 = pfVar5 + 8;
    }
  }
  if (0xf < ar5) {
    do {
      uVar6 = uVar6 + 2;
      if ((int)uVar6 < 0) {
        uVar4 = 1 >> (~uVar6 & 0x1f) + 1;
      }
      else {
        uVar4 = 1 << (uVar6 & 0x1f);
      }
      uVar9 = uVar4 >> 1;
      pfVar7 = ar4 + uVar9;
      pfVar5 = ar4;
      do {
        fVar12 = pfVar5[uVar4];
        fVar11 = *pfVar5 - fVar12;
        fVar12 = fVar12 + *pfVar5;
        fVar16 = pfVar5[uVar4 * 2];
        fVar14 = pfVar5[uVar4 * 3];
        fVar13 = fVar16 - fVar14;
        fVar14 = fVar14 + fVar16;
        pfVar5[uVar4 * 2] = fVar12 - fVar14;
        *pfVar5 = fVar12 + fVar14;
        pfVar5[uVar4 * 3] = fVar11 - fVar13;
        pfVar5[uVar4] = fVar11 + fVar13;
        fVar11 = pfVar7[uVar4];
        fVar14 = fVar11 + *pfVar7;
        fVar11 = *pfVar7 - fVar11;
        fVar12 = pfVar7[uVar4 * 3] * 1.4142135;
        fVar13 = pfVar7[uVar4 * 2] * 1.4142135;
        pfVar7[uVar4 * 2] = fVar14 - fVar13;
        *pfVar7 = fVar14 + fVar13;
        pfVar5 = pfVar5 + uVar4 * 4;
        pfVar7[uVar4 * 3] = fVar11 - fVar12;
        pfVar7[uVar4] = fVar11 + fVar12;
        pfVar7 = pfVar7 + uVar4 * 4;
      } while (pfVar5 < pfVar10);
      fVar12 = *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c1274f8) + uVar6 * 4);
      fVar14 = *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c127538) + uVar6 * 4);
      iVar8 = 4;
      puVar1 = ((undefined4 *)(unsigned)0x8c10f100);
      fVar13 = 0.0;
      (*(uint *)(fr0_ - 0x5c)) = 1;
      fVar11 = 1.0;
      if (1 < uVar9) {
        do {
          fVar16 = fVar12 * fVar11 - fVar14 * fVar13;
          fVar13 = fVar11 * fVar14 + fVar12 * fVar13;
          fVar11 = fVar16 * fVar16 - fVar13 * fVar13;
          fVar17 = fVar13 * fVar16 * 2.0;
          pfVar7 = (float *)(unsigned)((uVar4 * 4 - iVar8) + (int)ar4);
          pfVar5 = (float *)(unsigned)(iVar8 + (int)ar4);
          do {
            pfVar3 = pfVar5 + uVar4;
            fVar15 = *pfVar3;
            fVar18 = pfVar7[uVar4];
            fVar19 = fVar11 * fVar15 + fVar18 * fVar17;
            fVar22 = fVar15 * fVar17 - fVar18 * fVar11;
            fVar20 = *pfVar5 + fVar19;
            fVar19 = *pfVar5 - fVar19;
            pfVar2 = pfVar5 + uVar4 * 3;
            fVar21 = *pfVar7 + fVar22;
            fVar22 = *pfVar7 - fVar22;
            fVar24 = *pfVar2;
            fVar15 = pfVar7[uVar4 * 3];
            fVar18 = fVar11 * fVar24 + fVar15 * fVar17;
            fVar23 = fVar24 * fVar17 - fVar15 * fVar11;
            fVar24 = pfVar5[uVar4 * 2];
            fVar25 = fVar24 + fVar18;
            fVar24 = fVar24 - fVar18;
            fVar26 = pfVar7[uVar4 * 2];
            fVar15 = fVar26 - fVar23;
            fVar26 = fVar26 + fVar23;
            fVar18 = fVar13 * fVar25 - fVar16 * fVar15;
            fVar15 = fVar25 * fVar16 + fVar13 * fVar15;
            pfVar5[uVar4 * 2] = fVar20 - fVar15;
            *pfVar5 = fVar15 + fVar20;
            pfVar7[uVar4 * 3] = fVar22 - fVar18;
            pfVar7[uVar4] = fVar18 + fVar22;
            fVar18 = fVar16 * fVar26 - fVar13 * fVar24;
            fVar15 = fVar13 * fVar26 + fVar16 * fVar24;
            pfVar7[uVar4 * 2] = fVar21 - fVar15;
            *pfVar7 = fVar15 + fVar21;
            puVar1 = (undefined4 *)(unsigned)0x1c;
            pfVar5 = pfVar5 + uVar4 * 4;
            *pfVar2 = fVar19 - fVar18;
            *pfVar3 = fVar18 + fVar19;
            pfVar7 = pfVar7 + uVar4 * 4;
          } while (pfVar5 < pfVar10);
          (*(uint *)(fr0_ - 0x5c)) = (*(uint *)(fr0_ - 0x5c)) + 1;
          iVar8 = iVar8 + 4;
          fVar11 = fVar16;
        } while ((*(uint *)(fr0_ - 0x5c)) < uVar9);
      }
    } while (uVar4 * 4 < ar5);
  }
  return puVar1;
}

__asm__(".globl _FUN_8c10ecd8\n.set _FUN_8c10ecd8, _FUN_8c10ecd8_def\n");
