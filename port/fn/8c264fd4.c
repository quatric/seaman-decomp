#include "../decls.h"
undefined4 FUN_8c264fd4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(ar4 + 0xc) = 0;
  uVar1 = memset(ar4 + 0x28,0,8);
  return uVar1;
}

__asm__(".globl _FUN_8c264fd4\n.set _FUN_8c264fd4, _FUN_8c264fd4_def\n");
