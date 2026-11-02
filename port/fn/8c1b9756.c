#include "../decls.h"
undefined4 FUN_8c1b9756_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int in_GBR;
  
  *(undefined4 *)(in_GBR + 0x54) = in_r0;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9756\n.set _FUN_8c1b9756, _FUN_8c1b9756_def\n");
