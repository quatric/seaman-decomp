#include "../decls.h"
undefined4 FUN_8c262078_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = ar5;
  uStack_c = ar6;
  iVar1 = FUN_8c26270c(ar5,ar6,&uStack_14,&iStack_18);
  if (iVar1 < 0) {
    return 0xfffffffd;
  }
  *(undefined4 *)(ar4 + 0xc) = uStack_14;
  *(int *)(ar4 + 0x10) = iStack_18;
  *(int *)(ar4 + 0x14) = iStack_18 << 0xb;
  return 0;
}

__asm__(".globl _FUN_8c262078\n.set _FUN_8c262078, _FUN_8c262078_def\n");
