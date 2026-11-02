#include "../decls.h"
int FUN_8c0b936c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined1 *)(0xa1 + (int)ar4) = *(undefined4 *)0x8c436548;
  *(undefined2 *)(0xa4 + (int)ar4) = 0;
  *(undefined4 *)(0xa8 + (int)ar4) = 0;
  *(undefined4 *)(0xb8 + (int)ar4) = 0;
  *ar4 = 0;
  *(undefined4 *)(0x88 + (int)ar4) = 0;
  iVar1 = 0x84;
  *(undefined4 *)(0x84 + (int)ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c0b936c\n.set _FUN_8c0b936c, _FUN_8c0b936c_def\n");
