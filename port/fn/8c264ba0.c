#include "../decls.h"
undefined4 FUN_8c264ba0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  int *a4;
  int iVar2;
  undefined4 in_stack_ffffffec;
  
  FUN_8c260ca0(ar4,ar5,ar6,ar7,in_stack_ffffffec);
  s_E1205_Illigal_parameter_MWRN_2690dc(*(undefined4 *)(ar4 + 0xc),0,ar6,ar7);
  uVar1 = 0;
  s_E1205_Illigal_parameter_MWRN_2691ba(*(undefined4 *)(ar4 + 0xc),0,ar6,ar7);
  FUN_8c262c66(*(undefined4 *)(ar4 + 4),uVar1,ar6,ar7);
  if (*(int *)(ar4 + 8) != 0) {
    FUN_8c263498(*(undefined4 *)(ar4 + 8),uVar1,ar6,ar7);
    (**(code **)(**(int **)(ar4 + 0x14) + 0x14))(*(int **)(ar4 + 0x14),uVar1,ar6,ar7);
  }
  for (iVar2 = 0; iVar2 < *(char *)(ar4 + 3); iVar2 = iVar2 + 1) {
    a4 = *(int **)(iVar2 * 4 + ar4 + 0x18);
    (**(code **)(*a4 + 0x14))(a4,uVar1,ar6,ar7);
  }
  if (*(int *)(ar4 + 8) != 0) {
    uVar1 = 0;
    FUN_8c263534(*(undefined4 *)(ar4 + 8),0,ar6,ar7);
    FUN_8c26346e(*(undefined4 *)(ar4 + 8),uVar1,ar6,ar7);
  }
  ar5_00 = *(undefined4 *)(ar4 + 0x14);
  uVar1 = FUN_8c263b34(ar4,ar5_00,ar6,ar7);
  uVar1 = FUN_8c260cc8(ar4,ar5_00,ar6,ar7,uVar1);
  return uVar1;
}

__asm__(".globl _FUN_8c264ba0\n.set _FUN_8c264ba0, _FUN_8c264ba0_def\n");
