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
undefined4 s_E1205_Illigal_parameter_MWRN_26973a_def(int ar4,int ar5,undefined1 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E1205_Illigal_parameter_MWRN_26973a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  puVar3 = (fr0_ + (int)0xffffffec);
  if (ar4 == 0) {
    uVar1 = ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c2732a0)); unsigned long t1_ = (unsigned long)((*(int *)(fr0_ - 0x14))
                        ); *(unsigned *)((((unsigned long)(fr0_ - 40)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 40)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 40)) - 8); debug_printf(0,ar5,ar6,ar7); });
    return uVar1;
  }
  (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c26a100(((undefined1 *)(fr0_ - 0x10)),ar5,ar6,ar7));
  if (*(char *)(unsigned)(ar4 + 5) == '\x01') {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 40)), s_E1205_Illigal_parameter_MWRN_269a30(ar4,ar5,ar6,ar7));
    if (iVar2 == 1) {
      (vsp = ((unsigned long)(fr0_ - 40)), s_E1213_mwlRnaAddWrPos_rna_sj__268f4c(ar4,ar5,ar6,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c269056(ar4,ar5,ar6,ar7));
    }
    *(undefined1 *)(unsigned)(ar4 + 5) = 0;
  }
  if ((*(int *)(unsigned)(ar4 + 0x30) != 0) && (0 < *(int *)(unsigned)(ar4 + 0x34))) {
    (*(unsigned *)(fr0_ - 0xc) = (unsigned)(unsigned long)(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38))));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ - 0xc)) + 0x54))))
                      (((int *)(unsigned long)*(unsigned *)(fr0_ - 0xc)),*(undefined4 *)(unsigned)(ar4 + 0x30),(fr0_ + (int)0xffffffec),ar7));
    ar6 = puVar3;
    if (*(int *)(unsigned)(ar4 + 0x88) == 2) {
      uVar1 = libgcc_divide_helper_010614
                        ((*(int *)(unsigned)(ar4 + 0x50) + *(int *)(unsigned)(ar4 + 0x28)) - (*(int *)(fr0_ - 0x14)),
                         *(int *)(unsigned)(ar4 + 0x28));
      *(undefined4 *)(unsigned)(ar4 + 0x50) = uVar1;
      ar6 = puVar3;
    }
    ar5 = *(int *)(unsigned)(ar4 + 0x28);
    uVar1 = (vsp = ((unsigned long)(fr0_ - 40)), libgcc_divide_helper_010614((*(int *)(unsigned)(ar4 + 0x2c) + ar5) - (*(int *)(fr0_ - 0x14)),ar5,vr6,vr7));
    *(undefined4 *)(unsigned)(ar4 + 0x2c) = uVar1;
    *(int *)(unsigned)(ar4 + 0x30) = (*(int *)(unsigned)(ar4 + 0x30) + iVar2) - (*(int *)(fr0_ - 0x14));
    *(int *)(unsigned)(ar4 + 0x34) = *(int *)(unsigned)(ar4 + 0x34) - iVar2;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c26a118(((undefined1 *)(fr0_ - 0x10)),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_26973a\n.set _s_E1205_Illigal_parameter_MWRN_26973a, _s_E1205_Illigal_parameter_MWRN_26973a_def\n");
