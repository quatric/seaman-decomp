#include "../decls.h"
undefined4 FUN_8c1b9552_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  undefined2 in_r0;
  undefined4 in_r2;
  int in_GBR;
  
  *(undefined4 *)(ar7 + 0x14) = in_r2;
  *(undefined2 *)(in_GBR + 0x1a8) = in_r0;
                    
  halt_unimplemented();
}

__asm__(".globl _FUN_8c1b9552\n.set _FUN_8c1b9552, _FUN_8c1b9552_def\n");
