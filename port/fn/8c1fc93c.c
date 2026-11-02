#include "../decls.h"
undefined4 FUN_8c1fc93c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1fd8fc(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    uVar2 = FUN_8c1fbfd2(ar4,ar5,ar6,ar7);
    return uVar2;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1fc93c\n.set _FUN_8c1fc93c, _FUN_8c1fc93c_def\n");
