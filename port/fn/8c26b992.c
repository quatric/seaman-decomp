#include "../decls.h"
undefined4 FUN_8c26b992_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 in_r0;
  
  puVar1 = (&DATA_8c278700);
  if (*(int *)(&DATA_8c278700) == 0) {
    in_r0 = memset(0x8c4c00b8,0,(int)0xc00);
  }
  *(int *)puVar1 = *(int *)puVar1 + 1;
  return in_r0;
}

__asm__(".globl _FUN_8c26b992\n.set _FUN_8c26b992, _FUN_8c26b992_def\n");
