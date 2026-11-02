#include "../decls.h"
undefined4 FUN_8c010df4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_fr5;
  uint in_fr4;
  
  if ((in_fr4 & 0x7ff00000) != 0x7ff00000) {
    return 0;
  }
  if (((in_fr4 & 0xfffff) == 0) && (in_fr5 == 0)) {
    return 2;
  }
  return 1;
}

__asm__(".globl _FUN_8c010df4\n.set _FUN_8c010df4, _FUN_8c010df4_def\n");
