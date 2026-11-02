#include "../decls.h"
int FUN_8c239150_def(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1;
    iVar1 = iVar2 + 1;
  } while ((*(uint *)(iVar2 * 0xc + *ar4 + 4) & 0xffff) != ar5);
  return iVar2;
}

__asm__(".globl _FUN_8c239150\n.set _FUN_8c239150, _FUN_8c239150_def\n");
