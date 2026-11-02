#include "../decls.h"
int FUN_8c02e438_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(char *)(ar4 + 9) < '\x01') {
    *(char *)(ar4 + 9) = *(char *)(ar4 + 9) + '\x01';
    iVar1 = *(int *)(ar4 + 4) + 1;
    *(int *)(ar4 + 4) = iVar1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02e438\n.set _FUN_8c02e438, _FUN_8c02e438_def\n");
