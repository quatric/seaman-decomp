#include "../decls.h"
uint FUN_8c1f8710_def(byte *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  
  uVar2 = 0;
  pbVar4 = ar4 + 8;
  do {
    bVar1 = *ar4;
    ar4 = ar4 + 1;
    uVar3 = uVar2;
    if ((&DAT_8c26c9f0)[bVar1 & 0xf] == (&DAT_8c26c9f0)[(int)(uint)bVar1 >> 4]) {
      uVar3 = uVar2 | 1;
    }
    uVar2 = uVar3 << 1;
  } while (ar4 < pbVar4);
  return uVar3 & 0x7fffffff;
}

__asm__(".globl _FUN_8c1f8710\n.set _FUN_8c1f8710, _FUN_8c1f8710_def\n");
