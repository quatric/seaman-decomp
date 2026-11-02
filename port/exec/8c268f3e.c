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
s_E1213_mwlRnaAddWrPos_rna_sj__268f4c_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "s_E1213_mwlRnaAddWrPos_rna_sj__268f4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  
  puVar2 = ((undefined1 *)(fr0_ - 0x3c));
  (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c26a100(((undefined1 *)(fr0_ - 0x3c)),ar5,ar6,ar7));
  for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)(unsigned)(ar4 + 3); iVar4 = iVar4 + 1) {
    if (*(int *)(unsigned)(iVar4 * 4 + ar4 + 0x10) == 0) {
      (vsp = ((unsigned long)(fr0_ - 60)), debug_printf(puVar2,ar5,ar6,ar7));
    }
  }
  for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)(unsigned)(ar4 + 3); iVar4 = iVar4 + 1) {
    (*(undefined4 *)(fr0_ - 0x28)) = *(undefined4 *)(unsigned)(ar4 + 0x18 + iVar4 * 8);
    (*(undefined4 *)(fr0_ - 0x24)) = *(undefined4 *)(unsigned)(iVar4 * 8 + ar4 + 0x1c);
    puVar2 = ((undefined1 *)(fr0_ - 0x30));
    ar7 = ((undefined1 *)(fr0_ - 0x38));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 60)), libgcc_divide_helper_010468(*(int *)(unsigned)(ar4 + 0x3c) * *(int *)(unsigned)(ar4 + 8),8,vr6,vr7));
    (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c26be30(&(*(undefined4 *)(fr0_ - 0x28)),uVar1,puVar2,ar7));
    piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10 + iVar4 * 4));
    (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar3 + 0x20))))(piVar3,0,((undefined1 *)(fr0_ - 0x30)),ar7));
    piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10 + iVar4 * 4));
    ar5 = 1;
    ar6 = ((undefined1 *)(fr0_ - 0x38));
    (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar3 + 0x1c))))(piVar3,1,ar6,ar7));
  }
  uVar1 = libgcc_divide_helper_010614
                    (*(int *)(unsigned)(ar4 + 0x2c) + *(int *)(unsigned)(ar4 + 0x3c),*(undefined4 *)(unsigned)(ar4 + 0x28));
  *(undefined4 *)(unsigned)(ar4 + 0x2c) = uVar1;
  *(int *)(unsigned)(ar4 + 0x34) = *(int *)(unsigned)(ar4 + 0x34) + *(int *)(unsigned)(ar4 + 0x3c);
  *(int *)(unsigned)(ar4 + 0x4c) = *(int *)(unsigned)(ar4 + 0x4c) + *(int *)(unsigned)(ar4 + 0x3c);
  *(undefined4 *)(unsigned)(ar4 + 0x3c) = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c26a118(((undefined1 *)(fr0_ - 0x3c)),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _s_E1213_mwlRnaAddWrPos_rna_sj__268f4c\n.set _s_E1213_mwlRnaAddWrPos_rna_sj__268f4c, _s_E1213_mwlRnaAddWrPos_rna_sj__268f4c_def\n");
