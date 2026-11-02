#include "../decls.h"
undefined4 FUN_8c20d6c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c20d400(ar6,ar6,ar6,ar7);
  uVar2 = FUN_8c20a8e0(ar4 + 4,ar5,*(int *)(&DAT_8c26d4d8 + iVar1 * 4) + 4,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c20d6c0\n.set _FUN_8c20d6c0, _FUN_8c20d6c0_def\n");
