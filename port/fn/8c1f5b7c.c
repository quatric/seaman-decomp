#include "../decls.h"
undefined4 FUN_8c1f5b7c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  int iStack_8;
  
  uStack_c = ar4;
  FUN_8c1f5a30(auStack_14,ar5,ar6,ar7);
  iStack_8 = FUN_8c1f5a5e(auStack_10,ar5,ar6,ar7);
  iVar1 = FUN_8c1f5ac6(uStack_c,ar5,ar6,ar7);
  if (-1 < iVar1) {
    iVar1 = iVar1 * 8 + iStack_8 + 8;
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1;
  }
  uVar2 = FUN_8c1f5a48(auStack_14,ar5,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c1f5b7c\n.set _FUN_8c1f5b7c, _FUN_8c1f5b7c_def\n");
