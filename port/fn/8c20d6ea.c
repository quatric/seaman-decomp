#include "../decls.h"
undefined4 FUN_8c20d6ea_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c20d400(ar6,ar6,ar6,ar7);
  uVar2 = FUN_8c20a9c2(ar4,ar5 + 4,*(undefined4 *)(&DAT_8c26d4d8 + iVar1 * 4),ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c20d6ea\n.set _FUN_8c20d6ea, _FUN_8c20d6ea_def\n");
