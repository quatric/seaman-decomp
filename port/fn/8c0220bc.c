#include "../decls.h"
int FUN_8c0220bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)(0x9ec94 + ar4) = 0xffffffff;
  iVar1 = 0x9ec14;
  *(undefined1 *)(0x9ec14 + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c0220bc\n.set _FUN_8c0220bc, _FUN_8c0220bc_def\n");
