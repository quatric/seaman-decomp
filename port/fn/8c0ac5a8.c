#include "../decls.h"
int FUN_8c0ac5a8_def(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  
  cVar1 = *(char *)(0x98 + ar4);
  *ar5 = cVar1;
  return (int)cVar1;
}

__asm__(".globl _FUN_8c0ac5a8\n.set _FUN_8c0ac5a8, _FUN_8c0ac5a8_def\n");
