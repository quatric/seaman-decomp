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
int aica_ram_266970_def(uint ar4,int ar5,uint ar6,code *ar7)

{
  ring[rp++ & 255] = "aica_ram_266970";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int ar5_00;
  uint uVar1;
  code *ar7_00;
  int ar5_01;
  
  ar5_01 = 0;
  if (((ar4 & 3) == 0) && ((ar6 & 3) == 0)) {
    uVar1 = ar6;
    if ((int)ar6 < 0) {
      uVar1 = ar6 + 3;
    }
    ar7_00 = (code *)((int)uVar1 >> 2);
    ar5_00 = ar5 + -0x5f800000;
    uVar1 = 4;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4bd404) = ({ unsigned long t0_ = (unsigned long)(1); unsigned long t1_ = (unsigned long)(1); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c1f9610(ar4,ar5_00,4,ar7_00); });
    if ((ar7 != (code *)0x0) && (ar7 != (code *)0xffffffff)) {
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)ar7))(s0,ar5_00,uVar1,ar7_00));
    }
  }
  else {
    ar5_01 = 0x7fffffff;
    uVar1 = ar6;
    ar7_00 = ar7;
  }
  if (ar5_01 != 0) {
    ({ unsigned long ri0_ = (unsigned long)(ar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c2688a0(((void *)0x8c266970),ar5_01,uVar1,ar7_00); });
  }
  return ar5_01;
}

__asm__(".globl _aica_ram_266970\n.set _aica_ram_266970, _aica_ram_266970_def\n");
