#include "../decls.h"
undefined4 FUN_8c1b9834_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r3;
  
  *(BADSPACEBASE **)(in_r3 + 0xc) = register0x0000003c;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9834\n.set _FUN_8c1b9834, _FUN_8c1b9834_def\n");
