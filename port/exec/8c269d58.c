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
s_E1205_Illigal_parameter_MWRN_269d5a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E1205_Illigal_parameter_MWRN_269d5a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(undefined4 *)(fr0_ - 0x10)) = ar5;
  (*(undefined4 *)(fr0_ - 0xc)) = ar6;
  if (ar4 == 0) {
    uVar1 = ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c2732a0)); unsigned long t1_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x1c))
                        ); *(unsigned *)((((unsigned long)(fr0_ - 56)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 56)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 56)) - 8); debug_printf(0,ar5,ar6,ar7); });
    return uVar1;
  }
  (*(unsigned *)(fr0_ - 0x14) = (unsigned)(unsigned long)(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38))));
  (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 0x44))))(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)),1,ar5,ar6));
  (*(unsigned *)(fr0_ - 0x14) = (unsigned)(unsigned long)(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38))));
  (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)) + 0x48))))(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x14)),1,(fr0_ + (int)0xffffffe4),&(*(undefined4 *)(fr0_ - 0x18))));
  *(undefined4 *)(unsigned)(ar4 + 0x74) = (*(undefined4 *)(fr0_ - 0x1c));
  *(undefined4 *)(unsigned)(ar4 + 0x78) = (*(undefined4 *)(fr0_ - 0x18));
  return 0x78;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269d5a\n.set _s_E1205_Illigal_parameter_MWRN_269d5a, _s_E1205_Illigal_parameter_MWRN_269d5a_def\n");
