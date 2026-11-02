#include "../decls.h"
int FUN_8c0e84f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  FUN_8c235ee4(ar4,ar5,ar6,ar7);
  FUN_8c0194c0(ar4 + 0x228,ar5,ar6,ar7);
  iVar1 = 0x440;
  *(undefined4 *)(0x440 + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c0e84f8\n.set _FUN_8c0e84f8, _FUN_8c0e84f8_def\n");
