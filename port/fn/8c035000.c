#include "../decls.h"
undefined4 FUN_8c035000_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = get_field_18_02d1a0(ar4 + 0xa8,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c035000\n.set _FUN_8c035000, _FUN_8c035000_def\n");
