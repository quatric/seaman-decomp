#include "../decls.h"
int FUN_8c1f63f2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c1f0392(ar4,ar5,ar6,ar7);
  if (0 < iVar1) {
    iVar1 = *(int *)(&DAT_8c26c7d0 + iVar1 * 4);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1f63f2\n.set _FUN_8c1f63f2, _FUN_8c1f63f2_def\n");
