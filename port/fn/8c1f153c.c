#include "../decls.h"
uint FUN_8c1f153c_def(uint ar4,byte *ar5,int ar6,undefined4 ar7)

{
  byte bVar1;
  bool bVar2;
  
  while (bVar2 = 0 < ar6, ar6 = ar6 + -1, bVar2) {
    bVar1 = *ar5;
    ar5 = ar5 + 1;
    ar4 = (ar4 & 0xff) << 8 ^
          (int)*(short *)(&DAT_8c26c2a0 + ((int)(ar4 & 0xffff) >> 8 ^ (uint)bVar1) * 2);
  }
  return ar4;
}

__asm__(".globl _FUN_8c1f153c\n.set _FUN_8c1f153c, _FUN_8c1f153c_def\n");
