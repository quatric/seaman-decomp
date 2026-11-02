#include "../decls.h"
undefined4 FUN_8c1bab30_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 in_r0;
  int in_GBR;
  
  *(undefined2 *)(in_GBR + 0x1ba) = in_r0;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1bab30\n.set _FUN_8c1bab30, _FUN_8c1bab30_def\n");
