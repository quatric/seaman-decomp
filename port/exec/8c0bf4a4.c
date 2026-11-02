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
undefined * FUN_8c0bf4a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bf4a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  float fVar2;
  
  puVar1 = ((undefined *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4));
  if (puVar1 == (undefined *)(unsigned)0x1) {
    fVar2 = *(float *)(unsigned)(ar4 + 0x2c) - 15.0;
    *(float *)(unsigned)(ar4 + 0x2c) = fVar2;
    puVar1 = (undefined *)(unsigned)0x8;
    if (fVar2 <= 0.0) {
      *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
      puVar1 = (undefined *)(unsigned)0x0;
      *(undefined4 *)(unsigned)(ar4 + 4) = 0;
    }
  }
  else if (puVar1 == (undefined *)(unsigned)0x2) {
    fVar2 = *(float *)(unsigned)(ar4 + 0x2c) + 15.0;
    *(float *)(unsigned)(ar4 + 0x2c) = fVar2;
    puVar1 = ((undefined1 *)(unsigned)0x8c0bf540);
    if (660.0 <= fVar2) {
      *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0x44250000;
      *(undefined4 *)(unsigned)(ar4 + 4) = 0;
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0bf548(ar4,ar5,ar6,ar7));
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0bf4a4\n.set _FUN_8c0bf4a4, _FUN_8c0bf4a4_def\n");
