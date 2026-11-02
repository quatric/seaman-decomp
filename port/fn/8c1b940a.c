#include "../decls.h"
undefined4 FUN_8c1b940a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 in_r0;
  int in_GBR;
  
  *(undefined2 *)(in_GBR + 0x1aa) = in_r0;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b940a\n.set _FUN_8c1b940a, _FUN_8c1b940a_def\n");
