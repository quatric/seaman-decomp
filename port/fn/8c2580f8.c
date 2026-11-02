#include "../decls.h"
uint g2dma_2580f8_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = *(undefined4 *)0xa05f688c;
  *ar4 = (uint)((uVar1 & 0x20) == 0);
  return uVar1;
}

__asm__(".globl _g2dma_2580f8\n.set _g2dma_2580f8, _g2dma_2580f8_def\n");
