#include "../decls.h"
undefined4 FUN_8c122630_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_8c11f66a(*ar4);
  if (iVar1 != 0) {
    uVar2 = FUN_8c11cd44(*(undefined4 *)(uint)ar4[1],*ar4);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c122630\n.set _FUN_8c122630, _FUN_8c122630_def\n");
