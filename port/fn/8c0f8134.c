#include "../decls.h"
int FUN_8c0f8134_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  FUN_8c0fa688(ar4,ar5,ar6,ar7);
  FUN_8c0fa910(ar4 + 0x1054,ar5,ar6,ar7);
  iVar1 = 0x1014;
  *(undefined4 *)(0x1014 + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c0f8134\n.set _FUN_8c0f8134, _FUN_8c0f8134_def\n");
