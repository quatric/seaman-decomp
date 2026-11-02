#include "../decls.h"
int FUN_8c0fa688_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  
  ar4_00 = FUN_8c01f520(0x8c3dd7dc,ar5,ar6,ar7);
  FUN_8c01c944(ar4_00,ar5,ar6,ar7);
  iVar1 = 0x8913c;
  *(undefined4 *)(0x8913c + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c0fa688\n.set _FUN_8c0fa688, _FUN_8c0fa688_def\n");
