#include "../decls.h"
undefined4 FUN_8c1f4646_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c1f45b8(ar4,ar5,ar6,ar7);
  *(undefined1 *)(iVar1 + 0xd) = 1;
  return 1;
}

__asm__(".globl _FUN_8c1f4646\n.set _FUN_8c1f4646, _FUN_8c1f4646_def\n");
