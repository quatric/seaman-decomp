#include "../decls.h"
undefined4 FUN_8c0c90d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 300) = in_fr4;
  *(undefined4 *)(ar4 + 0x130) = in_fr5;
  return 0x130;
}

__asm__(".globl _FUN_8c0c90d0\n.set _FUN_8c0c90d0, _FUN_8c0c90d0_def\n");
