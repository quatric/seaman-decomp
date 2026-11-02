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
undefined4 s_E1205_Illigal_parameter_MWRN_269816_def(int ar4,int ar5,undefined1 *ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "s_E1205_Illigal_parameter_MWRN_269816";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *s0;
  undefined1 *a5;
  int *piVar5;
  undefined1 *ar5_00;
  
  iVar2 = ar4;
  iVar3 = ar5;
  if (ar4 == 0) {
    s0 = ((undefined1 *)(unsigned)0x8c2732a0);
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), s_E1205_Illigal_parameter_MWRN_269a56(ar4,ar5,ar6,ar7));
    if (iVar1 != 1) {
      if (iVar3 < 1) {
        return 0;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x8c) = 1;
      if (*(char *)(unsigned)(ar4 + 5) == '\x01') {
        ({ unsigned long ri0_ = (unsigned long)(iVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); s_E1209_mwRnaPause_Time_out_of_26908e(ar4,ar5,ar6,ar7); });
        iVar2 = (vsp = ((unsigned long)(fr0_ - 76)), s_E1205_Illigal_parameter_MWRN_269a30(ar4,ar5,ar6,ar7));
        if (iVar2 == 1) {
          (vsp = ((unsigned long)(fr0_ - 76)), s_E1213_mwlRnaAddWrPos_rna_sj__268f4c(ar4,ar5,ar6,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c269056(ar4,ar5,ar6,ar7));
        }
        *(undefined1 *)(unsigned)(ar4 + 5) = 0;
      }
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c26a100(((undefined1 *)(fr0_ - 0x4c)),ar5,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x8c) = 0;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 76)), libgcc_divide_helper_010468(0x20,*(undefined4 *)(unsigned)(ar4 + 8),vr6,vr7));
      iVar2 = iVar2 << 3;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 76)), libgcc_divide_helper_010468(iVar3,iVar2,vr6,vr7));
      iVar3 = iVar3 * iVar2;
      if (*(int *)(unsigned)(ar4 + 0x34) < iVar3) {
        iVar2 = (iVar3 - *(int *)(unsigned)(ar4 + 0x34)) * *(int *)(unsigned)(ar4 + 8);
        if (iVar2 < 0) {
          iVar2 = iVar2 + 7;
        }
        ar6 = (undefined1 *)(unsigned)(iVar2 >> 3);
        (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x18))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),1,ar6,((undefined1 *)(fr0_ - 0x30))));
        a5 = (undefined1 *)(unsigned)0x1;
        ar7 = ((undefined1 *)(fr0_ - 0x28));
        (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14)) + 0x18))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14)),1,ar6,ar7));
        ar5_00 = ((undefined1 *)(unsigned long)*(unsigned *)(fr0_ - 0x2c));
        if ((*(char *)(unsigned)(ar4 + 3) != '\x01') &&
           ((*(unsigned *)(fr0_ - 0x48) = (unsigned)(unsigned long)(((undefined1 *)(fr0_ - 0x28)))), a5 = ((undefined1 *)(unsigned long)*(unsigned *)(fr0_ - 0x24)), ar6 = ((undefined1 *)(unsigned long)*(unsigned *)(fr0_ - 0x2c)), ar5_00 = ((undefined1 *)(unsigned long)*(unsigned *)(fr0_ - 0x24)),
           (*(unsigned *)(fr0_ - 0x44) = (unsigned)(unsigned long)(((undefined1 *)(fr0_ - 0x30)))), (int)((undefined1 *)(unsigned long)*(unsigned *)(fr0_ - 0x2c)) < (int)((undefined1 *)(unsigned long)*(unsigned *)(fr0_ - 0x24)))) {
          ar5_00 = ((undefined1 *)(unsigned long)*(unsigned *)(fr0_ - 0x2c));
        }
        for (iVar2 = 0; iVar2 < (int)(uint)*(byte *)(unsigned)(ar4 + 3); iVar2 = iVar2 + 1) {
          ar7 = ((undefined1 *)(fr0_ - 0x40));
          (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c26be30(((undefined1 *)(fr0_ - 0x30)) + iVar2 * 8,ar5_00,((undefined1 *)(fr0_ - 0x38)),ar7));
          piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10 + iVar2 * 4));
          (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar5 + 0x20))))(piVar5,0,((undefined1 *)(fr0_ - 0x38)),ar7));
          piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10 + iVar2 * 4));
          a5 = (undefined1 *)(unsigned)0x1;
          ar6 = ((undefined1 *)(fr0_ - 0x40));
          (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar5 + 0x1c))))(piVar5,1,ar6,ar7));
        }
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x34) = 0;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 76)), libgcc_divide_helper_010468(ar5_00,*(undefined4 *)(unsigned)(ar4 + 8),vr6,vr7));
        iVar2 = iVar2 * 8 + *(int *)(unsigned)(ar4 + 0x28);
      }
      else {
        a5 = (undefined1 *)(unsigned)
             (vsp = ((unsigned long)(fr0_ - 76)), libgcc_divide_helper_010614(*(int *)(unsigned)(ar4 + 0x30) + iVar3,*(undefined4 *)(unsigned)(ar4 + 0x28),vr6,vr7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38)) + 0x58))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38)),a5,ar6,ar7));
        iVar3 = *(int *)(unsigned)(ar4 + 0x34) - iVar2;
        *(int *)(unsigned)(ar4 + 0x34) = iVar3;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 76)), libgcc_divide_helper_010614(iVar3,*(undefined4 *)(unsigned)(ar4 + 0x28),vr6,vr7));
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = uVar4;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x30) = 0;
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c26a118(((undefined1 *)(fr0_ - 0x4c)),a5,ar6,ar7));
      return iVar2;
    }
    s0 = ((undefined1 *)(unsigned)0x8c273344);
  }
  ({ unsigned long t0_ = (unsigned long)(s0); unsigned long t1_ = (unsigned long)(iVar3); *(unsigned *)((((unsigned long)(fr0_ - 76)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 76)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 76)) - 8); debug_printf(iVar2,ar5,ar6,ar7); });
  return 0;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269816\n.set _s_E1205_Illigal_parameter_MWRN_269816, _s_E1205_Illigal_parameter_MWRN_269816_def\n");
