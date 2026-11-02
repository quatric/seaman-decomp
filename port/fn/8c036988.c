#include "../decls.h"
undefined4 FUN_8c036988_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  *(undefined4 *)(ar4 + 0x30) = in_fr4;
  *(undefined4 *)(ar4 + 0x34) = in_fr5;
  *(undefined4 *)(ar4 + 0x38) = in_fr6;
  return 1;
}

__asm__(".globl _FUN_8c036988\n.set _FUN_8c036988, _FUN_8c036988_def\n");
