#include "../decls.h"
int FUN_8c1f6992_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  int iVar1;
  
  iVar1 = 0x210 + ar4;
  for (a5 = 0; a5 < *(int *)(0x208 + ar4); a5 = a5 + 1) {
    if ((*(int *)(iVar1 + 0xc) != 0) && (*(int *)(iVar1 + 0x10) <= ar5)) {
      FUN_8c1f6964(ar4,a5,ar6,ar7);
    }
    iVar1 = iVar1 + 0x124;
  }
  return (int)0x208;
}

__asm__(".globl _FUN_8c1f6992\n.set _FUN_8c1f6992, _FUN_8c1f6992_def\n");
