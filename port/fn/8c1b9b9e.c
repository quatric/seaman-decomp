#include "../decls.h"
undefined4 FUN_8c1b9b9e_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 in_r0;
  undefined1 unaff_r12;
  int in_GBR;
  
  *(undefined2 *)(in_GBR + 10) = in_r0;
  *(undefined2 *)(in_GBR + 0x1a4) = in_r0;
  *ar4 = unaff_r12;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9b9e\n.set _FUN_8c1b9b9e, _FUN_8c1b9b9e_def\n");
