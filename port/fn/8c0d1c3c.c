#include "../decls.h"
undefined4 FUN_8c0d1c3c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)0x8c431a50 = 1;
  if ((*(undefined4 *)0x8c437864 == '\0') || (*(undefined4 *)0x8c437864 == '\x01')) {
    FUN_8c0d5e2c(ar4,ar5,ar6,ar7);
  }
  uVar1 = thunk_FUN_8c20a1d0(0x8c43786c,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0d1c3c\n.set _FUN_8c0d1c3c, _FUN_8c0d1c3c_def\n");
