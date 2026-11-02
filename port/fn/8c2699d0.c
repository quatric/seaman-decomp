#include "../decls.h"
undefined4 s_E1205_Illigal_parameter_MWRN_2699d4_def(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *a5;
  undefined4 *puVar2;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,ar6);
  }
  else {
    a5 = ar5;
    puVar2 = ar6;
    FUN_8c268ea8(ar4,ar5,ar6,ar7);
    *ar5 = *(int *)(ar4 + 0x4c) - *(int *)(ar4 + 0x34);
    uVar1 = s_E1205_Illigal_parameter_MWRN_269e36(ar4,a5,ar6,ar7);
    *puVar2 = uVar1;
  }
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_2699d4\n.set _s_E1205_Illigal_parameter_MWRN_2699d4, _s_E1205_Illigal_parameter_MWRN_2699d4_def\n");
