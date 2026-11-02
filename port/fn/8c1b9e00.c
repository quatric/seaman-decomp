#include "../decls.h"
undefined4 FUN_8c1b9e00_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  FUN_8c1b9c70(ar4,ar5,ar6,ar7,in_PR);
  FUN_8c1b9b02(ar4,ar5,ar6,ar7,in_PR);
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9e00\n.set _FUN_8c1b9e00, _FUN_8c1b9e00_def\n");
