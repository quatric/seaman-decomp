#include "../decls.h"
undefined4 FUN_8c1f002a_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_8c1efffa(ar5,1,ar6,ar7);
  if (pbVar1 == (byte *)0x0) {
    return 0xffffffff;
  }
  *ar4 = (uint)pbVar1[1] << 0x10 | (uint)pbVar1[2] << 8 | (uint)*pbVar1 << 0x18 | (uint)pbVar1[3];
  return 0;
}

__asm__(".globl _FUN_8c1f002a\n.set _FUN_8c1f002a, _FUN_8c1f002a_def\n");
