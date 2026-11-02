#include "../decls.h"
undefined4 * FUN_8c019560_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  *(undefined4 *)(ar4 + 0x44) = in_fr4;
  *(undefined4 *)(ar4 + 0x48) = in_fr5;
  *(undefined4 *)(ar4 + 0x4c) = in_fr6;
  return (undefined4 *)(ar4 + 0x48);
}

__asm__(".globl _FUN_8c019560\n.set _FUN_8c019560, _FUN_8c019560_def\n");
