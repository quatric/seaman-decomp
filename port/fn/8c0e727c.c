#include "../decls.h"
undefined4 FUN_8c0e727c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a4;
  undefined4 uVar2;
  undefined4 *ar5_00;
  int iVar3;
  undefined4 auStack_20 [2];
  
  auStack_20[0] = 0;
  if (*(int *)(ar4 + 0xac8) != 0) {
    uVar2 = ar5;
    iVar1 = get_field_24_05c284(*(undefined4 *)(ar4 + 0xac8),ar5,ar6,ar7);
    if ((iVar1 == 5) || (iVar1 == 7)) {
      uVar2 = 0;
      (**(code **)(*(int *)(*(int *)(ar4 + 0xac8) + 8) + 0x84))(*(int *)(ar4 + 0xac8),0,ar6,ar7);
    }
    iVar1 = FUN_8c100cb4(ar5,uVar2,ar6,ar7);
    if (iVar1 == 1) {
      iVar1 = get_field_300_0bf154(ar4 + 0xa4,uVar2,ar6,ar7);
      a4 = FUN_8c0da588(ar4 + 0xa4,uVar2,ar6,ar7);
      for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
        uVar2 = 2;
        (**(code **)(*(int *)(a4 + 8) + 0x84))(a4,2,ar6,ar7);
        a4 = list_node_next(a4,uVar2,ar6,ar7);
      }
    }
    ar5_00 = auStack_20;
    iVar1 = FUN_8c100e4c(ar5,ar5_00,ar6,ar7);
    if ((iVar1 == 1) && (*(int *)(ar4 + 0x9d4) != 0)) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x9d4) + 8) + 0x184))
                (*(int *)(ar4 + 0x9d4),ar5_00,ar6,ar7);
    }
    else {
      ar5_00 = auStack_20;
      iVar1 = FUN_8c100e4c(ar5,ar5_00,ar6,ar7);
      if ((iVar1 == 2) && (*(int *)(ar4 + 0x9d4) != 0)) {
        (**(code **)(*(int *)(*(int *)(ar4 + 0x9d4) + 8) + 0x188))
                  (*(int *)(ar4 + 0x9d4),ar5_00,ar6,ar7);
      }
    }
    iVar1 = FUN_8c100ce8(ar5,ar5_00,ar6,ar7);
    if ((iVar1 == 1) && (*(int *)(ar4 + 0x9d4) != 0)) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x9d4) + 8) + 0x88))
                (*(int *)(ar4 + 0x9d4),ar5_00,ar6,ar7);
    }
    FUN_8c0dc7e8(ar4,ar5,ar6,ar7);
    FUN_8c0dc8fc(ar4,ar5,ar6,ar7);
  }
  return 1;
}

__asm__(".globl _FUN_8c0e727c\n.set _FUN_8c0e727c, _FUN_8c0e727c_def\n");
