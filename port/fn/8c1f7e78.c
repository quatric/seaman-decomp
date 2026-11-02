#include "../decls.h"
undefined4 FUN_8c1f7e78_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c1fa0c4(ar4,ar5,ar6,ar7);
                    
                    
  uVar1 = (*(code *)*(undefined4 *)0x8c0000e0)(2);
  return uVar1;
}

__asm__(".globl _FUN_8c1f7e78\n.set _FUN_8c1f7e78, _FUN_8c1f7e78_def\n");
