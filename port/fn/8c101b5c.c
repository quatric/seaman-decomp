#include "../decls.h"
int FUN_8c101b5c_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  
  uVar3 = 0x61a1c;
  if (((0x61a1c < ar5) && (uVar3 = 0x82334, 0x82334 < ar5)) &&
     (uVar3 = 0xc349c, ar5 <= 0xc349c)) {
    uVar3 = 0xa2be8;
  }
  *(uint *)(0xbc + ar4) = uVar3;
  *(undefined4 *)0x8c4413c0 = *(uint *)(0xbc + ar4) >> 3;
  for (bVar4 = 0; bVar4 < 4; bVar4 = bVar4 + 1) {
    uVar1 = FUN_8c02192c(0x8c2b59d0,ar5,ar6,ar7);
    *(undefined4 *)(ar4 + (uint)bVar4 * 0x10 + 0x38) = uVar1;
  }
  *(undefined4 *)(0xb0 + ar4) = 1;
  iVar2 = 0xc4;
  *(undefined4 *)(0xc4 + ar4) = 1;
  return iVar2;
}

__asm__(".globl _FUN_8c101b5c\n.set _FUN_8c101b5c, _FUN_8c101b5c_def\n");
