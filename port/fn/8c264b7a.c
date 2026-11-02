#include "../decls.h"
int FUN_8c264b7a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = s_E1205_Illigal_parameter_MWRN_269aa8(*(undefined4 *)(ar4 + 0xc));
  if (iVar1 < 1) {
    s_E1205_Illigal_parameter_MWRN_2691ba(*(undefined4 *)(ar4 + 0xc),0);
    iVar1 = 5;
    *(undefined1 *)(ar4 + 1) = 5;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c264b7a\n.set _FUN_8c264b7a, _FUN_8c264b7a_def\n");
