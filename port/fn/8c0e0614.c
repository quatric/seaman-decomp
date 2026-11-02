#include "../decls.h"
undefined4 FUN_8c0e0614_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *a4;
  int iVar4;
  undefined1 auStack_5c [72];
  
  uVar3 = ar5;
  iVar1 = get_field_bb4_0e06e4(ar4,ar5,ar6,ar7);
  FUN_8c0db304(auStack_5c,uVar3,ar6,ar7);
  FUN_8c018f80(auStack_5c,ar5,ar6,ar7);
  iVar4 = 0;
  while( true ) {
    if (iVar1 <= iVar4) {
      uVar3 = FUN_8c0db224(ar4,ar5,ar6,ar7);
      Class_129974_m0_016c2c(auStack_5c,0xffffffff,ar6,ar7);
      return uVar3;
    }
    a4 = (int *)(ar4 + iVar4 * 0x16c + 0x22e0c);
    iVar2 = (**(code **)(*a4 + 0x14))(a4,auStack_5c,ar6,ar7);
    if (iVar2 == 1) break;
    iVar4 = iVar4 + 1;
  }
  Class_129974_m0_016c2c(auStack_5c,0xffffffff,ar6,ar7);
  return 2;
}

__asm__(".globl _FUN_8c0e0614\n.set _FUN_8c0e0614, _FUN_8c0e0614_def\n");
