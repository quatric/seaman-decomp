#include "../decls.h"
undefined4 FUN_8c1fc226_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_8c1ff336(ar4,ar5,ar6);
  return uVar2;
}

__asm__(".globl _FUN_8c1fc226\n.set _FUN_8c1fc226, _FUN_8c1fc226_def\n");
