#include "../decls.h"
int FUN_8c0b6b10_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  
  *ar5 = *(undefined1 *)(0x98 + ar4);
  cVar1 = *(char *)(0x9c + ar4);
  *(int *)(ar5 + 4) = (int)cVar1;
  return (int)cVar1;
}

__asm__(".globl _FUN_8c0b6b10\n.set _FUN_8c0b6b10, _FUN_8c0b6b10_def\n");
