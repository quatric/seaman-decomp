#include "../decls.h"
undefined4 FUN_8c1f14de_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = ar4;
  uStack_14 = ar5;
  uStack_10 = ar6;
  uStack_c = ar7;
  uVar1 = syscall_1f10d8(0x24,&uStack_18,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1f14de\n.set _FUN_8c1f14de, _FUN_8c1f14de_def\n");
