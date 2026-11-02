#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_269b92_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_stack_fffffff0;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_stack_fffffff0
                        );
  }
  else {
    iVar2 = *(int *)(ar4 + 0x28) * *(int *)(ar4 + 8);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 7;
    }
    iVar2 = libgcc_divide_helper_010468(iVar2 >> 3,ar5);
    *(int *)(ar4 + 0x28) = iVar2 << 3;
    uVar1 = (**(code **)(**(int **)(ar4 + 0x38) + 0x2c))(*(int **)(ar4 + 0x38),ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 8) = ar5;
  }
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269b92\n.set _s_E1205_Illigal_parameter_MWRN_269b92, _s_E1205_Illigal_parameter_MWRN_269b92_def\n");
