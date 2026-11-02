#include "../decls.h"
undefined4 FUN_8c11c99a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(short *)(ar4 + 0x3e) != (short)ar5) {
    *(short *)(ar4 + 0x3e) = (short)ar5;
    if (*(int *)(0xc8 + ar4) != 0) {
      uVar1 = (**(code **)(0xc8 + ar4))((short)ar5,0xf4 + ar4);
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c11c99a\n.set _FUN_8c11c99a, _FUN_8c11c99a_def\n");
