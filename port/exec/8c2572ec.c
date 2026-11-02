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
undefined4 FUN_8c2572ec_def(float *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2572ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float *ar6_00;
  float *ar7_00;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = ((float)(-(int)ar4[0x16] & 0xffff) * 6.2831855) / 65536.0;
  fVar3 = (float)sin(fVar2);
  fVar2 = (float)cos(fVar2);
  fVar3 = (float)fVar3;
  fVar2 = (float)fVar2;
  fVar4 = ar4[0x13] * ar4[0x13] + ar4[0x15] * ar4[0x15];
  fVar5 = 1.0 / SQRT(ar4[0x14] * ar4[0x14] + fVar4);
  fVar7 = ar4[0x14] * fVar5;
  fVar5 = SQRT(fVar4) * fVar5;
  if (fVar4 <= 1e-06) {
    fVar4 = 0.0;
    fVar6 = 1.0;
  }
  else {
    fVar6 = ar4[0x15] * (1.0 / SQRT(fVar4));
    fVar4 = -(ar4[0x13] * (1.0 / SQRT(fVar4)));
  }
  *ar4 = fVar2 * fVar6 - fVar3 * fVar7 * fVar4;
  ar4[1] = fVar4 * fVar2 * fVar7 + fVar3 * fVar6;
  ar4[2] = -(fVar5 * fVar4);
  ar4[3] = 0.0;
  ar7_00 = ar4 + 6;
  ar6_00 = ar4 + 9;
  ar4[4] = -(fVar3 * fVar5);
  ar4[5] = fVar2 * fVar5;
  *ar7_00 = fVar7;
  ar4[7] = 0.0;
  ar4[8] = fVar6 * fVar3 * fVar7 + fVar2 * fVar4;
  *ar6_00 = fVar3 * fVar4 - fVar2 * fVar7 * fVar6;
  ar4[10] = fVar5 * fVar6;
  ar4[0xb] = 0.0;
  ar4[0xc] = (-(ar4[0x10] * *ar4) - ar4[0x11] * ar4[4]) - ar4[0x12] * ar4[8];
  ar4[0xd] = (-(ar4[0x10] * ar4[1]) - ar4[0x11] * ar4[5]) - ar4[0x12] * *ar6_00;
  ar4[0xe] = (-(ar4[0x10] * ar4[2]) - ar4[0x11] * *ar7_00) - ar4[0x12] * ar4[10];
  ar4[0xf] = 1.0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4c0cc0) = ar4;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c213e2c(ar4,ar4,ar6_00,ar7_00));
  return uVar1;
}

__asm__(".globl _FUN_8c2572ec\n.set _FUN_8c2572ec, _FUN_8c2572ec_def\n");
