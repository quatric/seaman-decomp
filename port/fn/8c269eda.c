#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_269eda_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,ar6);
    *ar5 = 0xffffffff;
    *ar6 = 0xffffffff;
    return uVar1;
  }
  *ar5 = *(undefined4 *)(ar4 + 0x74);
  *ar6 = *(undefined4 *)(ar4 + 0x78);
  return 0x78;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269eda\n.set _s_E1205_Illigal_parameter_MWRN_269eda, _s_E1205_Illigal_parameter_MWRN_269eda_def\n");
