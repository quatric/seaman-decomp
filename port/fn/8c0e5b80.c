#include "../decls.h"
uint FUN_8c0e5b80_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,uint *s0)

{
  undefined4 uStack_4;
  
  uStack_4 = uStack_4 & 0xfffffffc | 1;
  *s0 = uStack_4;
  return uStack_4;
}

__asm__(".globl _FUN_8c0e5b80\n.set _FUN_8c0e5b80, _FUN_8c0e5b80_def\n");
