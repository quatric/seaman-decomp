#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_268cf0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_stack_fffffff4
                        );
    return uVar1;
  }
  FUN_8c26a100(&stack0xfffffff4,ar5,ar6,ar7);
  if (*(char *)(ar4 + 1) != '\0') {
    s_E1205_Illigal_parameter_MWRN_268d66(ar4,ar5,ar6,ar7);
  }
  *(undefined1 *)(ar4 + 1) = 4;
  uVar1 = 1;
  *(undefined4 *)(ar4 + 0x40) = *(undefined4 *)(ar4 + 0x44);
  s_E1205_Illigal_parameter_MWRN_2690dc(ar4,1,ar6,ar7);
  uVar1 = FUN_8c26a118(&stack0xfffffff4,uVar1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_268cf0\n.set _s_E1205_Illigal_parameter_MWRN_268cf0, _s_E1205_Illigal_parameter_MWRN_268cf0_def\n");
