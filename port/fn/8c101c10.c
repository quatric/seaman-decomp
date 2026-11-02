#include "../decls.h"
uint FUN_8c101c10_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = 0x61a1c;
  if (((0x61a1c < ar5) && (uVar1 = 0x82334, 0x82334 < ar5)) &&
     (uVar1 = 0xc349c, ar5 <= 0xc349c)) {
    uVar1 = 0xa2be8;
  }
  *(uint *)(0xbc + ar4) = uVar1;
  uVar1 = *(uint *)(0xbc + ar4) >> 3;
  *(undefined4 *)0x8c4413c0 = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c101c10\n.set _FUN_8c101c10, _FUN_8c101c10_def\n");
