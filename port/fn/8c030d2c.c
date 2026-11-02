#include "../decls.h"
undefined4 FUN_8c030d2c_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *ar5 = (char)*(undefined4 *)(ar4 + 100);
  ar5[1] = 3;
  uVar1 = *(undefined4 *)(ar4 + 0x6c);
  *(undefined4 *)(ar5 + 4) = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c030d2c\n.set _FUN_8c030d2c, _FUN_8c030d2c_def\n");
