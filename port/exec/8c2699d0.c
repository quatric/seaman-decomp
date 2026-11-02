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
undefined4 s_E1205_Illigal_parameter_MWRN_2699d4_def(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E1205_Illigal_parameter_MWRN_2699d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int *a5;
  undefined4 *puVar2;
  
  if (ar4 == 0) {
    uVar1 = ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c2732a0)); unsigned long t1_ = (unsigned long)(ar6); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); debug_printf(0,ar5,ar6,ar7); });
  }
  else {
    a5 = ar5;
    puVar2 = ar6;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c268ea8(ar4,ar5,ar6,ar7));
    *ar5 = *(int *)(unsigned)(ar4 + 0x4c) - *(int *)(unsigned)(ar4 + 0x34);
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_E1205_Illigal_parameter_MWRN_269e36(ar4,a5,ar6,ar7));
    *puVar2 = uVar1;
  }
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_2699d4\n.set _s_E1205_Illigal_parameter_MWRN_2699d4, _s_E1205_Illigal_parameter_MWRN_2699d4_def\n");
