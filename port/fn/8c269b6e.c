#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_269b6e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return uVar1;
  }
  *(undefined4 *)(ar4 + 0x44) = ar5;
  return 0x44;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269b6e\n.set _s_E1205_Illigal_parameter_MWRN_269b6e, _s_E1205_Illigal_parameter_MWRN_269b6e_def\n");
