#include "../decls.h"
int FUN_8c030550_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x674;
  *(undefined4 *)(0x674 + ar4 + ar5 * 4) = ar6;
  return iVar1;
}

__asm__(".globl _FUN_8c030550\n.set _FUN_8c030550, _FUN_8c030550_def\n");
