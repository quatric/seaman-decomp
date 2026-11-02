#include "../decls.h"
undefined4 s_E1205_Illigal_parameter_MWRN_269c8c_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,ar5);
  }
  else {
    iVar2 = -0xf;
    if ((ar6 < -0xf) || (iVar2 = 0xf, 0xf < ar6)) {
      ar6 = iVar2;
    }
    uVar1 = (**(code **)(**(int **)(ar4 + 0x38) + 0x3c))(*(int **)(ar4 + 0x38),ar5,ar6,ar7);
    *(int *)(ar5 * 4 + ar4 + 100) = ar6;
  }
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269c8c\n.set _s_E1205_Illigal_parameter_MWRN_269c8c, _s_E1205_Illigal_parameter_MWRN_269c8c_def\n");
