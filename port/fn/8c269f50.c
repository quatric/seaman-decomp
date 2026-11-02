#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_269f52_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,ar6);
    return uVar1;
  }
  *(undefined4 *)(ar4 + 0x7c) = ar5;
  *(undefined4 *)(ar4 + 0x80) = ar6;
                    
                    
  uVar1 = (**(code **)(**(int **)(ar4 + 0x38) + 0x44))(*(int **)(ar4 + 0x38),3,ar5,ar6);
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269f52\n.set _s_E1205_Illigal_parameter_MWRN_269f52, _s_E1205_Illigal_parameter_MWRN_269f52_def\n");
