#include "../decls.h"
undefined4 FUN_8c25b5b4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 in_r0;
  
  puVar1 = 0x8c4aa6ac;
  *(undefined4 *)0x8c4aa6ac = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return in_r0;
}

__asm__(".globl _FUN_8c25b5b4\n.set _FUN_8c25b5b4, _FUN_8c25b5b4_def\n");
