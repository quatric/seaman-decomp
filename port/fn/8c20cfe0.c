#include "../decls.h"
undefined4 FUN_8c20cfe0_def(int *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 *puStack_c;
  int *piStack_8;
  
  puStack_c = ar5;
  piStack_8 = ar4;
  uVar1 = FUN_8c203de0(&iStack_1c,&iStack_18,&iStack_14,&uStack_10);
  *piStack_8 = iStack_1c + iStack_18 + iStack_14;
  *puStack_c = uStack_10;
  return uVar1;
}

__asm__(".globl _FUN_8c20cfe0\n.set _FUN_8c20cfe0, _FUN_8c20cfe0_def\n");
