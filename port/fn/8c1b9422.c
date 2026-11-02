#include "../decls.h"
undefined4 FUN_8c1b9422_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 in_r0;
  int in_GBR;
  
  *(undefined2 *)(in_GBR + 0x172) = in_r0;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9422\n.set _FUN_8c1b9422, _FUN_8c1b9422_def\n");
