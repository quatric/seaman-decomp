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
undefined4 FUN_8c23cfd0_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23cfd0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar21;
  ulonglong uVar20;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 in_xd0 = 0;
  float fVar28;
  undefined8 in_xd2 = 0;
  float fVar29;
  undefined8 in_xd4 = 0;
  float fVar30;
  undefined8 in_xd6 = 0;
  float fVar31;
  undefined8 in_xd8 = 0;
  float fVar32;
  undefined8 in_xd10 = 0;
  float fVar33;
  undefined8 in_xd12 = 0;
  float fVar34;
  undefined8 in_xd14 = 0;
  float fVar35;
  
  fVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8);
  fVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4);
  fVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d4);
  fVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d8);
  uVar8 = ar4[1];
  pfVar6 = (float *)(unsigned)(uint)ar4[2];
  pfVar5 = (float *)(unsigned)(uint)ar4[3];
  fVar23 = (float)ar4[4];
  fVar22 = (float)ar4[5];
  uVar11 = ar4[6];
  uVar12 = ar4[7];
  fVar26 = (float)ar4[8];
  fVar27 = (float)ar4[9];
  fVar24 = (float)ar4[10];
  fVar25 = (float)ar4[0xb];
  (*(undefined4 *)(unsigned)(unsigned)0xff000038) = (uVar8 & 0x1c000000) >> 0x18;
  puVar7 = (uint *)(unsigned)(uVar8 & 0x3ffffff | 0xe0000000);
  iVar9 = uVar8 + 0x20;
  (*(undefined4 *)(unsigned)(unsigned)0xff00003c) = (*(undefined4 *)(unsigned)(unsigned)0xff000038);
  for (iVar10 = *ar4; iVar10 != 0; iVar10 = iVar10 + -1) {
    fVar17 = *pfVar5;
    fVar16 = pfVar5[1];
    fVar21 = pfVar5[2];
    uVar20 = (ulonglong)(uint)fVar21 << 0x20;
    pfVar5 = pfVar5 + 3;
    fVar29 = F32HI(in_xd2);
    fVar30 = F32HI(in_xd4);
    fVar31 = F32HI(in_xd6);
    fVar32 = F32HI(in_xd8);
    fVar33 = F32HI(in_xd10);
    fVar34 = F32HI(in_xd12);
    fVar35 = F32HI(in_xd14);
                    
    fVar13 = (float)in_xd0 * fVar16 + (float)in_xd4 * fVar17 + (float)in_xd8 * 0.0 +
             (float)in_xd12 * fVar21;
    fVar28 = F32HI(in_xd0);
    fVar14 = fVar28 * fVar16 + fVar30 * fVar17 + fVar32 * 0.0 + fVar34 * fVar21;
    fVar18 = (float)in_xd2 * fVar16 + (float)in_xd6 * fVar17 + (float)in_xd10 * 0.0 +
             (float)in_xd14 * fVar21;
    fVar16 = fVar29 * fVar16 + fVar31 * fVar17 + fVar33 * 0.0 + fVar35 * fVar21;
    fVar21 = *pfVar6;
    fVar18 = pfVar6[1];
    fVar15 = pfVar6[2];
    pfVar6 = pfVar6 + 3;
    CacheBlockInvalidate(iVar9);
    uVar20 = uVar20 & 0xffffffff00000000;
                    
    fVar16 = (float)(uVar20 >> 0x20);
    fVar16 = fVar13 * fVar13 + fVar14 * fVar14 + 0.0 + fVar16 * fVar16;
    fVar19 = 1.0 / SQRT((float)uVar20);
    puVar7[0xf] = 0xffffffff;
                    
    fVar16 = (float)in_xd0 * fVar18 + (float)in_xd4 * fVar21 + (float)in_xd8 * 1.0 +
             (float)in_xd12 * fVar15;
    fVar17 = fVar28 * fVar18 + fVar30 * fVar21 + fVar32 * 1.0 + fVar34 * fVar15;
    fVar18 = fVar29 * fVar18 + fVar31 * fVar21 + fVar33 * 1.0 + fVar35 * fVar15;
    puVar7[0xe] = (uint)((float)(uVar20 >> 0x20) * fVar19);
    puVar7[0xd] = (uint)(fVar13 * fVar19);
    puVar7[0xc] = (uint)(fVar14 * fVar19);
    fVar14 = 1.0 / fVar18;
    puVar7[6] = (uint)fVar18;
    puVar7[5] = (uint)fVar16;
    puVar7[4] = (uint)fVar17;
    CacheBlockInvalidate(iVar9 + -0x20);
    iVar9 = iVar9 + 0x40;
    uVar8 = 0;
    fVar13 = fVar16 * fVar22 * fVar14 + fVar2;
    fVar16 = fVar17 * fVar23 * fVar14 + fVar1;
    if (fVar3 <= fVar18) {
      uVar8 = (((uint)(fVar25 < fVar13) << 1 | (uint)(fVar13 < fVar24)) << 1 |
              (uint)(fVar27 < fVar16)) << 1 | (uint)(fVar16 < fVar26);
    }
    puVar7[3] = (uint)fVar14;
    puVar7[2] = (uint)fVar13;
    uVar8 = (uVar8 << 1 | (uint)(fVar4 < fVar18)) << 1 | (uint)(fVar18 < fVar3);
    puVar7[1] = (uint)fVar16;
    uVar11 = uVar11 & uVar8;
    *puVar7 = uVar8;
    uVar12 = uVar12 | uVar8;
    puVar7 = puVar7 + 0x10;
  }
  ar4[6] = uVar11;
  ar4[7] = uVar12;
  return 0x3ffffff;
}

__asm__(".globl _FUN_8c23cfd0\n.set _FUN_8c23cfd0, _FUN_8c23cfd0_def\n");
