#include "../decls.h"
undefined4 FUN_8c1fc2b8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_8c1fe7aa(ar4,ar5,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c1fc2b8\n.set _FUN_8c1fc2b8, _FUN_8c1fc2b8_def\n");
