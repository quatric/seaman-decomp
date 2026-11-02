#include "../decls.h"
undefined4 FUN_8c0c90ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0c86f4(ar4,ar5,ar6,ar7);
  if (*(int *)(&DATA_8c13cbf4) != -1) {
    (*(code *)(&pack_release_entry_handle))
              (0x8c2b59d0,*(undefined4 *)(&DATA_8c13cbf4),ar6,ar7);
    *(undefined4 *)(&DATA_8c13cbf4) = 0xffffffff;
  }
  if (2 < *(short *)(0x2d1ac + ar4)) {
    (**(code **)(0x1b0 + **(int **)(ar4 + 0xc)))(*(int **)(ar4 + 0xc),1,ar6,ar7);
    (**(code **)(0x1b4 + **(int **)(ar4 + 0xc)))(*(int **)(ar4 + 0xc),0x8c3eb334,1,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c0c90ec\n.set _FUN_8c0c90ec, _FUN_8c0c90ec_def\n");
