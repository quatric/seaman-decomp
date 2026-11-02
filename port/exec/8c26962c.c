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
s_E1205_Illigal_parameter_MWRN_269630_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E1205_Illigal_parameter_MWRN_269630";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (ar4 == 0) {
    uVar1 = ({ unsigned long t0_ = (unsigned long)("E1205:Illigal parameter (MWRNA=NULL)"); unsigned long t1_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x10))); *(unsigned *)((((unsigned long)(fr0_ - 32)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 32)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 32)) - 8); debug_printf(0,ar5,ar6,ar7); });
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c26a100((fr0_ + (int)0xfffffff0),ar5,ar6,ar7));
    if (*(char *)(unsigned)(ar4 + 7) == '\0') {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 32)), s_E1205_Illigal_parameter_MWRN_269a56(ar4,ar5,ar6,ar7));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 32)), s_E1205_Illigal_parameter_MWRN_269a30(ar4,ar5,ar6,ar7));
      *(uint *)(unsigned)(ar4 + 0x88) = iVar2 << 1 | uVar3;
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c268ea8(ar4,ar5,ar6,ar7));
      ar5 = 0;
      (vsp = ((unsigned long)(fr0_ - 32)), s_E1205_Illigal_parameter_MWRN_2691ba(ar4,0,ar6,ar7));
      *(undefined1 *)(unsigned)(ar4 + 7) = 1;
      if (*(char *)(unsigned)(ar4 + 5) == '\x01') {
        *(undefined4 *)(unsigned)(ar4 + 0x8c) = 1;
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c26a118((fr0_ + (int)0xfffffff0),ar5,ar6,ar7));
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); s_E1209_mwRnaPause_Time_out_of_26908e(ar4,ar5,ar6,ar7); });
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c26a100((fr0_ + (int)0xfffffff0),ar5,ar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x8c) = 0;
      }
      (vsp = ((unsigned long)(fr0_ - 32)), s_E1205_Illigal_parameter_MWRN_26973a(ar4,ar5,ar6,ar7));
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c26a118((fr0_ + (int)0xfffffff0),ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269630\n.set _s_E1205_Illigal_parameter_MWRN_269630, _s_E1205_Illigal_parameter_MWRN_269630_def\n");
