#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_2696ac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_stack_fffffff4
                        );
    return uVar1;
  }
  FUN_8c26a100(&stack0xfffffff4,ar5,ar6,ar7);
  if (*(char *)(ar4 + 7) == '\x01') {
    if ((*(int *)(ar4 + 0x88) != 0) && (*(int *)(ar4 + 0x88) != 1)) {
      ar5 = 1;
      s_E1205_Illigal_parameter_MWRN_2691ba(ar4,1,ar6,ar7);
    }
    *(undefined1 *)(ar4 + 7) = 0;
  }
  uVar1 = FUN_8c26a118(&stack0xfffffff4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_2696ac\n.set _s_E1205_Illigal_parameter_MWRN_2696ac, _s_E1205_Illigal_parameter_MWRN_2696ac_def\n");
