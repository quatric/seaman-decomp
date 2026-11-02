#include "../decls.h"
undefined4 FUN_8c031748_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0xa4) = 0;
  *(undefined4 *)(ar4 + 0x94) = 0;
  return 0x94;
}

__asm__(".globl _FUN_8c031748\n.set _FUN_8c031748, _FUN_8c031748_def\n");
