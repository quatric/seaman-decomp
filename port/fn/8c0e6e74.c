#include "../decls.h"
undefined4 s_GRAPHICS_ENV_0e6e78_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)(&FUN_8c020a70))
            (ar5,(&DATA_8c13f7c0) + 0x888,
             (&DATA_8c13f7c0) + 0x10b,ar4);
  uVar1 = (*(code *)(&FUN_8c020b68))
                    (ar5,(&DATA_8c13f7c0) + 0x888,
                     (&DATA_8c13f7c0) + 0x10b,ar4);
  return uVar1;
}

__asm__(".globl _s_GRAPHICS_ENV_0e6e78\n.set _s_GRAPHICS_ENV_0e6e78, _s_GRAPHICS_ENV_0e6e78_def\n");
