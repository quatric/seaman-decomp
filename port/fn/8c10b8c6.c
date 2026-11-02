#include "../decls.h"
undefined4 FUN_8c10b8c6_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = ar4[1];
  uVar2 = 0;
  uStack_10 = 0;
  iVar1 = FUN_8c11ce44(*ar4,0,ar6,ar7);
  if (iVar1 != 0) {
    uVar2 = FUN_8c11cd44(*ar4,0,ar6,ar7);
  }
  (*(code *)(uint)ar4[3])(ar4,&uStack_14,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c10b8c6\n.set _FUN_8c10b8c6, _FUN_8c10b8c6_def\n");
