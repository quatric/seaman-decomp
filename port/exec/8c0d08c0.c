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
undefined * FUN_8c0d08c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d08c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  float fVar2;
  
  fVar2 = 5e-05;
  puVar1 = (undefined *)(unsigned)0x0;
  if (*(int *)(unsigned)(ar4 + 0x18) != 0) {
    if (*(int *)(unsigned)(ar4 + 0x14) == 1) {
      fVar2 = 0.05;
    }
    *(float *)(unsigned)(ar4 + 0xc) = *(float *)(unsigned)(ar4 + 0xc) + fVar2;
    puVar1 = ((undefined1 *)(unsigned)0x8c0d090c);
    if (100.0 < *(float *)(unsigned)(ar4 + 0xc)) {
      puVar1 = ((undefined1 *)(unsigned)0x8c0d090c);
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0x42c80000;
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0d08c0\n.set _FUN_8c0d08c0, _FUN_8c0d08c0_def\n");
