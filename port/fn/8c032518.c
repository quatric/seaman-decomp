#include "../decls.h"
undefined4 FUN_8c032518_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_stack_00000000;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  uVar2 = ar6;
  uVar3 = ar7;
  FUN_8c03263c(ar4,ar4 + 0x14,ar6,ar7);
  Vec3_add(auStack_38,ar5,uVar2,uVar3,auStack_48);
  Vec3_ctor_copy(auStack_28,auStack_48,uVar2,uVar3);
  Vec3_dtor(auStack_48,0xffffffff,uVar2,uVar3);
  Vec3_dtor(auStack_38,0xffffffff,uVar2,uVar3);
  uVar2 = ar6;
  uVar3 = ar7;
  iVar1 = FUN_8c0329ac(ar4,auStack_28,ar6,ar7);
  if (iVar1 == 0) {
    uVar2 = FUN_8c032788(ar4,auStack_28,ar6,ar7);
    Vec3_ctor_copy(in_stack_00000000,uVar2,ar6,ar7);
    Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
  }
  else {
    Vec3_ctor_copy(in_stack_00000000,auStack_28,uVar2,uVar3);
    Vec3_dtor(auStack_28,0xffffffff,uVar2,uVar3);
  }
  return 0;
}

__asm__(".globl _FUN_8c032518\n.set _FUN_8c032518, _FUN_8c032518_def\n");
