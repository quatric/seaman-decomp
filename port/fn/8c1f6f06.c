#include "../decls.h"
int FUN_8c1f6f06_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c1f1080(ar4,ar5,ar6,ar7);
  if (iVar1 < 0) {
    *(undefined4 *)0x8c4748a8 = 5;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1f6f06\n.set _FUN_8c1f6f06, _FUN_8c1f6f06_def\n");
