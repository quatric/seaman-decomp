#include "../decls.h"
uint FUN_8c035ac8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c035ab4(*(undefined4 *)(ar4 + 0x10),ar5,ar6,ar7);
  return (uint)((char)uVar1 == '\x02');
}

__asm__(".globl _FUN_8c035ac8\n.set _FUN_8c035ac8, _FUN_8c035ac8_def\n");
