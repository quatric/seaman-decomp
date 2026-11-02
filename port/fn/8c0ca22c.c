#include "../decls.h"
undefined4 s_GRAPHICS_ENV_0ca230_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined *ar6_00;
  int ar7_00;
  
  ar5_00 = ar5;
  if (*(int *)(0x2d1b8 + ar4) != -1) {
    ar5_00 = *(undefined4 *)(0x2d1b8 + ar4);
    pack_release_entry_handle(0x8c2b59d0,ar5_00,ar6,ar7);
  }
  s_Failed_s_015312(0x8c437028,ar5_00,ar6,ar7);
  (*(code *)(&FUN_8c020a70))
            (0x8c3eb334,(&DATA_8c13d004) + 0x1b7,
             (&DATA_8c13d004) + 0x1be,ar4);
  ar6_00 = (&DATA_8c13d004) + 0x1be;
  ar7_00 = ar4;
  FUN_8c020b68(0x8c3eb334,(&DATA_8c13d004) + 0x1b7,ar6_00,ar4)
  ;
  FUN_8c0c9738(ar4,ar5,ar6_00,ar7_00);
  return 0;
}

__asm__(".globl _s_GRAPHICS_ENV_0ca230\n.set _s_GRAPHICS_ENV_0ca230, _s_GRAPHICS_ENV_0ca230_def\n");
