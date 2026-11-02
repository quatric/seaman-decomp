#include "../decls.h"
undefined4 FUN_8c0d5d28_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(char *)(0x8c437840 + 2) == '2') {
    FUN_8c233dac((&DATA_8c13f51c),ar5,ar6,ar7);
  }
  else {
    FUN_8c233dac((&DATA_8c13f50c),ar5,ar6,ar7);
  }
  for (iVar3 = 0; iVar3 < 0x226; iVar3 = iVar3 + 1) {
    iVar1 = (*(code *)(&get_field_44_0d5ca0))
                      (iVar3 * 0x88 + ar4 + 0x62c,ar5,ar6,ar7);
    if (iVar1 == 1) {
      ar5 = ar4 + 0x12a5c;
      FUN_8c0d2c84(iVar3 * 0x88 + ar4 + 0x62c,ar5,ar6,ar7);
    }
  }
  uVar2 = FUN_8c233dac((&DATA_8c13f320),ar5,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c0d5d28\n.set _FUN_8c0d5d28, _FUN_8c0d5d28_def\n");
