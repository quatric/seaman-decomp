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
undefined4 FUN_8c26b254_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c26b254";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int ar6_00;
  int unaff_r14 = 0;
  undefined4 *ar4_00;
  undefined4 in_PR = 0;
  
  ar6_00 = 0;
  do {
    if (*(int *)(unsigned)(ar6_00 * 0x24 + -0x73b40fc4) == 0) break;
    ar6_00 = ar6_00 + 1;
  } while (ar6_00 < unaff_r14);
  if (ar6_00 == 0x20) {
    return 0;
  }
  iVar1 = ar6_00 * 0x24;
  ar4_00 = (undefined4 *)(unsigned)(iVar1 + -0x73b40fc8);
  *(undefined4 *)(unsigned)(iVar1 + -0x73b40fc4) = 1;
  *ar4_00 = ((undefined1 *)(unsigned)0x8c278660);
  *(undefined4 *)(unsigned)(iVar1 + -0x73b40fb4) = ar4;
  *(undefined4 *)(unsigned)(iVar1 + -0x73b40fb0) = ar5;
  *(unsigned *)(unsigned)(iVar1 + -0x73b40fc0) = ((undefined1 *)(unsigned)0x8c273978);
  *(unsigned *)(unsigned)(iVar1 + -0x73b40fac) = ((undefined1 *)(unsigned)0x8c26b20e);
  *(unsigned *)(unsigned)(iVar1 + -0x73b40fa8) = ar4_00;
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c26b2da(ar4_00,ar5,ar6_00,0x8c4bf038); });
  return ar4_00;
}

__asm__(".globl _FUN_8c26b254\n.set _FUN_8c26b254, _FUN_8c26b254_def\n");
