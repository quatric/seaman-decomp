#include "../decls.h"
int FUN_8c2036ac_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7,uint ain0)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int ar5_00;
  int iVar4;
  int unaff_r13;
  char in_T;
  
  if (in_T == '\0') {
    uVar1 = ~(~ain0 + 1 & 0x1f) + 1;
  }
  else {
    uVar1 = ain0 & 0x1f;
  }
  if (uVar1 != 0) {
    unaff_r13 = unaff_r13 + (0x20 - uVar1);
  }
  if (DAT_8c275430 == unaff_r13) {
    *(int *)(ar5 + 0x14) = unaff_r13;
    uVar3 = FUN_8c2059be(DAT_8c27542c + 4,ar5,ar6,ar7);
    *(undefined4 *)(ar5 + 0x1c) = uVar3;
    iVar2 = 0;
    DAT_8c275430 = 0;
    DAT_8c27542c = 0;
  }
  else {
    ar5_00 = unaff_r13 << 1;
    iVar4 = ar5;
    if ((_DAT_8c4a9bb0 & 4) == 0) {
      uVar3 = 8;
      iVar2 = FUN_8c2046d2(0,ar5_00,ar5,8);
    }
    else {
      uVar3 = 8;
      iVar2 = FUN_8c2046d2((uint)(DAT_8c275410 < DAT_8c275424),ar5_00,ar5,8);
    }
    if (iVar2 == 0) {
      DAT_8c27542c = *(int *)(ar5 + 0x1c);
      DAT_8c275430 = unaff_r13;
      *(int *)(ar5 + 0x14) = unaff_r13;
      uVar3 = FUN_8c2059be(*(undefined4 *)(ar5 + 0x1c),ar5_00,iVar4,uVar3);
      *(undefined4 *)(ar5 + 0x1c) = uVar3;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c2036ac\n.set _FUN_8c2036ac, _FUN_8c2036ac_def\n");
