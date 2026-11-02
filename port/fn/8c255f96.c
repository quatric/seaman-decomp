#include "../decls.h"
uint FUN_8c255f96_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(ar4 + 0x18) >> 0x10 & 0xff00;
  if ((uVar1 == (int)0x500) || (uVar1 == (int)0x600)) {
    uVar2 = 0x3f;
  }
  else {
    if ((uVar1 != (int)0x700) && (uVar1 != (int)0x800)) {
      return uVar1;
    }
    uVar2 = 0x30;
  }
  *(uint *)(ar4 + 0xc) = *(uint *)(ar4 + 0xc) & 0xf81fffff;
  *(uint *)(ar4 + 0xc) = *(uint *)(ar4 + 0xc) | (uVar2 & ar5) << 0x15;
  *(uint *)(ar4 + 4) = ar5;
  return uVar1;
}

__asm__(".globl _FUN_8c255f96\n.set _FUN_8c255f96, _FUN_8c255f96_def\n");
