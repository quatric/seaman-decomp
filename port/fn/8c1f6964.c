#include "../decls.h"
undefined4 FUN_8c1f6964_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = ar5 * 0x124 + ar4 + 0x210;
  if (*(int *)(iVar1 + 0xc) == 1) {
    FUN_8c1f69d6(ar4,ar5,ar6,ar7,1);
    *(undefined4 *)(iVar1 + 0xc) = 2;
    return 0;
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f6964\n.set _FUN_8c1f6964, _FUN_8c1f6964_def\n");
