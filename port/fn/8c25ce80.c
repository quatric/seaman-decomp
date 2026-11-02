#include "../decls.h"
int FUN_8c25ce80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (*(int *)(&DAT_8c277d80 + _DAT_8c4aa05c * 4) + *(int *)(&DAT_8c277d80 + _DAT_8c4aa060 * 4)
          + *(int *)(&DAT_8c277d80 + _DAT_8c4aa064 * 4) +
          *(int *)(&DAT_8c277d80 + _DAT_8c4aa068 * 4) + *(int *)(&DAT_8c277d80 + _DAT_8c4aa06c * 4))
         * ar4 * 4;
}

__asm__(".globl _FUN_8c25ce80\n.set _FUN_8c25ce80, _FUN_8c25ce80_def\n");
