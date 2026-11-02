#include "../decls.h"
undefined4 FUN_8c10be4e_def(undefined4 ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c11ce88(ar4,ar5,ar6,ar7);
  *ar5 = uVar1;
  return 0;
}

__asm__(".globl _FUN_8c10be4e\n.set _FUN_8c10be4e, _FUN_8c10be4e_def\n");
