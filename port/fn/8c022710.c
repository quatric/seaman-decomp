#include "../decls.h"
undefined4 FUN_8c022710_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(ar5 * 0x10 + ar4) == 1) {
    iVar2 = (*(code *)(&FUN_8c26813c))
                      (*(undefined4 *)(ar4 + ar5 * 0x10 + 0xc),*(undefined4 *)(ar4 + ar5 * 0x10 + 4)
                       ,ar6,1);
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c022710\n.set _FUN_8c022710, _FUN_8c022710_def\n");
