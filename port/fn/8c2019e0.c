#include "../decls.h"
undefined4 FUN_8c2019e0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_8c1fa54c(*(undefined4 *)0x8c47e920,ar5,ar6,ar7);
  uVar2 = (int)0x130 + 0x8c47e6f0;
  uVar3 = 0x8c47e6f0;
  do {
    FUN_8c2020f8(uVar3,ar5,ar6,ar7);
    uVar3 = uVar3 + 0x4c;
  } while (uVar3 < uVar2);
  uVar2 = (int)0x100 + 0x8c47e820;
  uVar3 = 0x8c47e820;
  do {
    uVar1 = FUN_8c202116(uVar3,ar5,ar6,ar7);
    uVar3 = uVar3 + 0x10;
  } while (uVar3 < uVar2);
  return uVar1;
}

__asm__(".globl _FUN_8c2019e0\n.set _FUN_8c2019e0, _FUN_8c2019e0_def\n");
