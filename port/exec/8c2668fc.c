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
int aica_ram_2668fc_def(int ar4,uint ar5,uint ar6,int ar7)

{
  ring[rp++ & 255] = "aica_ram_2668fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint ar6_00;
  int iVar1;
  int ar5_00;
  
  ar5_00 = 0;
  if (((ar5 & 3) == 0) && ((ar6 & 3) == 0)) {
    iVar1 = ar6 + 3;
    if (iVar1 < 0) {
      iVar1 = ar6 + 6;
    }
    ar7 = iVar1 >> 2;
    ar6_00 = 4;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4bd404) = ({ unsigned long t0_ = (unsigned long)(1); unsigned long t1_ = (unsigned long)(1); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c1f92c0(ar4 + -0x5f800000,ar5,4,ar7); });
  }
  else {
    ar5_00 = 0x7fffffff;
    ar6_00 = ar6;
  }
  if (ar5_00 != 0) {
    ({ unsigned long ri0_ = (unsigned long)(ar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2688a0(((void *)0x8c2668fc),ar5_00,ar6_00,ar7); });
  }
  return ar5_00;
}

__asm__(".globl _aica_ram_2668fc\n.set _aica_ram_2668fc, _aica_ram_2668fc_def\n");
