#include "../decls.h"
undefined4 FUN_8c11eb6c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0;
  }
  return *(undefined4 *)(0x104 + ar4);
}

__asm__(".globl _FUN_8c11eb6c\n.set _FUN_8c11eb6c, _FUN_8c11eb6c_def\n");
