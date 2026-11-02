#include "../decls.h"
undefined4 g2dma_1f9270_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = (uint)((*(undefined4 *)0xa05f688c & 0x10) == 0);
  return 0;
}

__asm__(".globl _g2dma_1f9270\n.set _g2dma_1f9270, _g2dma_1f9270_def\n");
