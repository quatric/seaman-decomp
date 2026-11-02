#include "../decls.h"
undefined4 FUN_8c257e10_def(float *ar4,int ar5,uint ar6,undefined4 ar7)

{
  undefined4 *in_r2;
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
  undefined8 in_dr4;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar11 = -(float)((ulonglong)in_dr4 >> 0x20);
  fVar12 = 1.0;
  if (1.0 <= fVar11) {
    fVar12 = 1.0 / fVar11;
  }
  psVar1 = (short *)(ar5 * 0x14 + (int)ar4[7]);
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
