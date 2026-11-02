#include "../decls.h"
undefined4 Class_12bb08_m2_0da5a8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 ar6_00;
  int ar7_00;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7);
  iVar3 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar4;
  FUN_8c0e9220(ar4 + 0xf4c,ar5,ar6,ar4);
  iVar2 = get_field_300_0bf154(ar4 + 0xa4,iVar3,ar6_00,ar7_00);
  if (iVar2 != 0) {
    iVar5 = iVar1;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      iVar3 = ar5;
      ar6_00 = ar6;
      ar7_00 = ar4;
      (**(code **)(*(int *)(iVar5 + 8) + 0x14))(iVar5,ar5,ar6,ar4);
      iVar5 = list_node_next(iVar5,iVar3,ar6_00,ar7_00);
    }
    iVar5 = iVar1;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      iVar3 = ar4;
      FUN_8c0f4258(iVar5,ar4,ar6_00,ar7_00);
      iVar5 = list_node_next(iVar5,iVar3,ar6_00,ar7_00);
    }
    iVar5 = iVar1;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      iVar3 = FUN_8c0da4f8(iVar5,iVar3,ar6_00,ar7_00);
      if (iVar3 == 1) {
        FUN_8c0f4974(iVar5,ar4,ar6_00,ar7_00);
      }
      iVar3 = ar4;
      (**(code **)(*(int *)(iVar5 + 8) + 0x24))(iVar5,ar4,ar6_00,ar7_00);
      iVar5 = list_node_next(iVar5,iVar3,ar6_00,ar7_00);
    }
    for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
      iVar3 = ar4;
      (**(code **)(*(int *)(iVar1 + 8) + 0x28))(iVar1,ar4,ar6_00,ar7_00);
      iVar1 = list_node_next(iVar1,iVar3,ar6_00,ar7_00);
    }
    FUN_8c0dbbe8(ar4,iVar3,ar6_00,ar7_00);
    for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
      iVar2 = FUN_8c0f6ab0(ar4 + iVar1 * 0x68 + 0xc0c,iVar3,ar6_00,ar7_00);
      if (iVar2 == 1) {
        iVar3 = ar4;
        FUN_8c0f7204(ar4 + iVar1 * 0x68 + 0xc0c,ar4,ar6_00,ar7_00);
      }
    }
  }
  return 1;
}

__asm__(".globl _Class_12bb08_m2_0da5a8\n.set _Class_12bb08_m2_0da5a8, _Class_12bb08_m2_0da5a8_def\n");
