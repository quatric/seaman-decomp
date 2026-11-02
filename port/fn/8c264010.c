#include "../decls.h"
undefined4 FUN_8c264010_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *ar4_01;
  char *a4;
  
  ar4_00 = sh4_tmu_1f88e6(ar4,ar5,ar6,ar7);
  FUN_8c2630cc(ar4,ar5,ar6,ar7);
  uVar1 = sh4_tmu_1f88e6(ar4,ar5,ar6,ar7);
  uVar3 = ar4_00;
  uVar2 = uVar1;
  DAT_8c27848c = FUN_8c1f88f0(ar4_00,uVar1,ar6,ar7);
  thunk_FUN_8c2695e4(uVar3,uVar2,ar6,ar7);
  uVar2 = sh4_tmu_1f88e6(uVar3,uVar2,ar6,ar7);
  uVar3 = uVar2;
  DAT_8c278490 = FUN_8c1f88f0(uVar1,uVar2,ar6,ar7);
  FUN_8c262524(uVar1,uVar3,ar6,ar7);
  uVar1 = sh4_tmu_1f88e6(uVar1,uVar3,ar6,ar7);
  uVar3 = uVar1;
  DAT_8c278494 = FUN_8c1f88f0(uVar2,uVar1,ar6,ar7);
  FUN_8c26371e(uVar2,uVar3,ar6,ar7);
  uVar2 = sh4_tmu_1f88e6(uVar2,uVar3,ar6,ar7);
  uVar3 = uVar2;
  DAT_8c278498 = FUN_8c1f88f0(uVar1,uVar2,ar6,ar7);
  a4 = &DAT_8c277fd0;
  do {
    ar4_01 = a4;
    if (*a4 == '\x01') {
      FUN_8c264e84(a4,uVar3,ar6,ar7);
    }
    a4 = a4 + 0x94;
  } while (a4 < &DAT_8c278470);
  uVar3 = sh4_tmu_1f88e6(ar4_01,uVar3,ar6,ar7);
  DAT_8c27849c = FUN_8c1f88f0(uVar2,uVar3,ar6,ar7);
  DAT_8c278488 = FUN_8c1f88f0(ar4_00,uVar3,ar6,ar7);
  return DAT_8c278488;
}

__asm__(".globl _FUN_8c264010\n.set _FUN_8c264010, _FUN_8c264010_def\n");
