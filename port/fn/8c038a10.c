#include "../decls.h"
undefined4 FUN_8c038a10_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  *(undefined4 *)(ar4 + 0x5c) = in_fr4;
  *(undefined4 *)(ar4 + 0x60) = in_fr5;
  *(undefined4 *)(ar4 + 100) = in_fr6;
  return 1;
}

__asm__(".globl _FUN_8c038a10\n.set _FUN_8c038a10, _FUN_8c038a10_def\n");
