#include "../decls.h"
undefined4 s_GRAPHICS_ENV_0d076c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)(&FUN_8c020a70))
            (ar5,(&DATA_8c13d45c) + 0x10,(&DATA_8c13d45c) + 0x21,ar4);
  uVar1 = (*(code *)(&FUN_8c020b68))
                    (ar5,(&DATA_8c13d45c) + 0x10,(&DATA_8c13d45c) + 0x21
                     ,ar4);
  return uVar1;
}

__asm__(".globl _s_GRAPHICS_ENV_0d076c\n.set _s_GRAPHICS_ENV_0d076c, _s_GRAPHICS_ENV_0d076c_def\n");
