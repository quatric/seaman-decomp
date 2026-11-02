#include "../decls.h"
undefined4 FUN_8c1fb426_def(undefined **ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = _DAT_8c475ee0;
  _DAT_8c475ee0 = ar4;
  if (ar4 == (undefined **)0x0) {
    _DAT_8c475ee0 = &PTR_FUN_8c26d0c8;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1fb426\n.set _FUN_8c1fb426, _FUN_8c1fb426_def\n");
