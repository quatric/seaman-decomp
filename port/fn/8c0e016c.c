#include "../decls.h"
undefined4 FUN_8c0e016c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c0d50a0((int)ar4 + 0x10ac,ar5,ar6,ar7);
  s_GRAPHICS_ENV_0d0bd2((int)ar4 + 0x13b8c,ar5,ar6,ar7);
  s_Failed_to_set_texture_wrap_0d14b0((int)ar4 + 0x13b8c,ar5,ar6,ar7);
  *(undefined4 *)(0x1024 + (int)ar4) = 3;
  uVar1 = 0;
  FUN_8c0d0538((int)ar4 + 0x13b24,0,ar6,ar7);
  FUN_8c0d0714((int)ar4 + 0x13b24,uVar1,ar6,ar7);
  (**(code **)(0x15c + *ar4))(ar4,uVar1,ar6,ar7);
  *(undefined4 *)(0x9d4 + (int)ar4) = 0;
  uVar1 = FUN_8c0d6980((int)ar4 + 0xa68,uVar1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0e016c\n.set _FUN_8c0e016c, _FUN_8c0e016c_def\n");
