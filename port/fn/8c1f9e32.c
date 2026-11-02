#include "../decls.h"
undefined4 FUN_8c1f9e32_def(uint ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  byte in_IMASK;
  byte in_S;
  
  if (ar5 != 0) {
    uVar3 = 0x9fffffe0 & ar4;
    if (0x10000 <= ar5) {
                    
                    
      uVar1 = (*(code *)(0xa0000000 | 0x8c1f9ebc))
                        ((short)((((uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4),0);
      return uVar1;
    }
    uVar2 = (ar4 & 0x1f) + ar5 + 0x1f >> 5;
    do {
      CacheBlockWriteBack(uVar3);
      uVar2 = uVar2 - 1;
      uVar3 = uVar3 + 0x20;
    } while (uVar2 != 0);
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1f9e32\n.set _FUN_8c1f9e32, _FUN_8c1f9e32_def\n");
