#include "../decls.h"
int FUN_8c0b6af8_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined1 *)(0x98 + ar4) = *ar5;
  iVar1 = 0x9c;
  *(char *)(0x9c + ar4) = (char)*(undefined4 *)(ar5 + 4);
  return iVar1;
}

__asm__(".globl _FUN_8c0b6af8\n.set _FUN_8c0b6af8, _FUN_8c0b6af8_def\n");
