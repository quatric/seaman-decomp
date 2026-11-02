#include "../decls.h"
undefined4 FUN_8c1f141a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0;
  uStack_18 = ar4;
  uStack_14 = ar5;
  uStack_10 = ar6;
  uVar1 = syscall_1f10d8(0x14,&uStack_18,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1f141a\n.set _FUN_8c1f141a, _FUN_8c1f141a_def\n");
