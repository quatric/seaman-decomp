#include "../decls.h"
undefined4 FUN_8c0d3f7c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(ar5 + 0xc) + 100);
  if (((iVar1 == 3) || (iVar1 == 4)) || (iVar1 == 6)) {
    if (*(float *)(*(int *)(ar5 + 0xc) + 4) <= 900.0) {
      DAT_8c13f4f7 = 0xff;
    }
    else {
      DAT_8c13f4f7 = 0x78;
    }
  }
  else {
    DAT_8c13f4f7 = 0xff;
  }
  **(uint **)(ar4 + 0x14) = (uint)DAT_8c13f4f7 << 0x18 | 0xffffff;
  uVar2 = FUN_8c0d4038(ar4,ar5,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c0d3f7c\n.set _FUN_8c0d3f7c, _FUN_8c0d3f7c_def\n");
