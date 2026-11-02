#include "../decls.h"
undefined4 FUN_8c1fc16a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_8c1fe350(ar4,ar5);
  return uVar2;
}

__asm__(".globl _FUN_8c1fc16a\n.set _FUN_8c1fc16a, _FUN_8c1fc16a_def\n");
