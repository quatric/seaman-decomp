#include "../decls.h"
undefined4 FUN_8c26b212_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 in_r0;
  
  puVar1 = (&DATA_8c278690);
  if (*(int *)(&DATA_8c278690) == 0) {
    in_r0 = memset(0x8c4bf038,0,(int)0x480);
  }
  *(int *)puVar1 = *(int *)puVar1 + 1;
  return in_r0;
}

__asm__(".globl _FUN_8c26b212\n.set _FUN_8c26b212, _FUN_8c26b212_def\n");
