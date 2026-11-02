#include "../decls.h"
undefined4 FUN_8c1b982c_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 unaff_r9;
  
  *(undefined1 *)(ar5 + -1) = unaff_r9;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b982c\n.set _FUN_8c1b982c, _FUN_8c1b982c_def\n");
