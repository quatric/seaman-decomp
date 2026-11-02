#include "../decls.h"
undefined4 s_E1205_Illigal_parameter_MWRN_269dbc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff0;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_stack_fffffff0
                        );
  }
  else {
    if (ar5 < -0x2d) {
      ar5 = -0x2d;
    }
    else if (0 < ar5) {
      ar5 = 0;
    }
    (**(code **)(**(int **)(ar4 + 0x38) + 0x44))(*(int **)(ar4 + 0x38),2,ar5,0);
    uVar1 = 0x84;
    *(int *)(ar4 + 0x84) = ar5;
  }
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269dbc\n.set _s_E1205_Illigal_parameter_MWRN_269dbc, _s_E1205_Illigal_parameter_MWRN_269dbc_def\n");
