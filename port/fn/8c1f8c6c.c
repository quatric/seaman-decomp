#include "../decls.h"
undefined4 g2dma_1f8c6c_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = (uint)((*(undefined4 *)0xa05f688c & 1) == 0);
  return 0;
}

__asm__(".globl _g2dma_1f8c6c\n.set _g2dma_1f8c6c, _g2dma_1f8c6c_def\n");
