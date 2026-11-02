#include "../decls.h"
undefined4 FUN_8c25b334_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint *puVar1;
  undefined4 in_r0;
  
  puVar1 = 0x8c4aa6d0;
  *(undefined4 *)0x8c4aa6cc = ar4;
  *puVar1 = ar5 & 0xfffff800;
  return in_r0;
}

__asm__(".globl _FUN_8c25b334\n.set _FUN_8c25b334, _FUN_8c25b334_def\n");
