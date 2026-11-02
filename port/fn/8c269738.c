#include "../decls.h"
undefined4 s_E1205_Illigal_parameter_MWRN_26973a_def(int ar4,int ar5,undefined1 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int in_stack_ffffffec;
  undefined1 auStack_10 [4];
  int *piStack_c;
  
  puVar3 = &stack0xffffffec;
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_stack_ffffffec
                        );
    return uVar1;
  }
  FUN_8c26a100(auStack_10,ar5,ar6,ar7);
  if (*(char *)(ar4 + 5) == '\x01') {
    iVar2 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,ar5,ar6,ar7);
    if (iVar2 == 1) {
      s_E1213_mwlRnaAddWrPos_rna_sj__268f4c(ar4,ar5,ar6,ar7);
    }
    else {
      FUN_8c269056(ar4,ar5,ar6,ar7);
    }
    *(undefined1 *)(ar4 + 5) = 0;
  }
  if ((*(int *)(ar4 + 0x30) != 0) && (0 < *(int *)(ar4 + 0x34))) {
    piStack_c = *(int **)(ar4 + 0x38);
    iVar2 = (**(code **)(*piStack_c + 0x54))
                      (piStack_c,*(undefined4 *)(ar4 + 0x30),&stack0xffffffec,ar7);
    ar6 = puVar3;
    if (*(int *)(ar4 + 0x88) == 2) {
      uVar1 = libgcc_divide_helper_010614
                        ((*(int *)(ar4 + 0x50) + *(int *)(ar4 + 0x28)) - in_stack_ffffffec,
                         *(int *)(ar4 + 0x28));
      *(undefined4 *)(ar4 + 0x50) = uVar1;
      ar6 = puVar3;
    }
    ar5 = *(int *)(ar4 + 0x28);
    uVar1 = libgcc_divide_helper_010614((*(int *)(ar4 + 0x2c) + ar5) - in_stack_ffffffec,ar5);
    *(undefined4 *)(ar4 + 0x2c) = uVar1;
    *(int *)(ar4 + 0x30) = (*(int *)(ar4 + 0x30) + iVar2) - in_stack_ffffffec;
    *(int *)(ar4 + 0x34) = *(int *)(ar4 + 0x34) - iVar2;
  }
  uVar1 = FUN_8c26a118(auStack_10,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_26973a\n.set _s_E1205_Illigal_parameter_MWRN_26973a, _s_E1205_Illigal_parameter_MWRN_26973a_def\n");
