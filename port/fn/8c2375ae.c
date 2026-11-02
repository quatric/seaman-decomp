#include "../decls.h"
uint * FUN_8c2375ae_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint *puVar1;
  
  puVar1 = 0x8c4aa4f0;
  if ((*(undefined4 *)0x8c4aa4f0 & 0x8000) != 0) {
    ar4 = *(undefined4 *)0x8c4aa53c;
  }
  *(uint *)(0x8c4ab238 + 8) =
       *(uint *)(0x8c4ab238 + 8) & 0x3ffffff | ar4 << 0x12 & 0xfc000000;
  return puVar1;
}

__asm__(".globl _FUN_8c2375ae\n.set _FUN_8c2375ae, _FUN_8c2375ae_def\n");
