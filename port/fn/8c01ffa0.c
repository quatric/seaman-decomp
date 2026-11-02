#include "../decls.h"
uint FUN_8c01ffa0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4,
                 undefined4 s8)

{
  int ar6_00;
  
  ar6_00 = FUN_8c02000c(ar4,ar5,ar6,ar7,s0,s4);
  if (ar6_00 != 0) {
    FUN_8c0205e8(ar4,ar4 + 0x20,ar6_00,ar7);
    FUN_8c0206b8(ar4,ar6_00,s8,ar7);
  }
  return (uint)(ar6_00 != 0);
}

__asm__(".globl _FUN_8c01ffa0\n.set _FUN_8c01ffa0, _FUN_8c01ffa0_def\n");
