#include "../decls.h"
undefined4 FUN_8c01ade8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (0x80 <= iVar1) {
      return 0xffffffff;
    }
    if (*(int *)(0x244c + iVar1 * 0x28 + ar4) == ar5) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01ade8\n.set _FUN_8c01ade8, _FUN_8c01ade8_def\n");
