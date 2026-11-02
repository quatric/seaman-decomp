#include "../decls.h"
undefined4 FUN_8c203ca0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 a5;
  
  a5 = ar5;
  uVar1 = FUN_8c2059e0(ar4,ar5,ar6,ar7);
  iVar2 = FUN_8c203bda(uVar1,a5,ar6,ar7);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = FUN_8c2059e0(ar5,a5,ar6,ar7);
    uVar1 = FUN_8c203bda(uVar1,a5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c203ca0\n.set _FUN_8c203ca0, _FUN_8c203ca0_def\n");
