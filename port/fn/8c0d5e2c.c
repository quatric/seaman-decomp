#include "../decls.h"
undefined4 FUN_8c0d5e2c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*(undefined4 *)0x8c43783c == 1) {
    (*(code *)(&FUN_8c257120))
              ((uint)((undefined1 *)2)[0x8c437840] << 0x10 | 0xff000000 | (uint)((undefined1 *)1)[0x8c437840] << 8 |
               (uint)*(undefined4 *)0x8c437840,ar5,ar6,ar7);
    *(undefined4 *)0x8c43783c = 0;
  }
  uVar1 = FUN_8c235f84(0x8c43786c,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0d5e2c\n.set _FUN_8c0d5e2c, _FUN_8c0d5e2c_def\n");
