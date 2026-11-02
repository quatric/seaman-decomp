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
undefined4 s_E9040801_ptid_is_range_outsi_261ab2_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E9040801_ptid_is_range_outsi_261ab2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 in_PR = 0;
  char *s0;
  
  if ((ar4 < 0) || (0xff < ar4)) {
    s0 = ((undefined1 *)(unsigned)0x8c27207c);
  }
  else {
    if (ar5 != 0) {
      return 0;
    }
    s0 = ((undefined1 *)(unsigned)0x8c2720b0);
  }
  ({ unsigned long t0_ = (unsigned long)(s0); unsigned long t1_ = (unsigned long)(in_PR); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c25ece6(ar4,ar5,ar6,ar7); });
  return 0xfffffffd;
}

__asm__(".globl _s_E9040801_ptid_is_range_outsi_261ab2\n.set _s_E9040801_ptid_is_range_outsi_261ab2, _s_E9040801_ptid_is_range_outsi_261ab2_def\n");
