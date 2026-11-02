#include "../decls.h"
undefined4 FUN_8c262f02_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int ar5_00;
  int iVar3;
  int iVar4;
  undefined4 ar5_01;
  undefined1 *a6;
  undefined1 *ar7_00;
  undefined4 uVar5;
  int *piVar6;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  undefined1 *puStack_24;
  
  piVar6 = *(int **)(ar4 + 8);
  uVar5 = *(undefined4 *)(ar4 + 4);
  iVar2 = get_field_18_25ff16(uVar5,ar5,ar6,ar7);
  ar5_00 = get_field_a000a4_25fff0(uVar5,ar5,ar6,ar7);
  iVar3 = get_field_a0_25fff6(uVar5,ar5,ar6,ar7);
  puVar1 = (&FUN_8c26be30);
  iVar2 = iVar2 - *(int *)(ar4 + 0x34);
  if (iVar3 < iVar2) {
    iVar2 = iVar3;
  }
  ar7_00 = auStack_30;
  FUN_8c26be30(ar4 + 0x14,ar5_00,&uStack_28,ar7_00);
  (**(code **)(*piVar6 + 0x20))(piVar6,0,&uStack_28,ar7_00);
  ar5_01 = 1;
  a6 = auStack_30;
  (**(code **)(*piVar6 + 0x1c))(piVar6,1,a6,ar7_00);
  for (iVar3 = 0; iVar4 = FUN_8c25feca(*(undefined4 *)(ar4 + 4),ar5_01,a6,ar7_00),
      iVar3 < iVar4; iVar3 = iVar3 + 1) {
    ar7_00 = auStack_30;
    (*(code *)puVar1)(iVar3 * 8 + ar4 + 0x1c,iVar2 << 1,&uStack_28,ar7_00);
    if (*(int *)(ar4 + 0x50) != 0) {
      ar7_00 = puStack_24;
      (**(code **)(ar4 + 0x50))(*(undefined4 *)(ar4 + 0x54),iVar3,uStack_28,puStack_24);
    }
    piVar6 = *(int **)(iVar3 * 4 + ar4 + 0xc);
    (**(code **)(*piVar6 + 0x20))(piVar6,1,&uStack_28,ar7_00);
    piVar6 = *(int **)(ar4 + 0xc + iVar3 * 4);
    ar5_01 = 0;
    a6 = auStack_30;
    (**(code **)(*piVar6 + 0x1c))(piVar6,0,a6,ar7_00);
  }
  *(int *)(ar4 + 0x2c) = *(int *)(ar4 + 0x2c) + iVar2;
  *(int *)(ar4 + 0x30) = *(int *)(ar4 + 0x30) + ar5_00;
  *(int *)(ar4 + 0x34) = *(int *)(ar4 + 0x34) + iVar2;
  *(int *)(ar4 + 0x40) = *(int *)(ar4 + 0x40) + iVar2;
  *(int *)(ar4 + 0x44) = *(int *)(ar4 + 0x44) + ar5_00;
  if (((-1 < *(int *)(ar4 + 0x3c)) && (*(int *)(ar4 + 0x3c) <= *(int *)(ar4 + 0x40))) &&
     (*(int *)(ar4 + 0x48) != 0)) {
    (**(code **)(ar4 + 0x48))(*(undefined4 *)(ar4 + 0x4c),ar5_01,a6,ar7_00);
  }
  uVar5 = FUN_8c25ffb6(uVar5,ar5_01,a6,ar7_00);
  return uVar5;
}

__asm__(".globl _FUN_8c262f02\n.set _FUN_8c262f02, _FUN_8c262f02_def\n");
