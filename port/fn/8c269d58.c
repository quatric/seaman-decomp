#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_269d5a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_ffffffe4;
  undefined4 uStack_18;
  int *piStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = ar5;
  uStack_c = ar6;
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_stack_ffffffe4
                        );
    return uVar1;
  }
  piStack_14 = *(int **)(ar4 + 0x38);
  (**(code **)(*piStack_14 + 0x44))(piStack_14,1,ar5,ar6);
  piStack_14 = *(int **)(ar4 + 0x38);
  (**(code **)(*piStack_14 + 0x48))(piStack_14,1,&stack0xffffffe4,&uStack_18);
  *(undefined4 *)(ar4 + 0x74) = in_stack_ffffffe4;
  *(undefined4 *)(ar4 + 0x78) = uStack_18;
  return 0x78;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269d5a\n.set _s_E1205_Illigal_parameter_MWRN_269d5a, _s_E1205_Illigal_parameter_MWRN_269d5a_def\n");
