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
undefined4 s_E1205_Illigal_parameter_MWRN_2691ba_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E1205_Illigal_parameter_MWRN_2691ba";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (ar4 == 0) {
    uVar1 = ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c2732a0)); unsigned long t1_ = (unsigned long)(ar5); *(unsigned *)((((unsigned long)(fr0_ - 12)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 12)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 12)) - 8); debug_printf(0,ar5,ar6,ar7); });
    return uVar1;
  }
  iVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c26a100(((undefined1 *)(fr0_ - 0xc)),ar5,ar6,ar7));
  if (iVar2 == 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 12)), s_E1205_Illigal_parameter_MWRN_269a56(ar4,ar5,ar6,ar7));
    if (iVar2 != 0) {
      (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38)) + 0x14))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38)),ar5,ar6,ar7));
      *(byte *)(unsigned)(ar4 + 1) = *(byte *)(unsigned)(ar4 + 1) & 5;
    }
  }
  else if ((iVar2 == 1) &&
          (iVar2 = (vsp = ((unsigned long)(fr0_ - 12)), s_E1205_Illigal_parameter_MWRN_269a56(ar4,ar5,ar6,ar7)), iVar2 != 1)) {
    (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38)) + 0x10))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38)),ar5,ar6,ar7));
    *(byte *)(unsigned)(ar4 + 1) = *(byte *)(unsigned)(ar4 + 1) | 2;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c26a118(((undefined1 *)(fr0_ - 0xc)),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_2691ba\n.set _s_E1205_Illigal_parameter_MWRN_2691ba, _s_E1205_Illigal_parameter_MWRN_2691ba_def\n");
