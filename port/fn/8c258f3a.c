#include "../decls.h"
undefined4 * FUN_8c258f3a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int *ar4_00;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar2 = sh4_tmu_1f88e6(ar4,ar5,ar6,ar7);
  puVar1 = (&FUN_8c20b260);
  *(undefined4 *)0x8c4aad24 = uVar2;
  (*(code *)puVar1)(ar4,ar5,ar6,ar7);
  ar4_00 = 0x8c4aa540;
  puVar1 = (&sh4_tmu_1f88e6);
  *(undefined4 *)0x8c4aa540 = *(undefined4 *)0x8c4aa540 + 1;
  uVar2 = (*(code *)puVar1)(ar4_00,ar5,ar6,ar7);
  puVar4 = 0x8c4aabdc;
  *(undefined4 *)0x8c4aad28 = uVar2;
  puVar4 = (undefined4 *)*puVar4;
  *(undefined4 *)0x8c4aa4f4 = *puVar4;
  *(undefined4 *)0x8c4aa4f8 = puVar4[1];
  puVar3 = 0x8c4aa4fc;
  *(undefined4 *)0x8c4aa4fc = puVar4[2];
  *(undefined4 *)0x8c4aa500 = puVar4[3];
  *(undefined4 *)0x8c4aa504 = puVar4[4];
  return puVar3;
}

__asm__(".globl _FUN_8c258f3a\n.set _FUN_8c258f3a, _FUN_8c258f3a_def\n");
