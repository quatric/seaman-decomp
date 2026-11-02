#include "../decls.h"
undefined4 FUN_8c0f4258_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *ar5_00;
  undefined4 uVar2;
  int iVar3;
  int *a5;
  int iVar4;
  int iVar5;
  
  ar5_00 = ar5;
  iVar1 = get_field_bb4_0e06e4(ar5,ar5,ar6,ar7);
  iVar4 = 0;
  do {
    if (iVar1 <= iVar4) {
LAB_8c0f42f4:
      iVar1 = (**(code **)(0x118 + *ar5))(ar5,ar5_00,ar6,ar7);
      uVar2 = 1;
      if (1 < iVar1) {
        iVar1 = ar4;
        iVar4 = FUN_8c0db864(ar5,ar4,ar6,ar7);
        uVar2 = list_node_next(ar4,iVar1,ar6,ar7);
        for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
          iVar1 = get_field_a4_032154(uVar2,iVar1,ar6,ar7);
          iVar3 = (**(code **)(**(int **)(0xa4 + ar4) + 0x14))
                            (*(int **)(0xa4 + ar4),iVar1,ar6,ar7);
          if (iVar3 == 1) {
            FUN_8c0f4dc4(ar4,uVar2,ar6,ar7);
            uVar2 = FUN_8c0f4dc4(uVar2,ar4,ar6,ar7);
            return uVar2;
          }
          uVar2 = list_node_next(uVar2,iVar1,ar6,ar7);
        }
      }
      return uVar2;
    }
    ar5_00 = (int *)(**(code **)(0x104 + *ar5))(ar5,iVar4,ar6,ar7);
    iVar5 = (**(code **)(**(int **)(0xa4 + ar4) + 0x14))
                      (*(int **)(0xa4 + ar4),(int)ar5_00 + 0xc4,ar6,ar7);
    if (iVar5 == 1) {
      FUN_8c0f4e1c(ar4,ar5_00,ar6,ar7);
      goto LAB_8c0f42f4;
    }
    a5 = (int *)((int)ar5_00 + 0xc4);
    iVar5 = (**(code **)(*(int *)(ar4 + 0xa8) + 0x14))
                      ((int *)(ar4 + 0xa8),a5,ar6,ar7);
    if (iVar5 == 1) {
      FUN_8c0f4e28(ar4,ar5_00,ar6,ar7);
      goto LAB_8c0f42f4;
    }
    iVar4 = iVar4 + 1;
    ar5_00 = a5;
  } while( true );
}

__asm__(".globl _FUN_8c0f4258\n.set _FUN_8c0f4258, _FUN_8c0f4258_def\n");
