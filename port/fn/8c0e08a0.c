#include "../decls.h"
undefined4 FUN_8c0e08a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 0x10ac) = in_fr4;
  return 0x10ac;
}

__asm__(".globl _FUN_8c0e08a0\n.set _FUN_8c0e08a0, _FUN_8c0e08a0_def\n");
