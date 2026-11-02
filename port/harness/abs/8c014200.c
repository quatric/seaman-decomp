#include "../../decls.h"
uint rand_def(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)0x7fff;
  uVar2 = *(int *)(&(*(undefined1 *)0x8c12c4e8)) * 0x41c64e6d + (int)0x3039;
  *(uint *)(&(*(undefined1 *)0x8c12c4e8)) = uVar2;
  return uVar2 >> 0x10 & uVar1;
}

__asm__(".globl _rand\n.set _rand, _rand_def\n");
