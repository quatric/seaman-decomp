#include "../decls.h"
uint FUN_8c0b77a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar6_00;
  int iStack_c;
  int aiStack_8 [2];
  
  aiStack_8[0] = 0;
  iStack_c = 0;
  ar6_00 = 0x4208;
  (*(code *)(&FUN_8c0b7454))
            ((&DATA_8c13bfe4) + 0x42,0x8c431a68,0x4208,ar7);
  FUN_8c1f826c(ar4,aiStack_8,ar6_00,ar7);
  FUN_8c1f826c(0x8c431a68 + 0x1e,&iStack_c,ar6_00,ar7);
  return (uint)(aiStack_8[0] == iStack_c);
}

__asm__(".globl _FUN_8c0b77a0\n.set _FUN_8c0b77a0, _FUN_8c0b77a0_def\n");
