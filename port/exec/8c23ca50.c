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
undefined4 FUN_8c23ca50_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23ca50";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  ulonglong uVar16;
  float fVar18;
  float fVar19;
  undefined8 in_xd0 = 0;
  float fVar20;
  undefined8 in_xd2 = 0;
  float fVar21;
  undefined8 in_xd4 = 0;
  float fVar22;
  undefined8 in_xd6 = 0;
  float fVar23;
  undefined8 in_xd8 = 0;
  float fVar24;
  float in_xf10 = 0;
  float in_xf11 = 0;
  undefined8 in_xd12 = 0;
  float fVar25;
  undefined8 in_xd14 = 0;
  float fVar26;
  
  fVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8);
  fVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4);
  uVar7 = ar4[1];
  pfVar5 = (float *)(unsigned)(uint)ar4[2];
  pfVar4 = (float *)(unsigned)(uint)ar4[3];
  fVar19 = (float)ar4[4];
  fVar18 = (float)ar4[5];
  (*(undefined4 *)(unsigned)(unsigned)0xff000038) = (uVar7 & 0x1c000000) >> 0x18;
  puVar6 = (undefined4 *)(unsigned)(uVar7 & 0x3ffffff | 0xe0000000);
  iVar8 = uVar7 + 0x20;
  (*(undefined4 *)(unsigned)(unsigned)0xff00003c) = (*(undefined4 *)(unsigned)(unsigned)0xff000038);
  for (iVar9 = *ar4; iVar9 != 0; iVar9 = iVar9 + -1) {
    fVar13 = *pfVar4;
    fVar12 = pfVar4[1];
    fVar17 = pfVar4[2];
    uVar16 = (ulonglong)(uint)fVar17 << 0x20;
    pfVar4 = pfVar4 + 3;
    fVar21 = F32HI(in_xd2);
    fVar22 = F32HI(in_xd4);
    fVar23 = F32HI(in_xd6);
    fVar24 = F32HI(in_xd8);
    fVar25 = F32HI(in_xd12);
    fVar26 = F32HI(in_xd14);
                    
    fVar10 = (float)in_xd0 * fVar12 + (float)in_xd4 * fVar13 + (float)in_xd8 * 0.0 +
             (float)in_xd12 * fVar17;
    fVar20 = F32HI(in_xd0);
    fVar1 = fVar20 * fVar12 + fVar22 * fVar13 + fVar24 * 0.0 + fVar25 * fVar17;
    fVar14 = (float)in_xd2 * fVar12 + (float)in_xd6 * fVar13 + in_xf10 * 0.0 +
             (float)in_xd14 * fVar17;
    fVar12 = fVar21 * fVar12 + fVar23 * fVar13 + in_xf11 * 0.0 + fVar26 * fVar17;
    fVar17 = *pfVar5;
    fVar14 = pfVar5[1];
    fVar11 = pfVar5[2];
    pfVar5 = pfVar5 + 3;
    CacheBlockInvalidate(iVar8);
    uVar16 = uVar16 & 0xffffffff00000000;
                    
    fVar12 = (float)(uVar16 >> 0x20);
    fVar12 = fVar10 * fVar10 + fVar1 * fVar1 + 0.0 + fVar12 * fVar12;
    fVar15 = 1.0 / SQRT((float)uVar16);
    puVar6[0xf] = 0xffffffff;
                    
    fVar12 = (float)in_xd0 * fVar14 + (float)in_xd4 * fVar17 + (float)in_xd8 * 1.0 +
             (float)in_xd12 * fVar11;
    fVar13 = fVar20 * fVar14 + fVar22 * fVar17 + fVar24 * 1.0 + fVar25 * fVar11;
    fVar14 = fVar21 * fVar14 + fVar23 * fVar17 + in_xf11 * 1.0 + fVar26 * fVar11;
    puVar6[0xe] = (float)(uVar16 >> 0x20) * fVar15;
    puVar6[0xd] = fVar10 * fVar15;
    puVar6[0xc] = fVar1 * fVar15;
    fVar10 = 1.0 / fVar14;
    puVar6[6] = fVar14;
    puVar6[5] = fVar12;
    puVar6[4] = fVar13;
    CacheBlockInvalidate(iVar8 + -0x20);
    iVar8 = iVar8 + 0x40;
    puVar6[3] = fVar10;
    puVar6[2] = fVar12 * fVar18 * fVar10 + fVar3;
    puVar6[1] = fVar13 * fVar19 * fVar10 + fVar2;
    *puVar6 = 0;
    puVar6 = puVar6 + 0x10;
  }
  return 0x3ffffff;
}

__asm__(".globl _FUN_8c23ca50\n.set _FUN_8c23ca50, _FUN_8c23ca50_def\n");
