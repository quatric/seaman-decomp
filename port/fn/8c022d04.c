#include "../decls.h"
undefined4 * FUN_8c022d04_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  *ar4 = in_fr4;
  ar4[1] = in_fr5;
  ar4[2] = in_fr6;
  return ar4 + 1;
}

__asm__(".globl _FUN_8c022d04\n.set _FUN_8c022d04, _FUN_8c022d04_def\n");
