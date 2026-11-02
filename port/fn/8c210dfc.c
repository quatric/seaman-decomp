#include "../decls.h"
undefined4 FUN_8c210dfc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c203298(*(undefined4 *)0x8c4a9fd4,ar5,ar6,ar7);
  if (iVar1 != 1) {
    return 0xd;
  }
  return 0;
}

__asm__(".globl _FUN_8c210dfc\n.set _FUN_8c210dfc, _FUN_8c210dfc_def\n");
