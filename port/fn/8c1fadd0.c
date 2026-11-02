#include "../decls.h"
undefined4 FUN_8c1fadd0_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int a4;
  
  iVar3 = 0x1c;
  do {
    uVar2 = -iVar3;
    if ((int)uVar2 < 0) {
      uVar2 = ar4 >> (~uVar2 & 0x1f) + 1;
    }
    else {
      uVar2 = ar4 << (uVar2 & 0x1f);
    }
    uVar2 = uVar2 & 0xf;
    if (uVar2 < 10) {
      a4 = uVar2 + 0x30;
    }
    else {
      a4 = uVar2 + 0x37;
    }
    uVar1 = FUN_8c1fac58(a4,ar5,ar6,ar7);
    iVar3 = iVar3 + -4;
  } while (-1 < iVar3);
  return uVar1;
}

__asm__(".globl _FUN_8c1fadd0\n.set _FUN_8c1fadd0, _FUN_8c1fadd0_def\n");
