#include "../decls.h"
undefined4 FUN_8c0cb29c_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 ar6_00;
  undefined1 *ar6_01;
  undefined1 *ar7_00;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [12];
  
  iVar1 = ar5;
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_38,iVar1,ar6,ar7);
  while (iVar1 = (**(code **)(**(int **)(ar4 + 8) + 0x11c))(*(int **)(ar4 + 8),5,ar6,ar7),
        iVar1 != 0) {
    ar6 = iVar1 + -1;
    uVar4 = (**(code **)(**(int **)(ar4 + 8) + 0x100))(*(int **)(ar4 + 8),5,ar6,ar7);
    uVar3 = uVar4;
    (**(code **)(**(int **)(ar4 + 8) + 0x5c))(*(int **)(ar4 + 8),uVar4,ar6,ar7);
    FUN_8c02f670(uVar4,uVar3,ar6,ar7,auStack_48);
    Vec3_assign(auStack_38,auStack_48,ar6,ar7);
    uVar3 = 0xffffffff;
    Vec3_dtor(auStack_48,0xffffffff,ar6,ar7);
    FUN_8c036988(uVar4,uVar3,ar6,ar7);
    (**(code **)(**(int **)(ar4 + 0x10) + 0x4c))(*(int **)(ar4 + 0x10),uVar4,ar6,ar7);
  }
  (**(code **)(**(int **)(ar4 + 8) + 0x78))(*(int **)(ar4 + 8),2,ar6,ar7);
  (**(code **)(**(int **)(ar4 + 8) + 0x9c))(*(int **)(ar4 + 8),2,ar6,ar7);
  (**(code **)(**(int **)(ar4 + 8) + 0x1b0))(*(int **)(ar4 + 8),1,ar6,ar7);
  ar6_00 = 2;
  (**(code **)(**(int **)(ar4 + 8) + 0x1b4))(*(int **)(ar4 + 8),0x8c3eb334,2,ar7);
  uVar3 = 2;
  FUN_8c0c51b8(*(undefined4 *)(ar5 + 0x7cc),2,ar6_00,ar7);
  FUN_8c0c51c4(*(undefined4 *)(ar5 + 0x7cc),uVar3,ar6_00,ar7);
  uVar3 = 0x8c3eb334;
  (**(code **)(**(int **)(ar4 + 0x10) + 0x94))(*(int **)(ar4 + 0x10),0x8c3eb334,ar6_00,ar7);
  uVar3 = (**(code **)(**(int **)(ar4 + 0x10) + 0x14c))(*(int **)(ar4 + 0x10),uVar3,ar6_00,ar7);
  uVar4 = 0x8c3eb334;
  s_GRAPHICS_ENV_0d819c(uVar3,0x8c3eb334,ar6_00,ar7);
  noop_0d8458(uVar3,uVar4,ar6_00,ar7,iVar1);
  (**(code **)(**(int **)(ar4 + 0x10) + 0x70))(*(int **)(ar4 + 0x10),3,ar6_00,ar7);
  ar7_00 = auStack_20;
  ar6_01 = auStack_24;
  puVar2 = auStack_28;
  FUN_8c0cb1e0(0x8c436f4c,puVar2,ar6_01,ar7_00);
  FUN_8c019560(0x8c436f4c,puVar2,ar6_01,ar7_00);
  Class_129a24_m1_019b68(0x8c436f4c,puVar2,ar6_01,ar7_00);
  (**(code **)(**(int **)(ar4 + 0x10) + 0x28))(*(int **)(ar4 + 0x10),puVar2,ar6_01,ar7_00);
  (**(code **)(**(int **)(ar4 + 0x10) + 0xb4))(*(int **)(ar4 + 0x10),puVar2,ar6_01,ar7_00);
  uVar3 = 0x8c3eb334;
  puVar2 = &DAT_8c436a28;
  s_GRAPHICS_MESSAGE_0cef1c(&DAT_8c436a28,0x8c3eb334,ar6_01,ar7_00);
  *(undefined1 *)(ar5 + 0xa0) = 3;
  *(undefined4 *)(ar4 + 0x2d160) = 0;
  *(undefined4 *)(ar4 + 0x2d15c) = 2;
  FUN_8c0c4e2c(puVar2,uVar3,ar6_01,ar7_00);
  FUN_8c0c4e48(puVar2,uVar3,ar6_01,ar7_00);
  Vec3_dtor(auStack_38,0xffffffff,ar6_01,ar7_00);
  Vec3_dtor(auStack_28,0xffffffff,ar6_01,ar7_00);
  return 0;
}

__asm__(".globl _FUN_8c0cb29c\n.set _FUN_8c0cb29c, _FUN_8c0cb29c_def\n");
