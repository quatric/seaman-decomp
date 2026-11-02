#include "../decls.h"
undefined4 FUN_8c01f594_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)0x8c2792a0 = 0;
  iVar1 = FUN_8c1f3a34(ar4,ar5,ar6,ar7);
  if ((iVar1 == 6) || (iVar1 == 7)) {
    *(undefined4 *)0x8c2792a0 = 6;
  }
  return *(undefined4 *)0x8c2792a0;
}

__asm__(".globl _FUN_8c01f594\n.set _FUN_8c01f594, _FUN_8c01f594_def\n");
