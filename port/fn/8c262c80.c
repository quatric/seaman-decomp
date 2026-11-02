#include "../decls.h"
undefined4 FUN_8c262c80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int ar5_00;
  int iVar2;
  int iVar3;
  undefined4 ar5_01;
  undefined4 *a7;
  undefined1 *ar7_00;
  undefined4 uVar4;
  int *a4;
  undefined1 auStack_24 [8];
  undefined4 uStack_1c;
  int iStack_18;
  
  a4 = *(int **)(ar4 + 8);
  uVar4 = *(undefined4 *)(ar4 + 4);
  a7 = &uStack_1c;
  (**(code **)(*a4 + 0x18))(a4,1,(int)0x1000,a7);
  if (((iStack_18 < 0x10) ||
      (ar5_01 = uStack_1c, iVar3 = iStack_18,
      ar5_00 = FUN_8c25fdb2(uVar4,uStack_1c,iStack_18,a7), puVar1 = (&FUN_8c25fec0),
      ar5_00 == 0)) || (iStack_18 < ar5_00)) {
    uVar4 = (**(code **)(*a4 + 0x1c))(a4,1,&uStack_1c,a7);
  }
  else {
    *(int *)(0x98 + ar4) = ar5_00;
    iVar2 = (*(code *)puVar1)(uVar4,ar5_01,iVar3,a7);
    if (iVar2 == 4) {
      *(undefined1 *)(ar4 + 3) = 1;
    }
    iVar3 = FUN_8c25fec0(uVar4,ar5_01,iVar3,a7);
    if (iVar3 == 2) {
      if (0x3f < iStack_18) {
        iStack_18 = 0x40;
      }
      memmove(ar4 + 0x58,uStack_1c,iStack_18,a7);
    }
    ar7_00 = auStack_24;
    FUN_8c26be30(&uStack_1c,ar5_00,&uStack_1c,ar7_00);
    (**(code **)(*a4 + 0x20))(a4,0,&uStack_1c,ar7_00);
    (**(code **)(*a4 + 0x1c))(a4,1,auStack_24,ar7_00);
    uVar4 = 2;
    *(undefined1 *)(ar4 + 1) = 2;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c262c80\n.set _FUN_8c262c80, _FUN_8c262c80_def\n");
