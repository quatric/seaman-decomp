#include "../decls.h"
uint FUN_8c0a3d08_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 ar7_00;
  undefined1 *ar7_01;
  undefined1 auStack_1c [16];
  
  uVar3 = ar6;
  ar7_00 = ar7;
  iVar1 = FUN_8c023cd4(ar4 + 0x250,ar6,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c03f460(auStack_1c,ar7,uVar3,ar7_00);
    ar7_01 = auStack_1c;
    uVar3 = ar6;
    iVar1 = FUN_8c0a1828(ar4,ar5,ar6,ar7_01);
    free_if_nonnull_wrap_102790(auStack_1c,0xffffffff,uVar3,ar7_01);
    if (iVar1 == 0) {
      Vec3_assign(ar4 + 0x250,ar6,uVar3,ar7_01);
    }
    uVar2 = (uint)(iVar1 != 0);
  }
  else {
    uVar2 = FUN_8c031de8(ar4,0,uVar3,ar7_00);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0a3d08\n.set _FUN_8c0a3d08, _FUN_8c0a3d08_def\n");
