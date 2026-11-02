#include "../decls.h"
undefined4 FUN_8c1f9284_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int aiStack_10 [2];
  
  do {
    g2dma_1f9270(aiStack_10,ar5,ar6,ar7);
  } while (aiStack_10[0] != 1);
  *(int *)(DAT_8c273a28 + 0x10c) = *(int *)(DAT_8c273a28 + 0x10c) + 1;
  return 0;
}

__asm__(".globl _FUN_8c1f9284\n.set _FUN_8c1f9284, _FUN_8c1f9284_def\n");
