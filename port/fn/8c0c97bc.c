#include "../decls.h"
undefined4 s_GRAPHICS_ENV_0c97c4_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int ar5_00;
  undefined4 auStack_18 [2];
  
  ar5_00 = ar5;
  iVar1 = (*(code *)(&get_field_d0_0c51fc))
                    (*(undefined4 *)(0x7cc + ar5),ar5,ar6,ar7);
  auStack_18[0] = 0;
  FUN_8c0c51c4(*(undefined4 *)(0x7cc + ar5),ar5_00,ar6,ar7);
  piVar3 = *(int **)(ar4 + iVar1 * 4 + 8);
  iVar2 = (**(code **)(0x138 + *piVar3))(piVar3,ar5_00,ar6,ar7);
  if (iVar2 == 2) {
    FUN_8c1006bc(*(undefined4 *)(0x7cc + ar5),ar5_00,ar6,ar7);
  }
  if (iVar1 != 0) {
    piVar3 = *(int **)(ar4 + iVar1 * 4 + 8);
    (**(code **)(*piVar3 + 0x78))(piVar3,(uint)*(byte *)(0xa0 + ar5),ar6,ar7);
    FUN_8c0c51b8(*(undefined4 *)(0x7cc + ar5),0,ar6,ar7);
    (**(code **)(**(int **)(ar4 + 8) + 0x70))
              (*(int **)(ar4 + 8),(uint)*(byte *)(0xa0 + ar5),ar6,ar7);
    FUN_8c021720(0x8c2b59d0,1,ar6,ar7);
    ar6 = (uint)*(byte *)(0xa0 + ar5);
    (*(code *)(&FUN_8c0d1c20))
              (*(undefined4 *)(ar4 + iVar1 * 4 + 8),*(undefined4 *)(ar4 + 8),ar6,ar7);
  }
  (**(code **)(0x84 + **(int **)(ar4 + 8)))(*(int **)(ar4 + 8),0x8c3eb334,ar6,ar7);
  *(undefined4 *)(0x2d1b0 + ar4) = 2;
  *(undefined4 *)(0x2d1b4 + ar4) = 0;
  (*(code *)(&FUN_8c0209b0))
            (0x8c3eb334,(&DATA_8c13d004) + 0x1b7,
             (&DATA_8c13d004) + 0x1be,auStack_18);
  return 0;
}

__asm__(".globl _s_GRAPHICS_ENV_0c97c4\n.set _s_GRAPHICS_ENV_0c97c4, _s_GRAPHICS_ENV_0c97c4_def\n");
