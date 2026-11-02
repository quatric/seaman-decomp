#include "../decls.h"
undefined4 FUN_8c2377e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint a4;
  
  a4 = 0;
  while( true ) {
    if (*(uint *)(DAT_8c277b04 + 4) <= a4) {
      return 1;
    }
    iVar1 = FUN_8c2378a6(a4,ar5,ar6,ar7);
    if (iVar1 < 0) break;
    a4 = a4 + 1;
  }
  _DAT_8c4aa6ac = a4;
  return 0xffffffff;
}

__asm__(".globl _FUN_8c2377e4\n.set _FUN_8c2377e4, _FUN_8c2377e4_def\n");
