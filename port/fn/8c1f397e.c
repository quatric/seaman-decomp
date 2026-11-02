#include "../decls.h"
undefined4 FUN_8c1f397e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (DAT_8c2739f0 != 0) {
                    
                    
    uVar1 = (**(code **)(DAT_8c2739f0 + 0x3c))();
    return uVar1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f397e\n.set _FUN_8c1f397e, _FUN_8c1f397e_def\n");
