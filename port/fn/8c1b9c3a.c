#include "../decls.h"
undefined4 FUN_8c1b9c3a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  int extraout_r3;
  int in_GBR;
  
  FUN_8c1ba52c(ar4,ar5,ar6,ar7);
  *(undefined4 *)(extraout_r3 + 0x18) = ar6;
  FUN_8c1b9a34(ar4,ar5,ar6,ar7,s0);
  uVar1 = FUN_8c1b9b9e(ar4,ar5,ar6,(int)&s0 << 0x10 | (uint)&s0 >> 0x10,s0);
  *(short *)(in_GBR + 0x18e) = (short)uVar1;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9c3a\n.set _FUN_8c1b9c3a, _FUN_8c1b9c3a_def\n");
