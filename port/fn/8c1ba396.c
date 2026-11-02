#include "../decls.h"
undefined4 FUN_8c1ba396_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 in_r0;
  int in_GBR;
  
  *(undefined2 *)(in_GBR + 0x166) = in_r0;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1ba396\n.set _FUN_8c1ba396, _FUN_8c1ba396_def\n");
