#include "../decls.h"
int FUN_8c030870_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x770;
  *(undefined4 *)(0x770 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c030870\n.set _FUN_8c030870, _FUN_8c030870_def\n");
