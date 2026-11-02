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
undefined4
s_E1205_Illigal_parameter_MWRN_2696ac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E1205_Illigal_parameter_MWRN_2696ac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if (ar4 == 0) {
    uVar1 = ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c2732a0)); unsigned long t1_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xc))
                        ); *(unsigned *)((((unsigned long)(fr0_ - 24)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 24)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 24)) - 8); debug_printf(0,ar5,ar6,ar7); });
    return uVar1;
  }
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c26a100((fr0_ + (int)0xfffffff4),ar5,ar6,ar7));
  if (*(char *)(unsigned)(ar4 + 7) == '\x01') {
    if ((*(int *)(unsigned)(ar4 + 0x88) != 0) && (*(int *)(unsigned)(ar4 + 0x88) != 1)) {
      ar5 = 1;
      (vsp = ((unsigned long)(fr0_ - 24)), s_E1205_Illigal_parameter_MWRN_2691ba(ar4,1,ar6,ar7));
    }
    *(undefined1 *)(unsigned)(ar4 + 7) = 0;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c26a118((fr0_ + (int)0xfffffff4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_2696ac\n.set _s_E1205_Illigal_parameter_MWRN_2696ac, _s_E1205_Illigal_parameter_MWRN_2696ac_def\n");
