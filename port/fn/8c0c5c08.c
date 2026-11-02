#include "../decls.h"
undefined4 Class_12b388_m1_0c5c08_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int ar5_00;
  
  ar5_00 = ar5;
  iVar1 = pure_virtual_stub(ar4,ar5,ar6,ar7);
  uVar2 = FUN_8c01f520(0x8c3dd7dc,ar5_00,ar6,ar7);
  iVar3 = FUN_8c01ad88(uVar2,ar5_00,ar6,ar7);
  iVar4 = 1;
  if ((((iVar3 == 1) ||
       (iVar4 = FUN_8c0ffff4(*(undefined4 *)(0x7cc + ar5),ar5_00,ar6,ar7),
       iVar4 != 1)) || (iVar4 = *(int *)(0x2d164 + ar4), iVar4 != 0)) && (iVar1 != 0)) {
    return iVar4;
  }
  uVar2 = FUN_8c0c5cb4(ar4,ar5,ar6,ar7);
  return uVar2;
}

__asm__(".globl _Class_12b388_m1_0c5c08\n.set _Class_12b388_m1_0c5c08, _Class_12b388_m1_0c5c08_def\n");
