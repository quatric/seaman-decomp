#include "../decls.h"
uint FUN_8c0e08f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,uint *s0)

{
  undefined4 uStack_4;
  
  uStack_4 = uStack_4 & 0xfffffffc;
  if (*(int *)(0x22814 + ar4) == 1) {
    uStack_4 = uStack_4 | 2;
  }
  if (*(int *)(0x22810 + ar4) == 1) {
    uStack_4 = uStack_4 | 1;
  }
  *s0 = uStack_4;
  return uStack_4;
}

__asm__(".globl _FUN_8c0e08f0\n.set _FUN_8c0e08f0, _FUN_8c0e08f0_def\n");
