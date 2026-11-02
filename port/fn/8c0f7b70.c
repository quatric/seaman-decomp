#include "../decls.h"
undefined4 game_init_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 ar7_00;
  undefined4 in_stack_ffffffc0;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = DAT_8c14029c;
  uStack_14 = DAT_8c1402a0;
  uStack_10 = DAT_8c1402a4;
  uStack_c = DAT_8c1402a8;
  uStack_28 = DAT_8c1402ac;
  uStack_24 = DAT_8c1402b0;
  uStack_20 = DAT_8c1402b4;
  uStack_1c = DAT_8c1402b8;
  *(undefined4 *)(&DATA_8c1f5a2c) = (undefined *)((uint)(&DATA_8c1f5a2c) | 0xa0000000);
  iVar1 = FUN_8c1f7ea8(&uStack_28,ar5,ar6,ar7);
  if (iVar1 == 0) {
    uVar3 = 2;
    uVar2 = 0;
    FUN_8c102bd0(0x31,0,2,ar7);
  }
  else {
    uVar3 = 1;
    uVar2 = 0;
    FUN_8c102bd0(0x34,0,1,ar7);
  }
  FUN_8c259a1c(0,uVar2,uVar3,ar7);
  _DAT_8c43b578 = malloc_thunk(0x2b000,uVar2,uVar3,ar7);
  uVar2 = 0x2b000;
  FUN_8c25b334(_DAT_8c43b578,0x2b000,uVar3,ar7,in_stack_ffffffc0);
  _DAT_8c43b57c = malloc_thunk(0x1db000,uVar2,uVar3,ar7);
  FUN_8c236250(_DAT_8c43b57c,0x1db000,uVar3,ar7);
  ar7_00 = 0;
  FUN_8c258b26(0xfffaf6f0,0,0x4b320,0);
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 0;
  FUN_8c233f98(0,0,0,ar7_00);
  FUN_8c2570ec(uVar2,uVar3,uVar4,ar7_00,in_stack_ffffffc0);
  _DAT_8c43b570 = malloc_thunk(0x1000,uVar3,uVar4,ar7_00);
  uVar4 = 0;
  uVar2 = 0x40;
  FUN_8c23633c(_DAT_8c43b570,0x40,0,ar7_00);
  FUN_8c255bea(0x8c42d408,uVar2,uVar4,ar7_00,in_stack_ffffffc0);
  _DAT_8c43b574 = malloc_thunk(0xabe00,uVar2,uVar4,ar7_00);
  FUN_8c233d6c(_DAT_8c43b574,11000,uVar4,ar7_00);
  uVar3 = 0x15e;
  uVar2 = 0x8c43b584;
  FUN_8c25b34a(0x8c43b584,0x15e,uVar4,ar7_00);
  FUN_8c213ee4(uVar2,uVar3,uVar4,ar7_00);
  uVar4 = 0xff000000;
  uVar2 = 0xff000000;
  FUN_8c259046(0xff000000,0xff000000,0xff000000,ar7_00);
  FUN_8c233d9c(0x820,uVar2,uVar4,ar7_00,in_stack_ffffffc0);
  uVar3 = 0x800;
  FUN_8c233da2(0xffffffff,0x800,uVar4,ar7_00,in_stack_ffffffc0);
  FUN_8c233dac(&uStack_28,uVar3,uVar4,ar7_00);
  FUN_8c259358(3,uVar3,uVar4,ar7_00);
  uVar2 = 1;
  FUN_8c2593ac(1,uVar3,uVar4,ar7_00);
  thunk_FUN_8c20a13a(uVar2,uVar3,uVar4,ar7_00);
  FUN_8c259556(2,uVar3,uVar4,ar7_00);
  FUN_8c259274(1,uVar3,uVar4,ar7_00);
  FUN_8c014370(5,uVar3,uVar4,ar7_00,in_stack_ffffffc0);
  _DAT_8c43b580 = malloc_thunk(0x4000,uVar3,uVar4,ar7_00);
  FUN_8c1f7ecc(_DAT_8c43b580,uVar3,uVar4,ar7_00);
  uVar2 = s_Tmcpack_idx_0c0448(0x8c286ebc,uVar3,uVar4,ar7_00);
  return uVar2;
}

__asm__(".globl _game_init\n.set _game_init, _game_init_def\n");
