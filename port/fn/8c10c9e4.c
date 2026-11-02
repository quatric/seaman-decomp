#include "../decls.h"
int FUN_8c10c9e4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *ar4;
  iVar1 = FUN_8c10c9c8(ar4,ar5,ar6,ar7);
  return iVar1 + (*(int *)(0x8c + iVar2) + 1) * 4 +
                 (*(int *)(0x8c + 8 + iVar2) + 1) * 4;
}

__asm__(".globl _FUN_8c10c9e4\n.set _FUN_8c10c9e4, _FUN_8c10c9e4_def\n");
