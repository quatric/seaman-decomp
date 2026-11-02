#include "../decls.h"
undefined4 FUN_8c20a7e0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if ((*(undefined4 *)0x8c4a9fdc != 1) &&
     (iVar1 = FUN_8c203298(*(undefined4 *)0x8c4a9fd8,ar5,ar6,ar7), iVar1 != 1)) {
    return 0x11;
  }
  return 0;
}

__asm__(".globl _FUN_8c20a7e0\n.set _FUN_8c20a7e0, _FUN_8c20a7e0_def\n");
