#include "../decls.h"
undefined4 FUN_8c02ee20_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c02ebfc(ar4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 4) = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c02ee20\n.set _FUN_8c02ee20, _FUN_8c02ee20_def\n");
