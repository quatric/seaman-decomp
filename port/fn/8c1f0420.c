#include "../decls.h"
undefined4 FUN_8c1f0420_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (ar4 * 2 + *(int *)(_DAT_8c4727b4 + 0xfc0)) * 0xc;
  *(undefined4 *)(&DAT_8c470c28 + iVar1) = ar5;
  *(undefined4 *)(&DAT_8c470c24 + iVar1) = ar6;
  *(int *)(&DAT_8c470c20 + iVar1) = ar4;
  return 0;
}

__asm__(".globl _FUN_8c1f0420\n.set _FUN_8c1f0420, _FUN_8c1f0420_def\n");
