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
undefined4 FUN_8c257e10_def(float *ar4,int ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c257e10";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 *in_r2 = 0;
  short *psVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 in_dr4 = 0;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar11 = -F32HI(in_dr4);
  fVar12 = 1.0;
  if (1.0 <= fVar11) {
    fVar12 = 1.0 / fVar11;
  }
  psVar1 = (short *)(unsigned)(ar5 * 0x14 + (int)ar4[7]);
  fVar11 = (float)(int)psVar1[4] * 0.00390625;
  fVar8 = (float)(int)psVar1[6] * 0.00390625;
  if ((ar6 & 4) != 0) {
    fVar11 = (float)(int)psVar1[6] * 0.00390625;
    fVar8 = (float)(int)psVar1[4] * 0.00390625;
  }
  fVar2 = (float)(int)psVar1[5] * 0.00390625;
  fVar5 = (float)(int)psVar1[7] * 0.00390625;
  if ((ar6 & 8) != 0) {
    fVar2 = (float)(int)psVar1[7] * 0.00390625;
    fVar5 = (float)(int)psVar1[5] * 0.00390625;
  }
  fVar4 = (float)-(int)psVar1[2] * ar4[3];
  fVar9 = (float)((int)*psVar1 + -(int)psVar1[2]) * ar4[3];
  fVar3 = (float)-(int)psVar1[3] * ar4[4];
  fVar6 = (float)((int)psVar1[1] + -(int)psVar1[3]) * ar4[4];
  if ((ar6 & 1) == 0) {
    fVar4 = fVar4 + *ar4;
    fVar3 = fVar3 + ar4[1];
    fVar9 = fVar9 + *ar4;
    fVar6 = fVar6 + ar4[1];
    in_r2[6] = 0x3f800000;
    in_r2[5] = fVar2;
    in_r2[4] = fVar11;
    in_r2[3] = fVar12;
    in_r2[2] = fVar3;
    in_r2[1] = fVar4;
    *in_r2 = 0xe0000000;
    in_r2[0xe] = 0x3f800000;
    in_r2[0xd] = fVar5;
    in_r2[0xc] = fVar11;
    in_r2[0xb] = fVar12;
    in_r2[10] = fVar6;
    in_r2[9] = fVar4;
    in_r2[8] = 0xe0000000;
    in_r2[0x16] = 0x3f800000;
    in_r2[0x15] = fVar2;
    in_r2[0x14] = fVar8;
    in_r2[0x13] = fVar12;
    in_r2[0x12] = fVar3;
    in_r2[0x11] = fVar9;
    in_r2[0x10] = 0xe0000000;
    in_r2[0x1e] = 0x3f800000;
    in_r2[0x1d] = fVar5;
    in_r2[0x1c] = fVar8;
    in_r2[0x1b] = fVar12;
    in_r2[0x1a] = fVar6;
    in_r2[0x19] = fVar9;
    in_r2[0x18] = 0xf0000000;
  }
  else {
    fVar13 = ((float)((uint)ar4[5] & 0xffff) * 6.2831855) / 65536.0;
    fVar14 = (float)sin(fVar13);
    fVar13 = (float)cos(fVar13);
    fVar14 = (float)fVar14;
    fVar13 = (float)fVar13;
    fVar10 = *ar4;
    fVar7 = ar4[1];
    in_r2[6] = 0x3f800000;
    in_r2[5] = fVar2;
    in_r2[4] = fVar11;
    in_r2[3] = fVar12;
    in_r2[2] = fVar4 * fVar14 + fVar3 * fVar13 + fVar7;
    in_r2[1] = (fVar4 * fVar13 - fVar3 * fVar14) + fVar10;
    *in_r2 = 0xe0000000;
    in_r2[0xe] = 0x3f800000;
    in_r2[0xd] = fVar5;
    in_r2[0xc] = fVar11;
    in_r2[0xb] = fVar12;
    in_r2[10] = fVar4 * fVar14 + fVar6 * fVar13 + fVar7;
    in_r2[9] = (fVar4 * fVar13 - fVar6 * fVar14) + fVar10;
    in_r2[8] = 0xe0000000;
    in_r2[0x16] = 0x3f800000;
    in_r2[0x15] = fVar2;
    in_r2[0x14] = fVar8;
    in_r2[0x13] = fVar12;
    in_r2[0x12] = fVar9 * fVar14 + fVar3 * fVar13 + fVar7;
    in_r2[0x11] = (fVar9 * fVar13 - fVar3 * fVar14) + fVar10;
    in_r2[0x10] = 0xe0000000;
    in_r2[0x1e] = 0x3f800000;
    in_r2[0x1d] = fVar5;
    in_r2[0x1c] = fVar8;
    in_r2[0x1b] = fVar12;
    in_r2[0x1a] = fVar9 * fVar14 + fVar6 * fVar13 + fVar7;
    in_r2[0x19] = (fVar9 * fVar13 - fVar6 * fVar14) + fVar10;
    in_r2[0x18] = 0xf0000000;
  }
  return 1;
}

__asm__(".globl _FUN_8c257e10\n.set _FUN_8c257e10, _FUN_8c257e10_def\n");
