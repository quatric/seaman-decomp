#include "../decls.h"
undefined4 s_E1205_Illigal_parameter_MWRN_269cf2_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  char *s0;
  undefined4 in_stack_ffffffec;
  
  if (ar4 == 0) {
    s0 = s_E1205_Illigal_parameter__MWRNA_N_8c2732a0;
  }
  else {
    if ((-1 < ar5) && (ar5 < 0x11)) {
      if (ar6 < -0x2d) {
        ar6 = -0x2d;
      }
      else if (0 < ar6) {
        ar6 = 0;
      }
      (**(code **)(**(int **)(ar4 + 0x38) + 0x44))(*(int **)(ar4 + 0x38),0,ar5,ar6);
      *(int *)(ar4 + 0x6c) = ar5;
      *(int *)(ar4 + 0x70) = ar6;
      return 0x70;
    }
    s0 = s_E1207_mwRnaSetFx_Illigal_paramet_8c2733a4;
  }
  uVar1 = debug_printf(ar4,ar5,ar6,ar7,s0,in_stack_ffffffec);
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269cf2\n.set _s_E1205_Illigal_parameter_MWRN_269cf2, _s_E1205_Illigal_parameter_MWRN_269cf2_def\n");
