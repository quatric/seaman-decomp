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
int FUN_8c215250_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c215250";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  undefined8 in_dr6 = 0;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar19;
  longlong lVar18;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float in_xf0 = 0;
  float in_xf1 = 0;
  float in_xf2 = 0;
  float in_xf3 = 0;
  undefined8 in_xd4 = 0;
  float in_xf6 = 0;
  float in_xf7 = 0;
  undefined8 in_xd8 = 0;
  undefined8 in_xd10 = 0;
  undefined8 in_xd12 = 0;
  undefined8 in_xd14 = 0;
  float fVar24;
  bool bVar25;
  bool bVar26;
  
  iVar8 = *ar4;
  pfVar9 = (float *)(unsigned)(uint)ar4[1];
  iVar10 = ar4[2];
  pfVar11 = (float *)(unsigned)(uint)ar4[3];
  iVar12 = 0;
  do {
    fVar22 = *pfVar9;
    fVar21 = pfVar9[1];
    fVar23 = pfVar9[2];
    fVar16 = F32HI(in_xd4);
    fVar20 = F32HI(in_xd10);
    fVar13 = F32HI(in_xd12);
    fVar24 = F32HI(in_xd14);
                    
    fVar1 = in_xf0 * fVar21 + (float)in_xd4 * fVar22 + (float)in_xd8 * 1.0 + (float)in_xd12 * fVar23
    ;
    fVar17 = F32HI(in_xd8);
    fVar2 = in_xf1 * fVar21 + fVar16 * fVar22 + fVar17 * 1.0 + fVar13 * fVar23;
    fVar23 = in_xf3 * fVar21 + in_xf7 * fVar22 + fVar20 * 1.0 + fVar24 * fVar23;
    fVar15 = pfVar9[3];
    fVar14 = pfVar9[4];
    fVar19 = pfVar9[5];
    lVar18 = (ulonglong)(uint)fVar19 << 0x20;
    pfVar9 = pfVar9 + 6;
                    
    fVar21 = in_xf0 * fVar14 + (float)in_xd4 * fVar15 + (float)in_xd8 * 0.0 +
             (float)in_xd12 * fVar19;
    fVar22 = in_xf1 * fVar14 + fVar16 * fVar15 + fVar17 * 0.0 + fVar13 * fVar19;
    fVar16 = in_xf2 * fVar14 + in_xf6 * fVar15 + (float)in_xd10 * 0.0 + (float)in_xd14 * fVar19;
    fVar14 = in_xf3 * fVar14 + in_xf7 * fVar15 + fVar20 * 0.0 + fVar24 * fVar19;
    fVar14 = 0.0;
    fVar16 = 0.0;
    pfVar3 = (float *)(unsigned)0x8c4c0dc0;
    fVar15 = 0.0;
    uVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c0db0);
    do {
      bVar25 = (uVar6 & 1) != 0;
      uVar6 = uVar6 >> 1 | (uint)bVar25 << 0x1f;
      pfVar4 = pfVar3;
      while( true ) {
        while( true ) {
          while( true ) {
            bVar26 = (uVar6 & 1) != 0;
            uVar6 = uVar6 >> 1;
            uVar7 = uVar6 | (uint)bVar26 << 0x1f;
            if (bVar25) break;
            bVar26 = (uVar6 & 1) != 0;
            if (bVar26) goto LAB_8c215320;
            bVar25 = (uVar6 & 2) != 0;
            uVar6 = (uVar7 >> 1 | (uint)bVar26 << 0x1f) >> 1 | (uint)bVar25 << 0x1f;
            pfVar4 = pfVar4 + 8;
          }
          fVar19 = F32HI(lVar18);
          if (bVar26) break;
          lVar18 = (ulonglong)(uint)fVar19 << 0x20;
                    
          fVar19 = fVar21 * pfVar4[1] + fVar22 * *pfVar4 + (float)in_dr6 * 0.0 + fVar19 * pfVar4[2];
          in_dr6 = 0;
          bVar25 = (uVar6 & 1) != 0;
          uVar7 = uVar7 >> 1 | (uint)bVar25 << 0x1f;
          if ((float)lVar18 < 0.0) {
            pfVar3 = pfVar4 + 6;
            fVar19 = -(float)lVar18;
            pfVar5 = pfVar4 + 7;
            fVar14 = fVar19 * pfVar4[5] + fVar14;
            in_dr6 = 0;
            pfVar4 = pfVar4 + 8;
            fVar16 = fVar19 * *pfVar3 + fVar16;
            fVar15 = fVar19 * *pfVar5 + fVar15;
            if (bVar25) goto LAB_8c215320;
            bVar25 = (uVar6 & 2) != 0;
            uVar6 = uVar7 >> 1 | (uint)bVar25 << 0x1f;
          }
          else {
            if (bVar25) goto LAB_8c215320;
            bVar25 = (uVar6 & 2) != 0;
            uVar6 = uVar7 >> 1 | (uint)bVar25 << 0x1f;
            pfVar4 = pfVar4 + 8;
          }
        }
        fVar20 = *pfVar4 - fVar2;
        fVar17 = pfVar4[1] - fVar1;
        fVar13 = pfVar4[2] - fVar23;
        in_dr6 = 0;
        lVar18 = (ulonglong)(uint)fVar19 << 0x20;
                    
        fVar19 = fVar21 * fVar17 + fVar22 * fVar20 + 0.0 + fVar19 * fVar13;
                    
        fVar19 = fVar17 * fVar17 + fVar20 * fVar20 + 0.0 + fVar13 * fVar13;
        fVar17 = (float)in_dr6;
        fVar19 = 1.0 / SQRT(fVar17);
        if ((byte)((0.0 < (float)lVar18) << 1 | fVar17 < pfVar4[3]) == 3) break;
        bVar26 = (uVar6 & 1) != 0;
        pfVar4 = pfVar4 + 8;
        if (bVar26) goto LAB_8c215320;
        bVar25 = (uVar6 & 2) != 0;
        uVar6 = (uVar7 >> 1 | (uint)bVar26 << 0x1f) >> 1 | (uint)bVar25 << 0x1f;
      }
      fVar20 = (float)lVar18 * fVar19;
      if (pfVar4[4] < fVar17) {
        fVar20 = fVar20 * pfVar4[4] * fVar19 * fVar19;
      }
      lVar18 = CONCAT44((int)((ulonglong)lVar18 >> 0x20),fVar20);
      bVar25 = (uVar6 & 1) != 0;
      uVar6 = uVar7 >> 1 | (uint)bVar25 << 0x1f;
      fVar14 = fVar20 * pfVar4[5] + fVar14;
      in_dr6 = CONCAT44(pfVar4[7],fVar17);
      pfVar3 = pfVar4 + 8;
      fVar16 = fVar20 * pfVar4[6] + fVar16;
      fVar15 = fVar20 * pfVar4[7] + fVar15;
    } while (!bVar25);
LAB_8c215320:
    fVar21 = 1.0 / fVar23;
    fVar19 = (float)ar4[4];
    fVar22 = (float)ar4[5];
    fVar20 = (float)ar4[6];
    iVar12 = iVar12 + (uint)(fVar23 < 1.0);
    fVar17 = (float)ar4[7];
    pfVar11[7] = fVar15;
    pfVar11[6] = fVar16;
    pfVar11[5] = fVar14;
    pfVar11[4] = 1.0;
    pfVar11[3] = fVar21;
    pfVar11[2] = fVar21 * fVar22 * fVar1 + fVar17;
    pfVar11[1] = fVar21 * fVar19 * fVar2 + fVar20;
    iVar8 = iVar8 + -1;
    *pfVar11 = fVar23;
    CacheBlockInvalidate(iVar10);
    iVar10 = iVar10 + 0x20;
    pfVar11 = pfVar11 + 8;
    if (iVar8 == 0) {
      return iVar12;
    }
  } while( true );
}

__asm__(".globl _FUN_8c215250\n.set _FUN_8c215250, _FUN_8c215250_def\n");
