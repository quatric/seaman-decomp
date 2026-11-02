#include "../decls.h"
undefined4 FUN_8c01d71c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)(&FUN_8c01d4c4))
                    (ar4,2,(&DATA_8c12fb7c) + 0x1c,
                     (&DATA_8c12fb7c) + 0x1c);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c01d71c\n.set _FUN_8c01d71c, _FUN_8c01d71c_def\n");
