#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_268db4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return uVar1;
  }
  if (*(char *)(ar4 + 6) != '\x01') {
    *(undefined1 *)(ar4 + 6) = 1;
  }
  return 1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_268db4\n.set _s_E1205_Illigal_parameter_MWRN_268db4, _s_E1205_Illigal_parameter_MWRN_268db4_def\n");
