#include "../decls.h"
undefined4 FUN_8c0c8fc4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 ar4_00;
  undefined4 ar5_00;
  undefined1 *a6;
  undefined1 auStack_2c [36];
  
  iVar1 = ar5;
  FUN_8c0c84cc(auStack_2c,ar5,ar6,ar7);
  iVar1 = (*(code *)(&get_field_d0_0c51fc))
                    (*(undefined4 *)(0x7cc + ar5),iVar1,ar6,ar7);
  a6 = auStack_2c;
  piVar3 = *(int **)(ar4 + iVar1 * 4 + 8);
  iVar1 = ar5;
  (**(code **)(*piVar3 + 0xc))(piVar3,ar5,a6,ar7);
  iVar2 = (*(code *)(&get_field_d0_0c51fc))
                    (*(undefined4 *)(0x7cc + ar5),iVar1,a6,ar7);
  piVar3 = *(int **)(ar4 + iVar2 * 4 + 8);
  (**(code **)(0xb0 + *piVar3))(piVar3,iVar1,a6,ar7);
  (**(code **)(**(int **)(ar4 + 8) + 0x30))(*(int **)(ar4 + 8),iVar1,a6,ar7);
  ar5_00 = 0;
  FUN_8c0c51a0(*(undefined4 *)(0x7cc + ar5),0,a6,ar7);
  ar4_00 = *(undefined4 *)(0x7cc + ar5);
  FUN_8c0c90d0(ar4_00,ar5_00,a6,ar7);
  *(undefined2 *)(0x2d1ac + ar4) = 0;
  *(undefined1 *)(0xa0 + ar5) = 1;
  *(undefined4 *)(0x2d160 + ar4) = 0;
  *(undefined4 *)(0x2d15c + ar4) = 2;
  FUN_8c0c4e2c(ar4_00,ar5_00,a6,ar7);
  FUN_8c0c4e48(ar4_00,ar5_00,a6,ar7);
  FUN_8c0c8480(auStack_2c,0xffffffff,a6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0c8fc4\n.set _FUN_8c0c8fc4, _FUN_8c0c8fc4_def\n");
