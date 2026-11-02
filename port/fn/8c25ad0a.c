#include "../decls.h"
undefined4 FUN_8c25ad0a_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  if (ar4 == 0) {
    return 0xffffffff;
  }
  FUN_8c25ad98(ar5,(*(uint *)(ar4 + 0x34) | 0xa4000000) + ar6,ar7,ar7);
  return 1;
}

__asm__(".globl _FUN_8c25ad0a\n.set _FUN_8c25ad0a, _FUN_8c25ad0a_def\n");
