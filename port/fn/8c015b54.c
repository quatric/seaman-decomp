#include "../decls.h"
undefined4 FUN_8c015b54_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = deref_u32(ar5,ar5,ar6,ar7);
  uVar1 = FUN_8c21ba62(*ar4,uVar1,ar6,ar7,ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c015b54\n.set _FUN_8c015b54, _FUN_8c015b54_def\n");
