#include "../decls.h"
undefined4 FUN_8c0caac0_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int ar5_00;
  uint a5;
  
  ar5_00 = ar5;
  iVar1 = (*(code *)(&get_field_d0_0c51fc))
                    (*(undefined4 *)(0x7cc + ar5),ar5,ar6,ar7);
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
  (**(code **)(0x88 + **(int **)(ar4 + 8)))(*(int **)(ar4 + 8),0x8c3eb334,ar6,ar7);
  *(undefined4 *)(0x2d1b0 + ar4) = 2;
  (**(code **)(0x88 + **(int **)(ar4 + 0x10)))(*(int **)(ar4 + 0x10),0x8c3eb334,ar6,ar7);
  a5 = (uint)*(byte *)(0xa0 + ar5);
  piVar3 = *(int **)(ar4 + 0x10);
  (**(code **)(0x98 + *piVar3))(piVar3,a5,ar6,ar7);
  FUN_8c235ee4(piVar3,a5,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0caac0\n.set _FUN_8c0caac0, _FUN_8c0caac0_def\n");
