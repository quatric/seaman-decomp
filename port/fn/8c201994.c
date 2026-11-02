#include "../decls.h"
undefined4 FUN_8c201994_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  int ar4_00;
  undefined *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (int)0x130 + 0x8c47e6f0;
  uVar4 = 0x8c47e6f0;
  do {
    FUN_8c2020f8(uVar4,ar5,ar6,ar7);
    uVar4 = uVar4 + 0x4c;
  } while (uVar4 < uVar3);
  uVar3 = (int)0x100 + 0x8c47e820;
  uVar4 = 0x8c47e820;
  do {
    FUN_8c202116(uVar4,ar5,ar6,ar7);
    uVar4 = uVar4 + 0x10;
  } while (uVar4 < uVar3);
  ar4_00 = (int)0xa00;
  ar7_00 = 0;
  ar6_00 = 0x20;
  ar5_00 = (&FUN_8c201b10);
  uVar2 = FUN_8c1fa244(ar4_00,(&FUN_8c201b10),0x20,0);
  puVar1 = (&FUN_8c2029fc);
  *(undefined4 *)0x8c47e920 = uVar2;
  (*(code *)puVar1)(ar4_00,ar5_00,ar6_00,ar7_00);
  return 0;
}

__asm__(".globl _FUN_8c201994\n.set _FUN_8c201994, _FUN_8c201994_def\n");
