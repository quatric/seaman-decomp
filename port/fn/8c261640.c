#include "../decls.h"
undefined4 FUN_8c261640_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*(char *)(ar4 + 1) == 2) {
    uVar1 = FUN_8c2614d6(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  return (int)*(char *)(ar4 + 1);
}

__asm__(".globl _FUN_8c261640\n.set _FUN_8c261640, _FUN_8c261640_def\n");
