#include "../decls.h"
undefined4 FUN_8c0d4f3c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  ((undefined1 *)2)[0x8c437840] = 0x32;
  ((undefined1 *)1)[0x8c437840] = 0x32;
  *(undefined4 *)0x8c437840 = 0x1f;
  *(undefined4 *)0x8c43783c = 1;
  uVar1 = FUN_8c0d2fc0(0xffffffff,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0d4f3c\n.set _FUN_8c0d4f3c, _FUN_8c0d4f3c_def\n");
