#include "../decls.h"
int FUN_8c02c310_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + (short)ar5 * 2 + (int)(short)ar6 + 0x51);
}

__asm__(".globl _FUN_8c02c310\n.set _FUN_8c02c310, _FUN_8c02c310_def\n");
