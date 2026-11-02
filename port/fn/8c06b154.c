#include "../decls.h"
undefined4 FUN_8c06b154_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar4 < 7) {
    uVar1 = FUN_8c06b430(*(undefined4 *)(ar4 * 8 + 0x8c2809b8 + 4),ar5,ar6,ar7);
  }
  else if (ar4 < 0xd) {
    uVar1 = (*(code *)(&FUN_8c06b430))
                      (*(undefined4 *)((ar4 + -7) * 8 + 0x8c2809fc + 4),ar5,ar6,ar7);
  }
  else {
    uVar1 = (*(code *)(&FUN_8c06b430))
                      (*(undefined4 *)((ar4 + -1) * 8 + 0x8c280a38 + 4),ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c06b154\n.set _FUN_8c06b154, _FUN_8c06b154_def\n");
