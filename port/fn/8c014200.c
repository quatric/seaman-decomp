#include "../decls.h"
uint rand_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)0x7fff;
  uVar2 = *(int *)(&DATA_8c12c4e8) * 0x41c64e6d + (int)0x3039;
  *(uint *)(&DATA_8c12c4e8) = uVar2;
  return uVar2 >> 0x10 & uVar1;
}

__asm__(".globl _rand\n.set _rand, _rand_def\n");
