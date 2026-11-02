#include "../decls.h"
undefined4 FUN_8c1b9a34_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 in_r0;
  int in_GBR;
  
  *(undefined1 *)(in_GBR + 0x95) = in_r0;
  *(undefined1 *)(in_GBR + 0xf1) = in_r0;
                    
  halt_unimplemented();
}

__asm__(".globl _FUN_8c1b9a34\n.set _FUN_8c1b9a34, _FUN_8c1b9a34_def\n");
