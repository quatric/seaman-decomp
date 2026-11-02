#include "../decls.h"
undefined4 FUN_8c1faa08_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a6;
  int iVar2;
  int iVar3;
  int iVar4;
  
  a6 = ar6;
  iVar3 = ar5;
  FUN_8c1fad9a(ar4,ar5,ar6,ar7,ar5);
  iVar2 = iVar3 + ar6;
  iVar4 = iVar3 << 2;
  for (; iVar3 < iVar2; iVar3 = iVar3 + 1) {
    FUN_8c1fadd0(*(undefined4 *)(_DAT_8c475ec8 + iVar4),ar5,a6,ar7);
    FUN_8c1fad9a(&DAT_8c26d000,ar5,a6,ar7);
    iVar4 = iVar4 + 4;
  }
  uVar1 = FUN_8c1fad9a(&DAT_8c26cff8,ar5,a6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1faa08\n.set _FUN_8c1faa08, _FUN_8c1faa08_def\n");
