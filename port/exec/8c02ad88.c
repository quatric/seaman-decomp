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
undefined4 FUN_8c02ad88_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02ad88";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  fVar3 = (float)*(int *)(unsigned)(ar4 + 0x458) / 5400.0;
  *(float *)(unsigned)(ar4 + 0x438) = fVar3 * 0.0;
  *(float *)(unsigned)(ar4 + 0x43c) = fVar3 * -0.84705883;
  *(float *)(unsigned)(ar4 + 0x440) = fVar3 * -0.84705883;
  *(float *)(unsigned)(ar4 + 0x444) = fVar3 * -1.0;
  iVar1 = *(int *)(unsigned)(ar4 + 0x458);
  *(int *)(unsigned)(ar4 + 0x458) = iVar1 + 1;
  uVar2 = 0x1518;
  if (0x1518 < iVar1 + 1) {
    *(undefined4 *)(unsigned)(ar4 + 0x458) = 0;
    uVar2 = 0x74;
    *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0x7fffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c02ad88\n.set _FUN_8c02ad88, _FUN_8c02ad88_def\n");
