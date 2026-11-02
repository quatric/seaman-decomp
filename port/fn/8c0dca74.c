#include "../decls.h"
undefined4 FUN_8c0dca74_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  *(undefined4 *)(ar4 + 0xa68) = in_fr4;
  *(undefined4 *)(ar4 + 0xa6c) = in_fr5;
  *(undefined4 *)(ar4 + 0xa70) = in_fr6;
  return 0xa70;
}

__asm__(".globl _FUN_8c0dca74\n.set _FUN_8c0dca74, _FUN_8c0dca74_def\n");
