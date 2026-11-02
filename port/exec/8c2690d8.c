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
undefined4 s_E1205_Illigal_parameter_MWRN_2690dc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E1205_Illigal_parameter_MWRN_2690dc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int a5;
  
  if (ar4 == 0) {
    uVar1 = ({ unsigned long t0_ = (unsigned long)("E1205:Illigal parameter (MWRNA=NULL)"); unsigned long t1_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14))); *(unsigned *)((((unsigned long)(fr0_ - 40)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 40)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 40)) - 8); debug_printf(0,ar5,ar6,ar7); });
  }
  else {
    *(undefined4 *)(unsigned)(ar4 + 0x8c) = 1;
    a5 = ar5;
    if (*(char *)(unsigned)(ar4 + 5) == '\x01') {
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); s_E1209_mwRnaPause_Time_out_of_26908e(ar4,ar5,ar6,ar7); });
      iVar2 = (vsp = ((unsigned long)(fr0_ - 40)), s_E1205_Illigal_parameter_MWRN_269a30(ar4,a5,ar6,ar7));
      if (iVar2 == 1) {
        (vsp = ((unsigned long)(fr0_ - 40)), s_E1213_mwlRnaAddWrPos_rna_sj__268f4c(ar4,a5,ar6,ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c269056(ar4,a5,ar6,ar7));
      }
      *(undefined1 *)(unsigned)(ar4 + 5) = 0;
    }
    (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c26a100((fr0_ + (int)0xffffffec),a5,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x8c) = 0;
    if (ar5 == 0) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 40)), s_E1205_Illigal_parameter_MWRN_269a30(ar4,a5,ar6,ar7));
      if (iVar2 != 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x50) = *(undefined4 *)(unsigned)(ar4 + 0x2c);
        *(undefined4 *)(unsigned)(ar4 + 0x54) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x58) = 0;
        *(byte *)(unsigned)(ar4 + 1) = *(byte *)(unsigned)(ar4 + 1) & 6;
      }
    }
    else if ((ar5 == 1) &&
            (iVar2 = (vsp = ((unsigned long)(fr0_ - 40)), s_E1205_Illigal_parameter_MWRN_269a30(ar4,a5,ar6,ar7)), iVar2 != 1)) {
      *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x30) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x34) = 0;
      *(undefined1 *)(unsigned)(ar4 + 6) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x5c) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x48) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x4c) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x3c) = 0;
      *(undefined1 *)(unsigned)(ar4 + 4) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x50) = *(undefined4 *)(unsigned)(ar4 + 0x2c);
      *(undefined4 *)(unsigned)(ar4 + 0x54) = 0;
      *(byte *)(unsigned)(ar4 + 1) = *(byte *)(unsigned)(ar4 + 1) | 1;
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c26a118((fr0_ + (int)0xffffffec),a5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_2690dc\n.set _s_E1205_Illigal_parameter_MWRN_2690dc, _s_E1205_Illigal_parameter_MWRN_2690dc_def\n");
