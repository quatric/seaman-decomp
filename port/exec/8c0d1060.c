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
undefined4 FUN_8c0d1060_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d1060";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int *a4;
  int iVar2;
  
  if (*(int *)(unsigned)(ar4 + 0xeb44) == 1) {
    *(float *)(unsigned)(ar4 + 0xeb40) = *(float *)(unsigned)(ar4 + 0xeb40) + 0.05;
    if (100.0 < *(float *)(unsigned)(ar4 + 0xeb40)) {
      *(undefined4 *)(unsigned)(ar4 + 0xeb40) = 0x42c80000;
    }
  }
  else {
    *(float *)(unsigned)(ar4 + 0xeb40) = *(float *)(unsigned)(ar4 + 0xeb40) - 0.00027777778;
    if (*(float *)(unsigned)(ar4 + 0xeb40) < 0.0) {
      *(undefined4 *)(unsigned)(ar4 + 0xeb40) = 0;
    }
  }
  for (iVar2 = 0; iVar2 < 0x15e; iVar2 = iVar2 + 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_100_0d1058(ar4 + iVar2 * 0xac + 0xc,ar5,ar6,ar7));
    if (iVar1 == 1) {
      a4 = (int *)(unsigned)(ar4 + iVar2 * 0xac + 0xc);
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 8))))(a4,ar5,ar6,ar7));
    }
  }
  *(short *)(unsigned)(ar4 + 0xeb64) = *(short *)(unsigned)(ar4 + 0xeb64) + 1;
  return 0xeb64;
}

__asm__(".globl _FUN_8c0d1060\n.set _FUN_8c0d1060, _FUN_8c0d1060_def\n");
