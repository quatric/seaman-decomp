#include "../decls.h"
uint FUN_8c26175c_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint *puVar1;
  uint uVar2;
  
  FUN_8c2616a8(ar4,ar5,ar6,ar7);
  puVar1 = 0xff00001c;
  *(undefined4 *)0xff00001c = ar4 & (int)(int)0xfffff7ff | (int)0x800;
  uVar2 = *puVar1 & 0xfffffff7 | 8;
  *puVar1 = uVar2;
  return uVar2;
}

__asm__(".globl _FUN_8c26175c\n.set _FUN_8c26175c, _FUN_8c26175c_def\n");
