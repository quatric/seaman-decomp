#include "../decls.h"
undefined4 FUN_8c1f5b28_def(undefined4 ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined4 uStack_10;
  int iStack_c;
  
  uStack_10 = ar4;
  FUN_8c1f5a30(auStack_18,ar5,ar6,ar7);
  iStack_c = FUN_8c1f5a5e(auStack_14,ar5,ar6,ar7);
  iVar1 = FUN_8c1f5ac6(uStack_10,ar5,ar6,ar7);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    ar5 = (undefined4 *)(iStack_c + 8 + iVar1 * 8);
    uVar2 = *ar5;
    ar5[1] = ar5[1] + 1;
  }
  FUN_8c1f5a48(auStack_18,ar5,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c1f5b28\n.set _FUN_8c1f5b28, _FUN_8c1f5b28_def\n");
