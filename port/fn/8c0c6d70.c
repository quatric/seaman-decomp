#include "../decls.h"
undefined4 FUN_8c0c6d70_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int ar4_00;
  int ar5_00;
  
  ar4_00 = ar4;
  ar5_00 = ar5;
  iVar1 = pure_virtual_stub(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    uVar2 = s_SEAMANDC_USR_0b76dc(ar4_00,ar5_00,ar6,ar7);
    *(undefined4 *)(0x2d16c + ar4) = uVar2;
    if (*(int *)(0x2d16c + ar4) == 0) {
      uVar2 = FUN_8c0b77a0(ar5 + 0x96,ar5_00,ar6,ar7);
      *(undefined4 *)(0x2d168 + ar4) = uVar2;
    }
    FUN_8c0d1c14((uint)*(byte *)(0xa0 + ar5),ar5_00,ar6,ar7);
    pure_virtual_stub(ar4,ar5,ar6,ar7);
    *(undefined4 *)(0x2d15c + ar4) = 2;
  }
  return 1;
}

__asm__(".globl _FUN_8c0c6d70\n.set _FUN_8c0c6d70, _FUN_8c0c6d70_def\n");
