#include "../decls.h"
undefined4 FUN_8c01c8c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1f3d28(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (*(code *)(&FUN_8c1f3c78))
                      (*(undefined4 *)(ar4 + 8),ar5,*(undefined4 *)(ar4 + 0x14),ar7);
    if (iVar1 == -1) {
      uVar2 = 2;
    }
    else if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c01c8c8\n.set _FUN_8c01c8c8, _FUN_8c01c8c8_def\n");
