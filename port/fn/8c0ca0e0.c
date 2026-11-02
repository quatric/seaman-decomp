#include "../decls.h"
undefined4 s_GRAPHICS_ENV_0ca0e6_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  undefined *ar5_00;
  undefined4 ar5_01;
  undefined *ar6_00;
  
  iVar1 = ar5;
  if (*(int *)(0x2d1b8 + ar4) != -1) {
    iVar1 = *(int *)(0x2d1b8 + ar4);
    pack_release_entry_handle(0x8c2b59d0,iVar1,ar6,ar7);
  }
  FUN_8c0c5330(ar4 + 0x2d1b0,iVar1,ar6,ar7);
  s_Failed_s_015312(0x8c437028,iVar1,ar6,ar7);
  (*(code *)(&FUN_8c020a70))
            (0x8c3eb334,(&DATA_8c13d004) + 0x1b7,
             (&DATA_8c13d004) + 0x1be,ar4);
  ar6_00 = (&DATA_8c13d004) + 0x1be;
  ar5_00 = (&DATA_8c13d004) + 0x1b7;
  iVar1 = ar4;
  FUN_8c020b68(0x8c3eb334,ar5_00,ar6_00,ar4);
  (**(code **)(0xb0 + **(int **)(ar4 + 8)))(*(int **)(ar4 + 8),ar5_00,ar6_00,iVar1);
  (**(code **)(**(int **)(ar4 + 8) + 0x40))(*(int **)(ar4 + 8),ar5_00,ar6_00,iVar1);
  (**(code **)(0x90 + **(int **)(ar4 + 8)))(*(int **)(ar4 + 8),0x8c3eb334,ar6_00,iVar1);
  ar5_01 = 0;
  FUN_8c0c51a0(*(undefined4 *)(0x7cc + ar5),0,ar6_00,iVar1);
  ar4_00 = *(undefined4 *)(0x7cc + ar5);
  FUN_8c0c90d0(ar4_00,ar5_01,ar6_00,iVar1);
  *(undefined2 *)(0x2d1ac + ar4) = 0;
  *(undefined1 *)(0xa0 + ar5) = 2;
  *(undefined4 *)(0x2d160 + ar4) = 0;
  *(undefined4 *)(0x2d15c + ar4) = 2;
  FUN_8c0c4e2c(ar4_00,ar5_01,ar6_00,iVar1);
  FUN_8c0c4e48(ar4_00,ar5_01,ar6_00,iVar1);
  return 0;
}

__asm__(".globl _s_GRAPHICS_ENV_0ca0e6\n.set _s_GRAPHICS_ENV_0ca0e6, _s_GRAPHICS_ENV_0ca0e6_def\n");
