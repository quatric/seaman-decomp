#include "../decls.h"
int FUN_8c10c99c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *ar4;
  iVar1 = FUN_8c10c986(ar4,ar5,ar6,ar7);
  return iVar1 + (*(int *)(0x88 + iVar2) + 1) * 4 + (*(int *)(0x90 + iVar2) + 1) * 4
  ;
}

__asm__(".globl _FUN_8c10c99c\n.set _FUN_8c10c99c, _FUN_8c10c99c_def\n");
