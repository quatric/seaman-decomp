#include "../decls.h"
undefined4 FUN_8c1f0232_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_8c1efffa(ar5,(int)0x100,ar6,ar7);
  if (pbVar1 == (byte *)0x0) {
    return 0xffffffff;
  }
  *ar4 = (uint)*pbVar1;
  ar4[1] = (uint)pbVar1[1];
  return 0;
}

__asm__(".globl _FUN_8c1f0232\n.set _FUN_8c1f0232, _FUN_8c1f0232_def\n");
