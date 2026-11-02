#include "../decls.h"
uint FUN_8c1f109c_def(int ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0xffff;
  while (ar4 = ar4 + -1, -1 < ar4) {
    bVar1 = *ar5;
    ar5 = ar5 + 1;
    uVar2 = (uVar2 & 0xffff) << 8 ^
            (int)*(short *)(&DAT_8c26c050 + ((int)(uVar2 & 0xffff) >> 8 ^ (uint)bVar1) * 2);
  }
  return ~(uVar2 & 0xffff) & 0xffff;
}

__asm__(".globl _FUN_8c1f109c\n.set _FUN_8c1f109c, _FUN_8c1f109c_def\n");
