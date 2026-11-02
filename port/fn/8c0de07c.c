#include "../decls.h"
undefined4 FUN_8c0de07c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  int ar6_00;
  undefined4 extraout_fr1;
  undefined4 extraout_fr0;
  char cVar2;
  undefined8 uStack_20;
  undefined1 auStack_1c [20];
  
  cVar2 = '\0';
  s_GRAPHICS_ENV_0e16a0(ar4,ar5,ar6,ar7);
  ar6_00 = ar4 + 0x22eb4;
  s_GRAPHICS_COMMON_0d33f4(ar4 + 0x10ac,ar5,ar6_00,ar7);
  iVar1 = ar4 + 0xa68;
  Vec3_ctor_copy((undefined1 *)((int)register0x0000003c + -0x1c),iVar1,ar6_00,ar7);
  FUN_8c0bf11c(ar4 + 0x13b70,iVar1,ar6_00,ar7,(undefined4)uStack_20);
  if (cVar2 == '\0') {
    (*(uint*)((uchar*)&uStack_20+0)) = extraout_fr0;
  }
  else {
    uStack_20 = CONCAT44(extraout_fr0,extraout_fr1);
  }
  FUN_8c0d4e88(ar4 + 0x10ac,(undefined1 *)((int)register0x0000003c + -0x1c),ar6_00,ar7);
  ar5_00 = 0xffffffff;
  Vec3_dtor((undefined1 *)((int)register0x0000003c + -0x1c),0xffffffff,ar6_00,ar7);
  if ((*(int *)(ar4 + 0x22810) == 1) || (*(int *)(ar4 + 0x22814) == 1)) {
    iVar1 = ar4 + 0x10ac;
    FUN_8c0d4f3c(iVar1,ar5_00,ar6_00,ar7);
  }
  else {
    iVar1 = ar4 + 0x10ac;
    FUN_8c0d4f70(iVar1,ar5_00,ar6_00,ar7);
  }
  FUN_8c0d5e2c(iVar1,ar5_00,ar6_00,ar7);
  (*(uint*)((uchar*)&uStack_20+0)) = thunk_FUN_8c20a1d0(0x8c43786c,ar5_00,ar6_00,ar7);
  return (undefined4)uStack_20;
}

__asm__(".globl _FUN_8c0de07c\n.set _FUN_8c0de07c, _FUN_8c0de07c_def\n");
