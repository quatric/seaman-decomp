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
undefined4 FUN_8c23c824_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23c824";
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
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar18;
  ulonglong uVar17;
  float fVar19;
  float fVar20;
  undefined8 in_xd0 = 0;
  float fVar21;
  undefined8 in_xd2 = 0;
  float fVar22;
  undefined8 in_xd4 = 0;
  float fVar23;
  undefined8 in_xd6 = 0;
  float fVar24;
  undefined8 in_xd8 = 0;
  float fVar25;
  float in_xf10 = 0;
  float in_xf11 = 0;
  undefined8 in_xd12 = 0;
  float fVar26;
  undefined8 in_xd14 = 0;
  float fVar27;
  
  fVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa550);
  fVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8);
  fVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4);
  uVar11 = ar4[1];
  pfVar7 = (float *)(unsigned)(uint)ar4[2];
  pfVar6 = (float *)(unsigned)(uint)ar4[3];
  fVar20 = (float)ar4[4];
  fVar19 = (float)ar4[5];
  (*(undefined4 *)(unsigned)(unsigned)0xff000038) = (uVar11 & 0x1c000000) >> 0x18;
  puVar10 = (undefined4 *)(unsigned)(uVar11 & 0x3ffffff | 0xe0000000);
  iVar12 = uVar11 + 0x20;
  (*(undefined4 *)(unsigned)(unsigned)0xff00003c) = (*(undefined4 *)(unsigned)(unsigned)0xff000038);
  for (iVar13 = *ar4; iVar13 != 0; iVar13 = iVar13 + -1) {
    fVar15 = *pfVar6;
    fVar14 = pfVar6[1];
    fVar18 = pfVar6[2];
    uVar17 = (ulonglong)(uint)fVar18 << 0x20;
    pfVar6 = pfVar6 + 3;
    fVar21 = F32HI(in_xd0);
    fVar24 = F32HI(in_xd6);
    fVar25 = F32HI(in_xd8);
    fVar26 = F32HI(in_xd12);
    fVar27 = F32HI(in_xd14);
                    
    fVar1 = (float)in_xd0 * fVar14 + (float)in_xd4 * fVar15 + (float)in_xd8 * 0.0 +
            (float)in_xd12 * fVar18;
    fVar23 = F32HI(in_xd4);
    fVar2 = fVar21 * fVar14 + fVar23 * fVar15 + fVar25 * 0.0 + fVar26 * fVar18;
    fVar22 = F32HI(in_xd2);
    fVar16 = (float)in_xd2 * fVar14 + (float)in_xd6 * fVar15 + in_xf10 * 0.0 +
             (float)in_xd14 * fVar18;
    fVar16 = fVar22 * fVar14 + fVar24 * fVar15 + in_xf11 * 0.0 + fVar27 * fVar18;
    uVar17 = uVar17 & 0xffffffff00000000;
                    
    fVar16 = (float)(uVar17 >> 0x20);
    fVar16 = fVar1 * fVar1 + fVar2 * fVar2 + 0.0 + fVar16 * fVar16;
    fVar16 = 1.0 / SQRT((float)uVar17);
    CacheBlockInvalidate(iVar12);
    puVar10[0xf] = 0xffffffff;
    puVar10[0xe] = (float)(uVar17 >> 0x20) * fVar16;
    puVar10[0xd] = fVar1 * fVar16;
    puVar10[0xc] = fVar2 * fVar16;
    fVar16 = *pfVar7;
    pfVar8 = pfVar7 + 1;
    pfVar9 = pfVar7 + 2;
    pfVar7 = pfVar7 + 3;
    fVar16 = fVar15 * fVar5 + fVar16;
    fVar14 = fVar14 * fVar5 + *pfVar8;
    fVar15 = fVar18 * fVar5 + *pfVar9;
                    
    fVar1 = (float)in_xd0 * fVar14 + (float)in_xd4 * fVar16 + (float)in_xd8 * 1.0 +
            (float)in_xd12 * fVar15;
    fVar2 = fVar21 * fVar14 + fVar23 * fVar16 + fVar25 * 1.0 + fVar26 * fVar15;
    fVar14 = fVar22 * fVar14 + fVar24 * fVar16 + in_xf11 * 1.0 + fVar27 * fVar15;
    fVar16 = 1.0 / fVar14;
    puVar10[6] = fVar14;
    puVar10[5] = fVar1;
    puVar10[4] = fVar2;
    CacheBlockInvalidate(iVar12 + -0x20);
    iVar12 = iVar12 + 0x40;
    puVar10[3] = fVar16;
    puVar10[2] = fVar1 * fVar19 * fVar16 + fVar4;
    puVar10[1] = fVar2 * fVar20 * fVar16 + fVar3;
    *puVar10 = 0;
    puVar10 = puVar10 + 0x10;
  }
  return 0x3ffffff;
}

__asm__(".globl _FUN_8c23c824\n.set _FUN_8c23c824, _FUN_8c23c824_def\n");
