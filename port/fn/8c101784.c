#include "../decls.h"
undefined4 FUN_8c101784_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  undefined4 uVar2;
  byte bVar3;
  
  *(undefined4 *)(ar4 + 0x2c) = 0;
  for (bVar3 = 0; bVar3 < 4; bVar3 = bVar3 + 1) {
    *(undefined4 *)(ar4 + (uint)bVar3 * 0x10 + 0x38) = 0xffffffff;
  }
  bVar1 = false;
  while (!bVar1) {
    *(undefined4 *)(0x88 + ar4) = 0xffffffff;
    bVar1 = true;
  }
  uVar2 = FUN_8c101c64(ar4,ar5,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c101784\n.set _FUN_8c101784, _FUN_8c101784_def\n");
