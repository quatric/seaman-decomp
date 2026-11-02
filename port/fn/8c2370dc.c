#include "../decls.h"
uint FUN_8c2370dc_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = *(undefined4 *)0x8c4ab25c;
  *(uint *)*(undefined4 *)0x8c4ab260 = ar4 & 0x3ffffff | uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c2370dc\n.set _FUN_8c2370dc, _FUN_8c2370dc_def\n");
