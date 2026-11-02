#include "../decls.h"
undefined4 FUN_8c1f0142_def(short *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_8c1efffa(ar5,4,ar6,ar7);
  if (pbVar1 == (byte *)0x0) {
    return 0xffffffff;
  }
  *ar4 = *pbVar1 + 1;
  ar4[1] = (pbVar1[1] + 1) * 0x20;
  ar4[2] = (ushort)(pbVar1[2] >> 4);
  *(byte *)(ar4 + 3) = pbVar1[3] >> 6;
  *(byte *)((int)ar4 + 7) = pbVar1[3] >> 5 & 1;
  return 0;
}

__asm__(".globl _FUN_8c1f0142\n.set _FUN_8c1f0142, _FUN_8c1f0142_def\n");
