#include "../decls.h"
undefined4 FUN_8c1b9044_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int unaff_r13;
  
  *(undefined4 *)(unaff_r13 + 0x30) = in_r0;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9044\n.set _FUN_8c1b9044, _FUN_8c1b9044_def\n");
