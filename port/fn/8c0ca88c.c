#include "../decls.h"
undefined4 FUN_8c0ca88c_def(int ar4,undefined1 *ar5,undefined1 *ar6,undefined1 *ar7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 *ar5_00;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  ar5_00 = ar5;
  iVar1 = (*(code *)(&get_field_d0_0c51fc))
                    (*(undefined4 *)(ar5 + 0x7cc),ar5,ar6,ar7);
  FUN_8c102748(auStack_20,ar5_00,ar6,ar7);
  FUN_8c1026ec(auStack_38,ar5_00,ar6,ar7);
  iVar2 = (*(code *)(&get_field_d4_0c7424))
                    (*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
  if (iVar2 == 0) {
    iVar2 = FUN_8c0637d0(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
    if (iVar2 != 0) {
      FUN_8c0c86d4(*(undefined4 *)(ar4 + iVar1 * 4 + 8),auStack_20,ar6,ar7);
      FUN_8c0c86c0(*(undefined4 *)(ar4 + iVar1 * 4 + 8),auStack_38,ar6,ar7);
      FUN_8c0c8698(*(undefined4 *)(ar4 + iVar1 * 4 + 8),auStack_30,ar6,ar7);
      ar7 = auStack_30;
      ar6 = auStack_38;
      ar5_00 = auStack_20;
      FUN_8c0fff54(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
    }
    piVar3 = *(int **)(ar4 + iVar1 * 4 + 8);
    (**(code **)(0xb0 + *piVar3))(piVar3,ar5_00,ar6,ar7);
    if (iVar1 == 0) {
      (**(code **)(**(int **)(ar4 + 8) + 0x38))(*(int **)(ar4 + 8),ar5_00,ar6,ar7);
    }
    else if (iVar1 == 1) {
      (**(code **)(**(int **)(ar4 + 0xc) + 0x28))(*(int **)(ar4 + 0xc),ar5_00,ar6,ar7);
    }
    else if (iVar1 == 3) {
      (**(code **)(**(int **)(ar4 + 0x14) + 0x28))(*(int **)(ar4 + 0x14),ar5_00,ar6,ar7);
    }
    FUN_8c0fff84(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
    piVar3 = *(int **)(ar4 + iVar1 * 4 + 8);
    (**(code **)(*piVar3 + 0x48))(piVar3,ar5_00,ar6,ar7);
  }
  else {
    FUN_8c0cc524(ar4,iVar2,ar6,ar7);
  }
  free_if_nonnull_wrap_10270c(auStack_38,0xffffffff,ar6,ar7);
  free_if_nonnull_wrap_102790(auStack_20,0xffffffff,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0ca88c\n.set _FUN_8c0ca88c, _FUN_8c0ca88c_def\n");
