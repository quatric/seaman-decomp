#include "../decls.h"
undefined4 FUN_8c0de18c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  s_GRAPHICS_ENV_0e16a0(ar4,ar5,ar6,ar7);
  s_GRAPHICS_COMMON_0d377a(ar4 + 0x10ac,ar5,ar6,ar7);
  uVar1 = s_GRAPHICS_ENV_0d0bd2(ar4 + 0x13b8c,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0de18c\n.set _FUN_8c0de18c, _FUN_8c0de18c_def\n");
