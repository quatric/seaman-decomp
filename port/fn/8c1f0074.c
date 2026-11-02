#include "../decls.h"
undefined4 FUN_8c1f0074_def(short *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_8c1efffa(ar5,2,ar6,ar7);
  if (pbVar1 != (byte *)0x0) {
    *ar4 = *pbVar1 + 1;
    ar4[1] = (pbVar1[1] + 1) * 0x20;
    ar4[2] = (ushort)(pbVar1[2] >> 4);
    ar4[3] = pbVar1[2] & 0xf;
    ar4[4] = (ushort)(pbVar1[3] >> 7);
    return 0;
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f0074\n.set _FUN_8c1f0074, _FUN_8c1f0074_def\n");
