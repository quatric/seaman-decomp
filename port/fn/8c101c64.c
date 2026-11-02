#include "../decls.h"
int FUN_8c101c64_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  
  FUN_8c101da0(ar4,ar5,ar6,ar7);
  *(undefined4 *)(0xb4 + ar4) = 0;
  *(undefined1 *)(0xb8 + ar4) = 0;
  *(undefined4 *)(0xbc + ar4) = 0xa2be8;
  *(undefined4 *)(0xc4 + ar4) = 0;
  for (bVar3 = 0; bVar3 < 4; bVar3 = bVar3 + 1) {
    *(undefined4 *)(ar4 + (uint)bVar3 * 0x10 + 0x30) = 0;
    *(undefined4 *)(ar4 + (uint)bVar3 * 0x10 + 0x34) = 0;
    if (*(int *)(ar4 + (uint)bVar3 * 0x10 + 0x38) != -1) {
      (*(code *)(&FUN_8c021ab4))
                (0x8c2b59d0,*(undefined4 *)(ar4 + (uint)bVar3 * 0x10 + 0x38),ar6,ar7);
      *(undefined4 *)(ar4 + (uint)bVar3 * 0x10 + 0x38) = 0xffffffff;
    }
    *(undefined4 *)(ar4 + (uint)bVar3 * 0x10 + 0x3c) = 0;
  }
  bVar1 = false;
  while (!bVar1) {
    *(undefined4 *)(0x80 + ar4) = 0;
    *(undefined4 *)(0x84 + ar4) = 0;
    *(undefined4 *)(0x8c + ar4) = 0;
    bVar1 = true;
  }
  iVar2 = 0xb0;
  *(undefined4 *)(0xb0 + ar4) = 0;
  return iVar2;
}

__asm__(".globl _FUN_8c101c64\n.set _FUN_8c101c64, _FUN_8c101c64_def\n");
