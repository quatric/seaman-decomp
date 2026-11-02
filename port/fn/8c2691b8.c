#include "../decls.h"
undefined4 s_E1205_Illigal_parameter_MWRN_2691ba_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_c [8];
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,ar5);
    return uVar1;
  }
  iVar2 = ar5;
  FUN_8c26a100(auStack_c,ar5,ar6,ar7);
  if (iVar2 == 0) {
    iVar2 = s_E1205_Illigal_parameter_MWRN_269a56(ar4,ar5,ar6,ar7);
    if (iVar2 != 0) {
      (**(code **)(**(int **)(ar4 + 0x38) + 0x14))(*(int **)(ar4 + 0x38),ar5,ar6,ar7);
      *(byte *)(ar4 + 1) = *(byte *)(ar4 + 1) & 5;
    }
  }
  else if ((iVar2 == 1) &&
          (iVar2 = s_E1205_Illigal_parameter_MWRN_269a56(ar4,ar5,ar6,ar7), iVar2 != 1)) {
    (**(code **)(**(int **)(ar4 + 0x38) + 0x10))(*(int **)(ar4 + 0x38),ar5,ar6,ar7);
    *(byte *)(ar4 + 1) = *(byte *)(ar4 + 1) | 2;
  }
  uVar1 = FUN_8c26a118(auStack_c,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_2691ba\n.set _s_E1205_Illigal_parameter_MWRN_2691ba, _s_E1205_Illigal_parameter_MWRN_2691ba_def\n");
