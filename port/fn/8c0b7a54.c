#include "../decls.h"
int FUN_8c0b7a54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c1027c0(ar4 + 0xac,ar5,ar6,ar7);
  *(undefined1 *)(0xa0 + ar4) = *(undefined4 *)0x8c436548;
  *(undefined2 *)(0xa2 + ar4) = 0;
  *(undefined2 *)(0xac + ar4) = 0;
  *(undefined2 *)(0xae + ar4) = 0;
  *(undefined2 *)(0xb0 + ar4) = 0;
  *(undefined2 *)(0xb2 + ar4) = 0;
  *(undefined1 *)(0xb4 + ar4) = 0;
  FUN_8c0b936c(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c0b7a54\n.set _FUN_8c0b7a54, _FUN_8c0b7a54_def\n");
