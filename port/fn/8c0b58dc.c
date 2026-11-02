#include "../decls.h"
int FUN_8c0b58dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x314;
  *(undefined4 *)(0x314 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0b58dc\n.set _FUN_8c0b58dc, _FUN_8c0b58dc_def\n");
