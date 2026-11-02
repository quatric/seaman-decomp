#include "../decls.h"
undefined4 s_GRAPHICS_ENV_0d9912_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  (*(code *)(&FUN_8c020a70))
            (ar5,(&DATA_8c13f7c0) + 0x4b4,
             (&DATA_8c13f7c0) + 0x10b,ar4);
  (*(code *)(&FUN_8c020b68))
            (ar5,(&DATA_8c13f7c0) + 0x4b4,
             (&DATA_8c13f7c0) + 0x10b,ar4);
  (*(code *)(&FUN_8c020e48))
            (ar5,(&DATA_8c13f7c0) + 0x551,
             (&DATA_8c13f7c0) + 0x10b,ar4);
  for (uVar1 = 0; uVar1 < 7; uVar1 = uVar1 + 1) {
    (*(code *)(&FUN_8c020c60))
              (ar5,*(undefined4 *)((&DATA_8c13f394) + uVar1 * 4),
               (&DATA_8c13f7c0) + 0x10b,ar4);
  }
  return 7;
}

__asm__(".globl _s_GRAPHICS_ENV_0d9912\n.set _s_GRAPHICS_ENV_0d9912, _s_GRAPHICS_ENV_0d9912_def\n");
