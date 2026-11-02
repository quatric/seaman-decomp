#include "../decls.h"
undefined4 FUN_8c263e8e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined2 *)(ar4 + 0x40) = (undefined2)ar5;
  uVar1 = s_E1205_Illigal_parameter_MWRN_269c42(*(undefined4 *)(ar4 + 0xc));
  return uVar1;
}

__asm__(".globl _FUN_8c263e8e\n.set _FUN_8c263e8e, _FUN_8c263e8e_def\n");
