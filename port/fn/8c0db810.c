#include "../decls.h"
int FUN_8c0db810_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  int ar5_00;
  int iVar1;
  
  ar5_00 = ar5;
  ar4_00 = FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7);
  iVar1 = 1;
  while (ar4_00 != ar5) {
    ar4_00 = list_node_next(ar4_00,ar5_00,ar6,ar7);
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0db810\n.set _FUN_8c0db810, _FUN_8c0db810_def\n");
