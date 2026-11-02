#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("aica_reg_258210");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 788; for (int i_ = 0; i_ < 788; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(le<uint>* )(fr0_ - 0xc)) = ar4;
  ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(0); *(le<unsigned>* )((((unsigned long)(fr0_ - 788)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 788)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 788)) - 8); FUN_8c1f92c0(0xa0702c00,&(*(le<uint>* )(fr0_ - 0x10)),4,1); });
  (*(le<uint>* )(fr0_ - 0x10)) = (*(le<uint>* )(fr0_ - 0x10)) & (int)(int)0xfffffcff | (*(le<uint>* )(fr0_ - 0xc));
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(0); *(le<unsigned>* )((((unsigned long)(fr0_ - 788)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 788)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 788)) - 8); FUN_8c1f9610(&(*(le<uint>* )(fr0_ - 0x10)),0xa0702c00,4,1); });
  return uVar1;
}

__asm__(".globl aica_reg_258210\n.set aica_reg_258210, aica_reg_258210_def\n");

}
