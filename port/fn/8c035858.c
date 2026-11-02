#include "../decls.h"
undefined4 FUN_8c035858_def(undefined4 *ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int a6;
  
  iVar4 = 0;
  a6 = 0;
  while( true ) {
    uVar3 = 5;
    iVar1 = (**(code **)(0x11c + *(int *)*ar4))((int *)*ar4,5,ar6,ar7);
    if (iVar1 <= a6) break;
    uVar3 = 5;
    ar6 = a6;
    iVar1 = (**(code **)(0x100 + *(int *)*ar4))((int *)*ar4,5,a6,ar7);
    iVar1 = (**(code **)(0x114 + *(int *)(iVar1 + 8)))(iVar1,uVar3,ar6,ar7);
    if (iVar1 == 7) {
      uVar3 = 5;
      ar6 = a6;
      iVar1 = (**(code **)(0x100 + *(int *)*ar4))((int *)*ar4,5,a6,ar7);
      iVar1 = (**(code **)(0xb4 + *(int *)(iVar1 + 8)))(iVar1,uVar3,ar6,ar7);
      if (iVar1 == 1) {
        iVar4 = iVar4 + 1;
      }
    }
    a6 = a6 + 1;
  }
  if ((((1 < iVar4) &&
       (iVar4 = get_field_178_035734(ar4[3],uVar3,ar6,ar7), iVar4 == 0)) &&
      (iVar4 = FUN_8c02c340(ar4[2] + 0x90,uVar3,ar6,ar7), iVar4 < 0x31)) &&
     (((uVar2 = FUN_8c03584c(ar4[5],uVar3,ar6,ar7), (char)uVar2 == '\x02' &&
       (iVar4 = get_field_c0_034f3c(ar4[5],uVar3,ar6,ar7), iVar4 == 0)) &&
      (iVar4 = get_field_40_03598c(ar4[5],uVar3,ar6,ar7), iVar4 == 0)))) {
    FUN_8c02ce10(ar4[2] + 0x90,0,ar6,ar7);
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c035858\n.set _FUN_8c035858, _FUN_8c035858_def\n");
