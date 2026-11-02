#include "../decls.h"
undefined4 FUN_8c1f5a86_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_8 [8];
  
  piVar1 = (int *)FUN_8c1f5a5e(auStack_8,ar5,ar6,ar7);
  iVar2 = 0;
  while( true ) {
    if (*piVar1 <= iVar2) {
      return 0xfffffffd;
    }
    if (ar4 == piVar1[iVar2 * 2 + 2]) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c1f5a86\n.set _FUN_8c1f5a86, _FUN_8c1f5a86_def\n");
