#include "../decls.h"
int FUN_8c0a6430_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  FUN_8c032160(ar4,ar5,ar6,ar7);
  *(undefined4 *)(0x21b8 + ar4) = 0;
  *(undefined4 *)(0x21bc + ar4) = 0;
  iVar1 = 0x21b4;
  *(undefined4 *)(0x21b4 + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c0a6430\n.set _FUN_8c0a6430, _FUN_8c0a6430_def\n");
