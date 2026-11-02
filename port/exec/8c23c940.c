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
undefined4 FUN_8c23c940_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23c940";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 in_xd0 = 0;
  float fVar19;
  undefined8 in_xd2 = 0;
  float fVar20;
  undefined8 in_xd4 = 0;
  float fVar21;
  undefined8 in_xd6 = 0;
  float fVar22;
  undefined8 in_xd8 = 0;
  float fVar23;
  float in_xf11 = 0;
  undefined8 in_xd12 = 0;
  float fVar24;
  undefined8 in_xd14 = 0;
  float fVar25;
  
  fVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa550);
  fVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8);
  fVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4);
  uVar9 = ar4[1];
  pfVar5 = (float *)(unsigned)(uint)ar4[2];
  pfVar4 = (float *)(unsigned)(uint)ar4[3];
  fVar18 = (float)ar4[4];
  fVar17 = (float)ar4[5];
  (*(undefined4 *)(unsigned)(unsigned)0xff000038) = (uVar9 & 0x1c000000) >> 0x18;
  puVar8 = (undefined4 *)(unsigned)(uVar9 & 0x3ffffff | 0xe0000000);
  iVar10 = uVar9 + 0x20;
  (*(undefined4 *)(unsigned)(unsigned)0xff00003c) = (*(undefined4 *)(unsigned)(unsigned)0xff000038);
  for (iVar11 = *ar4; iVar11 != 0; iVar11 = iVar11 + -1) {
    fVar15 = *pfVar4;
    fVar14 = pfVar4[1];
    fVar16 = pfVar4[2];
    pfVar4 = pfVar4 + 3;
    fVar19 = F32HI(in_xd0);
    fVar22 = F32HI(in_xd6);
    fVar23 = F32HI(in_xd8);
    fVar24 = F32HI(in_xd12);
    fVar25 = F32HI(in_xd14);
                    
    fVar21 = F32HI(in_xd4);
    fVar20 = F32HI(in_xd2);
    CacheBlockInvalidate(iVar10);
    puVar8[0xf] = 0xffffffff;
    puVar8[0xe] = fVar20 * fVar14 + fVar22 * fVar15 + in_xf11 * 0.0 + fVar25 * fVar16;
    puVar8[0xd] = (float)in_xd0 * fVar14 + (float)in_xd4 * fVar15 + (float)in_xd8 * 0.0 +
                  (float)in_xd12 * fVar16;
    puVar8[0xc] = fVar19 * fVar14 + fVar21 * fVar15 + fVar23 * 0.0 + fVar24 * fVar16;
    pfVar6 = pfVar5 + 1;
    pfVar7 = pfVar5 + 2;
    fVar13 = fVar15 * fVar3 + *pfVar5;
    pfVar5 = pfVar5 + 3;
    fVar12 = fVar14 * fVar3 + *pfVar6;
    fVar16 = fVar16 * fVar3 + *pfVar7;
                    
    fVar14 = (float)in_xd0 * fVar12 + (float)in_xd4 * fVar13 + (float)in_xd8 * 1.0 +
             (float)in_xd12 * fVar16;
    fVar15 = fVar19 * fVar12 + fVar21 * fVar13 + fVar23 * 1.0 + fVar24 * fVar16;
    fVar12 = fVar20 * fVar12 + fVar22 * fVar13 + in_xf11 * 1.0 + fVar25 * fVar16;
    fVar13 = 1.0 / fVar12;
    puVar8[6] = fVar12;
    puVar8[5] = fVar14;
    puVar8[4] = fVar15;
    CacheBlockInvalidate(iVar10 + -0x20);
    iVar10 = iVar10 + 0x40;
    puVar8[3] = fVar13;
    puVar8[2] = fVar14 * fVar17 * fVar13 + fVar2;
    puVar8[1] = fVar15 * fVar18 * fVar13 + fVar1;
    *puVar8 = 0;
    puVar8 = puVar8 + 0x10;
  }
  return 0x3ffffff;
}

__asm__(".globl _FUN_8c23c940\n.set _FUN_8c23c940, _FUN_8c23c940_def\n");
