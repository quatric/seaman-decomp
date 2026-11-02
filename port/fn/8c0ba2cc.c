#include "../decls.h"
int FUN_8c0ba2cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0b7a54(ar4,ar5,ar6,ar7);
  *(undefined4 *)(0x7cc + ar4) = 0;
  *(undefined4 *)(0x7d0 + ar4) = 0;
  *(undefined4 *)(0x7d8 + ar4) = 0;
  *(undefined4 *)(0x7d4 + ar4) = 0;
  *(undefined4 *)(0x7dc + ar4) = 0;
  *(undefined4 *)(0x7e0 + ar4) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0ba2cc\n.set _FUN_8c0ba2cc, _FUN_8c0ba2cc_def\n");
