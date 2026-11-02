#include "../decls.h"
int FUN_8c203820_def(uint ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int ar5_00;
  int *ar6_00;
  int ar7_00;
  int ar4_00;
  
  if ((int)ar4 < 0) {
    uVar2 = ~(~ar4 + 1 & 0x1f) + 1;
  }
  else {
    uVar2 = ar4 & 0x1f;
  }
  if (uVar2 != 0) {
    ar4 = ar4 + (0x20 - uVar2);
  }
  ar7_00 = (int)0x2000;
  ar5_00 = ar4 << 1;
  ar6_00 = ar5;
  iVar3 = FUN_8c2046d2(0,ar5_00,ar5,ar7_00);
  if (iVar3 == 0) {
    ar4_00 = *ar5;
    iVar4 = FUN_8c2059be(ar4_00,ar5_00,ar6_00,ar7_00);
    puVar1 = (&FUN_8c2059be);
    *ar5 = iVar4;
    uVar5 = (*(code *)puVar1)(ar4_00 + 4,ar5_00,ar6_00,ar7_00);
    *ar6 = uVar5;
  }
  return iVar3;
}

__asm__(".globl _FUN_8c203820\n.set _FUN_8c203820, _FUN_8c203820_def\n");
