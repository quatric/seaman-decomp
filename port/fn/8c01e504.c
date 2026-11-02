#include "../decls.h"
int FUN_8c01e504_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c01a308(ar4,ar5,ar6,ar7);
  FUN_8c01ca24(ar4 + 0x384c,ar5,ar6,ar7);
  *(undefined4 *)(0xa510 + ar4) = 1;
  *(undefined4 *)(0xa514 + ar4) = *(undefined4 *)(0xa510 + ar4);
  *(undefined4 *)(0xa518 + ar4) = 0;
  *(undefined4 *)(0xa520 + ar4) = 1;
  return ar4;
}

__asm__(".globl _FUN_8c01e504\n.set _FUN_8c01e504, _FUN_8c01e504_def\n");
