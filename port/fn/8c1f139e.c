#include "../decls.h"
undefined4 FUN_8c1f139e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0;
  uStack_10 = ar4;
  uVar1 = syscall_1f10d8(0x1b,&uStack_10,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1f139e\n.set _FUN_8c1f139e, _FUN_8c1f139e_def\n");
