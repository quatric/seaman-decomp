#include "../decls.h"
undefined4 FUN_8c2616a8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
                    
                    
  uVar1 = (*(code *)(0xa0000000 | 0x8c2616d4))
                    ((short)((((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4));
  return uVar1;
}

__asm__(".globl _FUN_8c2616a8\n.set _FUN_8c2616a8, _FUN_8c2616a8_def\n");
