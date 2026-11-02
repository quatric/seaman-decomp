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
int FUN_8c215374_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c215374";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
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
  float in_xf0 = 0;
  float in_xf1 = 0;
  float in_xf3 = 0;
  undefined8 in_xd4 = 0;
  undefined8 in_xd6 = 0;
  undefined8 in_xd8 = 0;
  float in_xf11 = 0;
  undefined8 in_xd12 = 0;
  undefined8 in_xd14 = 0;
  bool bVar24;
  bool bVar25;
  
  iVar7 = *ar4;
  pfVar8 = (float *)(unsigned)(uint)ar4[1];
  iVar9 = ar4[2];
  pfVar10 = (float *)(unsigned)(uint)ar4[3];
  iVar11 = 0;
  do {
    fVar22 = *pfVar8;
    fVar21 = pfVar8[1];
    fVar23 = pfVar8[2];
                    
    fVar1 = in_xf3 * fVar21 + F32HI(in_xd6) * fVar22 + in_xf11 * 1.0 +
            F32HI(in_xd14) * fVar23;
                    
    fVar13 = 0.0;
    iVar2 = -0x73b3f240;
    fVar15 = 0.0;
    fVar16 = 0.0;
    uVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c0db0);
    do {
      bVar24 = (uVar5 & 1) != 0;
      uVar5 = uVar5 >> 1 | (uint)bVar24 << 0x1f;
      while( true ) {
        while( true ) {
          while( true ) {
            bVar25 = (uVar5 & 1) != 0;
            uVar5 = uVar5 >> 1;
            uVar6 = uVar5 | (uint)bVar25 << 0x1f;
            if (bVar24) break;
            bVar25 = (uVar5 & 1) != 0;
            iVar2 = iVar2 + 0x20;
            if (bVar25) goto LAB_8c21544c;
            bVar24 = (uVar5 & 2) != 0;
            uVar5 = (uVar6 >> 1 | (uint)bVar25 << 0x1f) >> 1 | (uint)bVar24 << 0x1f;
          }
          if (bVar25) break;
                    
          iVar2 = iVar2 + 0x20;
          bVar25 = (uVar5 & 1) != 0;
          if (bVar25) goto LAB_8c21544c;
          bVar24 = (uVar5 & 2) != 0;
          uVar5 = (uVar6 >> 1 | (uint)bVar25 << 0x1f) >> 1 | (uint)bVar24 << 0x1f;
        }
                    
                    
        if (0.0 < *(float *)(unsigned)(iVar2 + 0xc) == true) break;
        bVar25 = (uVar5 & 1) != 0;
        iVar2 = iVar2 + 0x20;
        if (bVar25) goto LAB_8c21544c;
        bVar24 = (uVar5 & 2) != 0;
        uVar5 = (uVar6 >> 1 | (uint)bVar25 << 0x1f) >> 1 | (uint)bVar24 << 0x1f;
      }
      fVar12 = NAN;
      pfVar3 = (float *)(unsigned)(iVar2 + 0x18);
      if (*(float *)(unsigned)(iVar2 + 0x10) < 0.0) {
        fVar12 = *(float *)(unsigned)(iVar2 + 0x10) * NAN * INFINITY;
      }
      bVar24 = (uVar5 & 1) != 0;
      uVar5 = uVar6 >> 1 | (uint)bVar24 << 0x1f;
      pfVar4 = (float *)(unsigned)(iVar2 + 0x1c);
      fVar13 = fVar12 * *(float *)(unsigned)(iVar2 + 0x14) + fVar13;
      iVar2 = iVar2 + 0x20;
      fVar16 = fVar12 * *pfVar3 + fVar16;
      fVar15 = fVar12 * *pfVar4 + fVar15;
    } while (!bVar24);
LAB_8c21544c:
    fVar12 = pfVar8[6];
    fVar14 = 1.0 / fVar1;
    fVar18 = (float)ar4[4];
    fVar17 = (float)ar4[5];
    fVar20 = (float)ar4[6];
    fVar19 = (float)ar4[7];
    pfVar10[7] = fVar15 * (float)((uint)fVar12 & 0xff) * 0.0078125;
    pfVar10[6] = fVar16 * (float)((uint)fVar12 >> 8 & 0xff) * 0.0078125;
    pfVar10[5] = fVar13 * (float)((uint)fVar12 >> 0x10 & 0xff) * 0.0078125;
    pfVar10[4] = (float)((uint)fVar12 >> 0x18) * 0.0078125;
    pfVar10[3] = fVar14;
    pfVar10[2] = fVar14 * fVar17 * (in_xf0 * fVar21 + (float)in_xd4 * fVar22 + (float)in_xd8 * 1.0 +
                                   (float)in_xd12 * fVar23) + fVar19;
    pfVar10[1] = fVar14 * fVar18 * (in_xf1 * fVar21 + F32HI(in_xd4) * fVar22 +
                                    F32HI(in_xd8) * 1.0 +
                                   F32HI(in_xd12) * fVar23) + fVar20;
    pfVar8 = pfVar8 + 7;
    iVar7 = iVar7 + -1;
    *pfVar10 = fVar1;
    iVar11 = iVar11 + (uint)(fVar1 < 1.0);
    CacheBlockInvalidate(iVar9);
    iVar9 = iVar9 + 0x20;
    if (iVar7 == 0) {
      return iVar11;
    }
    pfVar10 = pfVar10 + 8;
  } while( true );
}

__asm__(".globl _FUN_8c215374\n.set _FUN_8c215374, _FUN_8c215374_def\n");
