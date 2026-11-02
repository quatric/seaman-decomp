#include "../decls.h"
uint FUN_8c016324_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  *(undefined4 *)(ar4 + 8) = ar5;
  uVar1 = 0x80000020;
  *(uint *)(ar4 + 0x10) = *(uint *)(ar4 + 0x10) | 0x80000020;
  return uVar1;
}

__asm__(".globl _FUN_8c016324\n.set _FUN_8c016324, _FUN_8c016324_def\n");
