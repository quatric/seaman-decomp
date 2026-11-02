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
undefined4 FUN_8c23541c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23541c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(unsigned)(ar5 + 4) - *(float *)(unsigned)(ar4 + 4);
  fVar1 = *(float *)(unsigned)(ar5 + 8) - *(float *)(unsigned)(ar4 + 8);
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)((float *)(unsigned)((int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + 0x18));
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)((float)*(undefined4 *)(unsigned)(ar4 + 0x18));
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
  fVar3 = 1.0 / SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  fVar1 = fVar1 * fVar3 * 0.525;
  fVar2 = -(fVar2 * fVar3 * 0.525);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)((float)*(undefined4 *)(unsigned)(ar4 + 0x14));
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)((float)*(undefined4 *)(unsigned)(ar4 + 0x10));
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa3e0));
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)(*(float *)(unsigned)(ar4 + 8) + fVar2);
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)(*(float *)(unsigned)(ar4 + 4) + fVar1);
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)(-3.689349e+19);
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + 0xe);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)(*(float *)(unsigned)(ar4 + 0x18));
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)(*(float *)(unsigned)(ar4 + 0x14));
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)(*(float *)(unsigned)(ar4 + 0x10));
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa3e0));
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)(*(float *)(unsigned)(ar4 + 8) - fVar2);
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)(*(float *)(unsigned)(ar4 + 4) - fVar1);
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)(-3.689349e+19);
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + 0xe);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)(*(float *)(unsigned)(ar5 + 0x18));
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)(*(float *)(unsigned)(ar5 + 0x14));
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)(*(float *)(unsigned)(ar5 + 0x10));
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa3e0));
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)(*(float *)(unsigned)(ar5 + 8) + fVar2);
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)(*(float *)(unsigned)(ar5 + 4) + fVar1);
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)(-3.689349e+19);
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + 0xe);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)(*(float *)(unsigned)(ar5 + 0x18));
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)(*(float *)(unsigned)(ar5 + 0x14));
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)(*(float *)(unsigned)(ar5 + 0x10));
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa3e0));
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)(*(float *)(unsigned)(ar5 + 8) - fVar2);
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)(*(float *)(unsigned)(ar5 + 4) - fVar1);
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)(-1.5845633e+29);
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + 8);
  return 4;
}

__asm__(".globl _FUN_8c23541c\n.set _FUN_8c23541c, _FUN_8c23541c_def\n");
