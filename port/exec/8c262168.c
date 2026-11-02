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
undefined4 FUN_8c262168_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c262168";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar5_00;
  int ar6_00;
  undefined4 ar7_00;
  
  ar5_00 = 0;
  ar7_00 = 0xffffffff;
  ar6_00 = ar4;
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0xffffffff); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c261a4c(3,0,ar4,0xffffffff); });
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c260ca0(vr4,vr5,vr6,vr7));
    if (*(char *)(unsigned)(ar4 + 1) == '\x02') {
      (vsp = ((unsigned long)(fr0_ - 4)), s_E9040822_adxf_is_NULL_ADXF_S_262408(ar4,ar5_00,ar6_00,ar7_00));
    }
    (vsp = ((unsigned long)(fr0_ - 4)), memset(ar4,0,0x30,vr7));
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c260cc8(vr4,vr5,vr6,vr7));
    uVar1 = ({ unsigned long t0_ = (unsigned long)(0xffffffff); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c261a4c(3,1,ar4,0xffffffff); });
  }
  return uVar1;
}

__asm__(".globl _FUN_8c262168\n.set _FUN_8c262168, _FUN_8c262168_def\n");
