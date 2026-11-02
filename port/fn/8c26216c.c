#include "../decls.h"
undefined4 FUN_8c26216c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_r3;
  undefined4 uVar2;
  int iVar3;
  undefined4 ar5_00;
  undefined4 in_PR;
  
  ar5_00 = 0;
  uVar2 = 3;
  iVar3 = ar4;
  uVar1 = FUN_8c261a4c(3,0,ar4,in_r3);
  if (ar4 != 0) {
    FUN_8c260ca0(uVar2,ar5_00,iVar3,in_r3,in_PR);
    if (*(char *)(ar4 + 1) == '\x02') {
      s_E9040822_adxf_is_NULL_ADXF_S_262408(ar4,ar5_00,iVar3,in_r3);
    }
    uVar1 = 0;
    uVar2 = 0x30;
    iVar3 = ar4;
    memset(ar4,0,0x30,in_r3);
    FUN_8c260cc8(iVar3,uVar1,uVar2,in_r3,in_PR);
    uVar1 = FUN_8c261a4c(3,1,ar4,0xffffffff);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c26216c\n.set _FUN_8c26216c, _FUN_8c26216c_def\n");
