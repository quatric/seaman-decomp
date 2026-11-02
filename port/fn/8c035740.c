#include "../decls.h"
undefined4 FUN_8c035740_def(undefined4 *ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int a6;
  
  iVar3 = 0;
  a6 = 0;
  while( true ) {
    uVar2 = 3;
    iVar1 = (**(code **)(0x11c + *(int *)*ar4))((int *)*ar4,3,ar6,ar7);
    if (iVar1 <= a6) break;
    uVar2 = 3;
    ar6 = a6;
    iVar1 = (**(code **)(0x100 + *(int *)*ar4))((int *)*ar4,3,a6,ar7);
    iVar1 = (**(code **)(0x114 + *(int *)(iVar1 + 8)))(iVar1,uVar2,ar6,ar7);
    if (iVar1 == 4) {
      uVar2 = 3;
      ar6 = a6;
      iVar1 = (**(code **)(0x100 + *(int *)*ar4))((int *)*ar4,3,a6,ar7);
      iVar1 = (**(code **)(0xb4 + *(int *)(iVar1 + 8)))(iVar1,uVar2,ar6,ar7);
      if (iVar1 == 1) {
        iVar3 = iVar3 + 1;
      }
    }
    a6 = a6 + 1;
  }
  if ((((1 < iVar3) &&
       (iVar3 = get_field_178_035734(ar4[3],uVar2,ar6,ar7), iVar3 == 0)) &&
      (iVar3 = FUN_8c02c340(ar4[2] + 0x90,uVar2,ar6,ar7), iVar3 < 0x31)) &&
     (uVar2 = FUN_8c03584c(ar4[5],uVar2,ar6,ar7), (char)uVar2 == '\x02')) {
    FUN_8c02ce10(ar4[2] + 0x90,0,ar6,ar7);
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c035740\n.set _FUN_8c035740, _FUN_8c035740_def\n");
