#include "../decls.h"
undefined4 FUN_8c237370_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(uint *)(0x8c4ab238 + 8) = *(uint *)(0x8c4ab238 + 8) & 0x3f800ff | ar4 & 0xfc07ff00;
  return in_r0;
}

__asm__(".globl _FUN_8c237370\n.set _FUN_8c237370, _FUN_8c237370_def\n");
