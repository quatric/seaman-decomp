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
undefined4 FUN_8c23cd0c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23cd0c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar22;
  ulonglong uVar21;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 in_xd0 = 0;
  float fVar29;
  undefined8 in_xd2 = 0;
  float fVar30;
  undefined8 in_xd4 = 0;
  float fVar31;
  undefined8 in_xd6 = 0;
  float fVar32;
  undefined8 in_xd8 = 0;
  float fVar33;
  undefined8 in_xd10 = 0;
  float fVar34;
  undefined8 in_xd12 = 0;
  float fVar35;
  undefined8 in_xd14 = 0;
  float fVar36;
  
  fVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa550);
  fVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d8);
  fVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d4);
  fVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8);
  fVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4);
  uVar11 = ar4[1];
  pfVar7 = (float *)(unsigned)(uint)ar4[2];
  pfVar6 = (float *)(unsigned)(uint)ar4[3];
  fVar24 = (float)ar4[4];
  fVar23 = (float)ar4[5];
  uVar14 = ar4[6];
  uVar15 = ar4[7];
  fVar27 = (float)ar4[8];
  fVar28 = (float)ar4[9];
  fVar25 = (float)ar4[10];
  fVar26 = (float)ar4[0xb];
  (*(undefined4 *)(unsigned)(unsigned)0xff000038) = (uVar11 & 0x1c000000) >> 0x18;
  puVar10 = (uint *)(unsigned)(uVar11 & 0x3ffffff | 0xe0000000);
  iVar12 = uVar11 + 0x20;
  (*(undefined4 *)(unsigned)(unsigned)0xff00003c) = (*(undefined4 *)(unsigned)(unsigned)0xff000038);
  for (iVar13 = *ar4; iVar13 != 0; iVar13 = iVar13 + -1) {
    fVar19 = *pfVar6;
    fVar18 = pfVar6[1];
    fVar22 = pfVar6[2];
    uVar21 = (ulonglong)(uint)fVar22 << 0x20;
    pfVar6 = pfVar6 + 3;
    fVar29 = F32HI(in_xd0);
    fVar32 = F32HI(in_xd6);
    fVar33 = F32HI(in_xd8);
    fVar34 = F32HI(in_xd10);
    fVar35 = F32HI(in_xd12);
    fVar36 = F32HI(in_xd14);
                    
    fVar16 = (float)in_xd0 * fVar18 + (float)in_xd4 * fVar19 + (float)in_xd8 * 0.0 +
             (float)in_xd12 * fVar22;
    fVar31 = F32HI(in_xd4);
    fVar17 = fVar29 * fVar18 + fVar31 * fVar19 + fVar33 * 0.0 + fVar35 * fVar22;
    fVar30 = F32HI(in_xd2);
    fVar20 = (float)in_xd2 * fVar18 + (float)in_xd6 * fVar19 + (float)in_xd10 * 0.0 +
             (float)in_xd14 * fVar22;
    fVar20 = fVar30 * fVar18 + fVar32 * fVar19 + fVar34 * 0.0 + fVar36 * fVar22;
    uVar21 = uVar21 & 0xffffffff00000000;
                    
    fVar20 = (float)(uVar21 >> 0x20);
    fVar20 = fVar16 * fVar16 + fVar17 * fVar17 + 0.0 + fVar20 * fVar20;
    fVar20 = 1.0 / SQRT((float)uVar21);
    CacheBlockInvalidate(iVar12);
    puVar10[0xf] = 0xffffffff;
    puVar10[0xe] = (uint)((float)(uVar21 >> 0x20) * fVar20);
    puVar10[0xd] = (uint)(fVar16 * fVar20);
    puVar10[0xc] = (uint)(fVar17 * fVar20);
    fVar20 = *pfVar7;
    pfVar8 = pfVar7 + 1;
    pfVar9 = pfVar7 + 2;
    pfVar7 = pfVar7 + 3;
    fVar20 = fVar19 * fVar5 + fVar20;
    fVar18 = fVar18 * fVar5 + *pfVar8;
    fVar19 = fVar22 * fVar5 + *pfVar9;
                    
    fVar16 = (float)in_xd0 * fVar18 + (float)in_xd4 * fVar20 + (float)in_xd8 * 1.0 +
             (float)in_xd12 * fVar19;
    fVar17 = fVar29 * fVar18 + fVar31 * fVar20 + fVar33 * 1.0 + fVar35 * fVar19;
    fVar18 = fVar30 * fVar18 + fVar32 * fVar20 + fVar34 * 1.0 + fVar36 * fVar19;
    fVar20 = 1.0 / fVar18;
    puVar10[6] = (uint)fVar18;
    puVar10[5] = (uint)fVar16;
    puVar10[4] = (uint)fVar17;
    CacheBlockInvalidate(iVar12 + -0x20);
    iVar12 = iVar12 + 0x40;
    uVar11 = 0;
    fVar16 = fVar16 * fVar23 * fVar20 + fVar2;
    fVar17 = fVar17 * fVar24 * fVar20 + fVar1;
    if (fVar3 <= fVar18) {
      uVar11 = (((uint)(fVar26 < fVar16) << 1 | (uint)(fVar16 < fVar25)) << 1 |
               (uint)(fVar28 < fVar17)) << 1 | (uint)(fVar17 < fVar27);
    }
    puVar10[3] = (uint)fVar20;
    puVar10[2] = (uint)fVar16;
    uVar11 = (uVar11 << 1 | (uint)(fVar4 < fVar18)) << 1 | (uint)(fVar18 < fVar3);
    puVar10[1] = (uint)fVar17;
    uVar14 = uVar14 & uVar11;
    *puVar10 = uVar11;
    uVar15 = uVar15 | uVar11;
    puVar10 = puVar10 + 0x10;
  }
  ar4[6] = uVar14;
  ar4[7] = uVar15;
  return 0x3ffffff;
}

__asm__(".globl _FUN_8c23cd0c\n.set _FUN_8c23cd0c, _FUN_8c23cd0c_def\n");
