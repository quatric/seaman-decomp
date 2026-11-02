#include "../decls.h"
int FUN_8c264b7e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r14;
  
  iVar1 = (*(code *)(&s_E1205_Illigal_parameter_MWRN_269aa8))
                    (*(undefined4 *)(unaff_r14 + 0xc),ar5,ar6,ar7);
  if (iVar1 < 1) {
    (*(code *)(&s_E1205_Illigal_parameter_MWRN_2691ba))
              (*(undefined4 *)(unaff_r14 + 0xc),0,ar6,ar7);
    iVar1 = 5;
    *(undefined1 *)(unaff_r14 + 1) = 5;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c264b7e\n.set _FUN_8c264b7e, _FUN_8c264b7e_def\n");
