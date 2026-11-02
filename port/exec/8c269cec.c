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
undefined4 s_E1205_Illigal_parameter_MWRN_269cf2_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E1205_Illigal_parameter_MWRN_269cf2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  char *s0;
  
  if (ar4 == 0) {
    s0 = ((undefined1 *)(unsigned)0x8c2732a0);
  }
  else {
    if ((-1 < ar5) && (ar5 < 0x11)) {
      if (ar6 < -0x2d) {
        ar6 = -0x2d;
      }
      else if (0 < ar6) {
        ar6 = 0;
      }
      (vsp = ((unsigned long)(fr0_ - 20)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38)) + 0x44))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38)),0,ar5,ar6));
      *(int *)(unsigned)(ar4 + 0x6c) = ar5;
      *(int *)(unsigned)(ar4 + 0x70) = ar6;
      return 0x70;
    }
    s0 = ((undefined1 *)(unsigned)0x8c2733a4);
  }
  uVar1 = ({ unsigned long t0_ = (unsigned long)(s0); unsigned long t1_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14))); *(unsigned *)((((unsigned long)(fr0_ - 20)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 20)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 20)) - 8); debug_printf(ar4,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269cf2\n.set _s_E1205_Illigal_parameter_MWRN_269cf2, _s_E1205_Illigal_parameter_MWRN_269cf2_def\n");
