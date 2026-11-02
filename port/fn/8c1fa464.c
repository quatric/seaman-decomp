#include "../decls.h"
uint FUN_8c1fa464_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_r0;
  uint uVar1;
  uint in_r3;
  undefined4 *puVar2;
  
  uVar1 = in_r0 & in_r3 | 0x60;
  for (puVar2 = (undefined4 *)*(undefined4 *)0x8c475e10; puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[1]) {
    uVar1 = (*(code *)*puVar2)(puVar2[2],ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1fa464\n.set _FUN_8c1fa464, _FUN_8c1fa464_def\n");
