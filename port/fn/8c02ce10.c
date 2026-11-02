#include "../decls.h"
undefined4 FUN_8c02ce10_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar4 + 0x10) - ar5;
  if (iVar1 < 1) {
    *(undefined4 *)(ar4 + 8) = *(undefined4 *)(ar4 + 0x10);
    return *(undefined4 *)(ar4 + 0x10);
  }
  *(int *)(ar4 + 8) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c02ce10\n.set _FUN_8c02ce10, _FUN_8c02ce10_def\n");
