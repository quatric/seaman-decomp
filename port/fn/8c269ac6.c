#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_269ac6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return 0xffffffff;
  }
  return *(int *)(ar4 + 0x28) - *(int *)(ar4 + 0x34);
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269ac6\n.set _s_E1205_Illigal_parameter_MWRN_269ac6, _s_E1205_Illigal_parameter_MWRN_269ac6_def\n");
