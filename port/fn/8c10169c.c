#include "../decls.h"
int FUN_8c10169c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  memset(ar4 + 0x190,0,0x400,ar7);
  *(undefined1 *)(0x598 + ar4) = 0;
  *(undefined4 *)(0x590 + ar4) = 0;
  *(undefined4 *)(0x594 + ar4) = 0;
  iVar1 = 0x59c;
  *(undefined4 *)(0x59c + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c10169c\n.set _FUN_8c10169c, _FUN_8c10169c_def\n");
