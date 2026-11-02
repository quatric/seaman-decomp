#include "../decls.h"
undefined4 * pack_ctor_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  FUN_8c022190(ar4 + 1,ar5,ar6,ar7);
  *ar4 = 0;
  *(undefined1 *)(0x9ec14 + (int)ar4) = 0;
  *(undefined4 *)(0x9ec94 + (int)ar4) = 0xffffffff;
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    *(undefined4 *)((int)ar4 + 0x9ec98 + iVar1 * 8) = 0xffffffff;
  }
  return ar4;
}

__asm__(".globl _pack_ctor\n.set _pack_ctor, _pack_ctor_def\n");
