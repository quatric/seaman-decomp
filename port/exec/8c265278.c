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
undefined4 aica_reg_265278_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "aica_reg_265278";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint *ar4_00;
  undefined4 ar5_00;
  int iVar1;
  
  ({ unsigned long t0_ = (unsigned long)(1); unsigned long t1_ = (unsigned long)(1); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c1f92c0(0xa0702c00,0x8c4ba650,4,1); });
  ar5_00 = 0xa0702c00;
  ar4_00 = 0x8c4ba650;
  *(undefined4 *)(unsigned)0x8c4ba650 = *(undefined4 *)(unsigned)0x8c4ba650 | 1;
  ({ unsigned long t0_ = (unsigned long)(1); unsigned long t1_ = (unsigned long)(1); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c1f9610(ar4_00,ar5_00,4,1); });
  iVar1 = (int)0x100;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}

__asm__(".globl _aica_reg_265278\n.set _aica_reg_265278, _aica_reg_265278_def\n");
