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
undefined4 aica_reg_258210_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "aica_reg_258210";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 788; for (int i_ = 0; i_ < 788; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(uint *)(fr0_ - 0xc)) = ar4;
  ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(0); *(unsigned *)((((unsigned long)(fr0_ - 788)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 788)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 788)) - 8); FUN_8c1f92c0(0xa0702c00,&(*(uint *)(fr0_ - 0x10)),4,1); });
  (*(uint *)(fr0_ - 0x10)) = (*(uint *)(fr0_ - 0x10)) & (int)(int)0xfffffcff | (*(uint *)(fr0_ - 0xc));
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(0); *(unsigned *)((((unsigned long)(fr0_ - 788)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 788)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 788)) - 8); FUN_8c1f9610(&(*(uint *)(fr0_ - 0x10)),0xa0702c00,4,1); });
  return uVar1;
}

__asm__(".globl _aica_reg_258210\n.set _aica_reg_258210, _aica_reg_258210_def\n");
